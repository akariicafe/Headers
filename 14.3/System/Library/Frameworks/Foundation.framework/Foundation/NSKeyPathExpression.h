@interface NSKeyPathExpression : NSFunctionExpression

- (id)predicateFormat;
- (id)keyPath;
- (void)dealloc;
- (id)pathExpression;
- (id)initWithOperand:(id)a0 andKeyPath:(id)a1;
- (id)initWithKeyPath:(id)a0;

@end
