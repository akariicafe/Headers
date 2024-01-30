@class NSExpression;

@interface NSSetExpression : NSExpression {
    NSExpression *_left;
    NSExpression *_right;
}

+ (BOOL)supportsSecureCoding;

- (id)predicateFormat;
- (id)initWithType:(unsigned long long)a0 leftExpression:(id)a1 rightExpression:(id)a2;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)leftExpression;
- (void)allowEvaluation;
- (id)rightExpression;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)_expressionWithSubstitutionVariables:(id)a0;
- (void)acceptVisitor:(id)a0 flags:(unsigned long long)a1;
- (id)expressionValueWithObject:(id)a0 context:(id)a1;
- (void)encodeWithCoder:(id)a0;

@end
