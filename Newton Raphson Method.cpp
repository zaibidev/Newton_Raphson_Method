#include<iostream>
using namespace std;
float polynomial_expression(float p)
{
	return (p*p - 3);
}
float polynomial_expression_02(float p)
{
	return (2 * p);
}
int main()
{

	float m = NULL, n = NULL, ans = NULL;
	int i = NULL;
	for (i = 0; i < 20; i++)
	{
		if (polynomial_expression(i) < 0 && polynomial_expression(i + 1) > 0)
		{
			cout << "The root is : = [ " << i << " ,  " << i + 1 << " ] " << endl;
			cout << "As  f(" << i << ")" << " =  " << polynomial_expression(i) << " > 0" << endl;
			cout << "And f(" << i + 1 << ")" << "  = " << polynomial_expression(i + 1) << " < 0" << endl;
			m = i;
			n = i + 1;
			break;
		}
		if (polynomial_expression(i) > 0 && polynomial_expression(i + 1) < 0)
		{
			cout << "The root is : = [ " << i << " ,  " << i + 1 << " ] " << endl;
			cout << "As  f(" << i << ")" << " =  " << polynomial_expression(i) << " < 0" << endl;
			cout << "And f(" << i + 1 << ")" << "  = " << polynomial_expression(i + 1) << " > 0" << endl;
			m = i;
			n = i + 1;
			break;
		}
	}
	i = 1;
	ans = (m + n) / 2;
	while (i < 20)
	{
		if (i != 1)
			cout << "For the next approximation" << endl << i << " The number of iteration is " << ans << endl;
		cout << "f(" << ans << ")" << " = " << polynomial_expression(ans) << endl << endl;
		ans = (ans - (polynomial_expression(ans)) / polynomial_expression_02(ans));

		if (polynomial_expression(ans) > 0)
		{
			n = ans;
		}
		else if (polynomial_expression(ans) < 0)
			m = ans;
		else
			break;
		i = i + 1;
	}
	cout << "The final approximation is : = " << ans << endl;
	system("pause");
}