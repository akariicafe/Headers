@interface NSKeyPathExpression : NSFunctionExpression

- (id)predicateFormat;
- (id)pathExpression;
- (id)initWithOperand:(id)a0 andKeyPath:(id)a1;
- (id)initWithKeyPath:(id)a0;
- (void)dealloc;
- (id)keyPath;

@end
