@class NSExpression, NSArray;

@interface NSFunctionExpression : NSExpression {
    NSExpression *_operand;
    SEL _selector;
    NSArray *_arguments;
}

+ (BOOL)supportsSecureCoding;

- (id)operand;
- (id)initWithExpressionType:(unsigned long long)a0 operand:(id)a1 selector:(SEL)a2 argumentArray:(id)a3;
- (void)acceptVisitor:(id)a0 flags:(unsigned long long)a1;
- (id)predicateFormat;
- (void)encodeWithCoder:(id)a0;
- (id)function;
- (id)arguments;
- (BOOL)_allowsEvaluation;
- (id)initWithTarget:(id)a0 selectorName:(id)a1 arguments:(id)a2;
- (id)_expressionWithSubstitutionVariables:(id)a0;
- (id)initWithSelector:(SEL)a0 argumentArray:(id)a1;
- (BOOL)_shouldUseParensWithDescription;
- (id)binaryOperatorForSelector;
- (id)expressionValueWithObject:(id)a0 context:(id)a1;
- (SEL)selector;
- (void)allowEvaluation;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (void)dealloc;

@end
