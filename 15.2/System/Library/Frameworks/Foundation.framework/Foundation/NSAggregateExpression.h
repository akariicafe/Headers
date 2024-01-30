@interface NSAggregateExpression : NSExpression {
    id _collection;
}

+ (BOOL)supportsSecureCoding;

- (void)acceptVisitor:(id)a0 flags:(unsigned long long)a1;
- (id)predicateFormat;
- (void)encodeWithCoder:(id)a0;
- (id)constantValue;
- (id)_expressionWithSubstitutionVariables:(id)a0;
- (id)collection;
- (id)expressionValueWithObject:(id)a0 context:(id)a1;
- (void)allowEvaluation;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithCollection:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (void)dealloc;

@end
