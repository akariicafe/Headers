@class NSExpression, NSArray;

@interface NSFunctionExpression : NSExpression {
    NSExpression *_operand;
    SEL _selector;
    NSArray *_arguments;
}

+ (BOOL)supportsSecureCoding;

- (id)predicateFormat;
- (id)initWithExpressionType:(unsigned long long)a0 operand:(id)a1 selector:(SEL)a2 argumentArray:(id)a3;
- (id)function;
- (id)initWithTarget:(id)a0 selectorName:(id)a1 arguments:(id)a2;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)arguments;
- (id)binaryOperatorForSelector;
- (void)allowEvaluation;
- (id)initWithSelector:(SEL)a0 argumentArray:(id)a1;
- (BOOL)_shouldUseParensWithDescription;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (SEL)selector;
- (BOOL)isEqual:(id)a0;
- (id)_expressionWithSubstitutionVariables:(id)a0;
- (id)operand;
- (void)acceptVisitor:(id)a0 flags:(unsigned long long)a1;
- (id)expressionValueWithObject:(id)a0 context:(id)a1;
- (void)encodeWithCoder:(id)a0;

@end
