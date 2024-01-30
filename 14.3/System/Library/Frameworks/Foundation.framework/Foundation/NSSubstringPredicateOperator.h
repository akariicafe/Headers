@interface NSSubstringPredicateOperator : NSStringPredicateOperator {
    unsigned long long _position;
}

+ (BOOL)supportsSecureCoding;

- (unsigned long long)position;
- (BOOL)performPrimitiveOperationUsingObject:(id)a0 andObject:(id)a1;
- (id)symbol;
- (id)initWithCoder:(id)a0;
- (SEL)selector;
- (BOOL)isEqual:(id)a0;
- (id)initWithOperatorType:(unsigned long long)a0 modifier:(unsigned long long)a1 variant:(unsigned long long)a2 position:(unsigned long long)a3;
- (void)encodeWithCoder:(id)a0;

@end
