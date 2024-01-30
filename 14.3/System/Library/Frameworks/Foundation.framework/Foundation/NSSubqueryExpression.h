@class NSExpression, NSPredicate;

@interface NSSubqueryExpression : NSExpression {
    NSExpression *_collection;
    NSExpression *_variableExpression;
    NSPredicate *_subpredicate;
}

+ (BOOL)supportsSecureCoding;

- (id)predicateFormat;
- (id)collection;
- (id)initWithExpression:(id)a0 usingIteratorExpression:(id)a1 predicate:(id)a2;
- (id)initWithExpression:(id)a0 usingIteratorVariable:(id)a1 predicate:(id)a2;
- (id)predicate;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (void)allowEvaluation;
- (BOOL)_shouldUseParensWithDescription;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)_expressionWithSubstitutionVariables:(id)a0;
- (id)variableExpression;
- (id)variable;
- (void)acceptVisitor:(id)a0 flags:(unsigned long long)a1;
- (id)expressionValueWithObject:(id)a0 context:(id)a1;
- (void)encodeWithCoder:(id)a0;

@end
