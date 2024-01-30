@interface NSBlockPredicate : NSPredicate {
    id /* block */ _block;
}

+ (BOOL)supportsSecureCoding;

- (id)predicateFormat;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id /* block */)_predicateBlock;
- (id)initWithBlock:(id /* block */)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)evaluateWithObject:(id)a0 substitutionVariables:(id)a1;
- (id)predicateWithSubstitutionVariables:(id)a0;
- (void)acceptVisitor:(id)a0 flags:(unsigned long long)a1;
- (void)encodeWithCoder:(id)a0;

@end
