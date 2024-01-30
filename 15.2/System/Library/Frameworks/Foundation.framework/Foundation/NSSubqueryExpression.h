@class NSExpression, NSPredicate;

@interface NSSubqueryExpression : NSExpression {
    NSExpression *_collection;
    NSExpression *_variableExpression;
    NSPredicate *_subpredicate;
}

+ (BOOL)supportsSecureCoding;

- (void)acceptVisitor:(id)a0 flags:(unsigned long long)a1;
- (id)initWithExpression:(id)a0 usingIteratorExpression:(id)a1 predicate:(id)a2;
- (id)initWithExpression:(id)a0 usingIteratorVariable:(id)a1 predicate:(id)a2;
- (id)predicateFormat;
- (void)encodeWithCoder:(id)a0;
- (id)_expressionWithSubstitutionVariables:(id)a0;
- (BOOL)_shouldUseParensWithDescription;
- (id)predicate;
- (id)collection;
- (id)expressionValueWithObject:(id)a0 context:(id)a1;
- (id)variable;
- (id)variableExpression;
- (void)allowEvaluation;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (void)dealloc;

@end
