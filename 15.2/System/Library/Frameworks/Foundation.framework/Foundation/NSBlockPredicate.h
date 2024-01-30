@interface NSBlockPredicate : NSPredicate {
    id /* block */ _block;
}

+ (BOOL)supportsSecureCoding;

- (void)acceptVisitor:(id)a0 flags:(unsigned long long)a1;
- (id)predicateFormat;
- (id)initWithBlock:(id /* block */)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)evaluateWithObject:(id)a0 substitutionVariables:(id)a1;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id /* block */)_predicateBlock;
- (void)dealloc;
- (id)predicateWithSubstitutionVariables:(id)a0;

@end
