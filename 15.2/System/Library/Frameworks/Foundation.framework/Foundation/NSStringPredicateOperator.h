@interface NSStringPredicateOperator : NSPredicateOperator {
    unsigned long long _flags;
}

+ (BOOL)supportsSecureCoding;

- (id)initWithOperatorType:(unsigned long long)a0 modifier:(unsigned long long)a1 variant:(unsigned long long)a2;
- (id)_modifierString;
- (void)_setOptions:(unsigned long long)a0;
- (void)encodeWithCoder:(id)a0;
- (unsigned long long)flags;
- (unsigned long long)options;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
