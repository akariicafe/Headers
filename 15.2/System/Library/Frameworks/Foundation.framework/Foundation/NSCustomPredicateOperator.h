@interface NSCustomPredicateOperator : NSPredicateOperator {
    SEL _selector;
}

+ (BOOL)supportsSecureCoding;

- (id)symbol;
- (BOOL)performPrimitiveOperationUsingObject:(id)a0 andObject:(id)a1;
- (void)encodeWithCoder:(id)a0;
- (SEL)selector;
- (BOOL)isEqual:(id)a0;
- (id)initWithCustomSelector:(SEL)a0 modifier:(unsigned long long)a1;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
