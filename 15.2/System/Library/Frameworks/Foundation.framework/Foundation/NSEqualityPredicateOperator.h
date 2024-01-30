@interface NSEqualityPredicateOperator : NSPredicateOperator {
    BOOL _negate;
    unsigned long long _options;
}

+ (BOOL)supportsSecureCoding;

- (BOOL)isNegation;
- (id)predicateFormat;
- (id)initWithOperatorType:(unsigned long long)a0 modifier:(unsigned long long)a1 negate:(BOOL)a2;
- (BOOL)performPrimitiveOperationUsingObject:(id)a0 andObject:(id)a1;
- (void)_setOptions:(unsigned long long)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithOperatorType:(unsigned long long)a0 modifier:(unsigned long long)a1 negate:(BOOL)a2 options:(unsigned long long)a3;
- (unsigned long long)options;
- (void)setNegation:(BOOL)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
