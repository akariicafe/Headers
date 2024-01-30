@interface NSAggregateExpression : NSExpression {
    id _collection;
}

+ (BOOL)supportsSecureCoding;

- (id)predicateFormat;
- (id)collection;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (void)allowEvaluation;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)constantValue;
- (id)initWithCollection:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)_expressionWithSubstitutionVariables:(id)a0;
- (void)acceptVisitor:(id)a0 flags:(unsigned long long)a1;
- (id)expressionValueWithObject:(id)a0 context:(id)a1;
- (void)encodeWithCoder:(id)a0;

@end
