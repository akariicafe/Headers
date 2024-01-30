@class NSPredicate, NSExpression;

@interface NSTernaryExpression : NSExpression {
    NSPredicate *_predicate;
    NSExpression *_trueExpression;
    NSExpression *_falseExpression;
}

+ (BOOL)supportsSecureCoding;

- (void)acceptVisitor:(id)a0 flags:(unsigned long long)a1;
- (id)predicateFormat;
- (id)initWithPredicate:(id)a0 trueExpression:(id)a1 falseExpression:(id)a2;
- (void)encodeWithCoder:(id)a0;
- (id)_expressionWithSubstitutionVariables:(id)a0;
- (id)trueExpression;
- (id)falseExpression;
- (id)predicate;
- (id)expressionValueWithObject:(id)a0 context:(id)a1;
- (void)allowEvaluation;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;

@end
