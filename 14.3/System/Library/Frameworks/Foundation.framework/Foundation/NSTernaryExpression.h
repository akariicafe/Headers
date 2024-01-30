@class NSPredicate, NSExpression;

@interface NSTernaryExpression : NSExpression {
    NSPredicate *_predicate;
    NSExpression *_trueExpression;
    NSExpression *_falseExpression;
}

+ (BOOL)supportsSecureCoding;

- (id)predicateFormat;
- (id)initWithPredicate:(id)a0 trueExpression:(id)a1 falseExpression:(id)a2;
- (id)predicate;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)trueExpression;
- (void)allowEvaluation;
- (id)initWithCoder:(id)a0;
- (id)falseExpression;
- (BOOL)isEqual:(id)a0;
- (id)_expressionWithSubstitutionVariables:(id)a0;
- (void)acceptVisitor:(id)a0 flags:(unsigned long long)a1;
- (id)expressionValueWithObject:(id)a0 context:(id)a1;
- (void)encodeWithCoder:(id)a0;

@end
