@interface UIDynamicProviderColor : UIDynamicColor {
    id /* block */ _provider;
}

+ (BOOL)supportsSecureCoding;

- (id)replacementObjectForCoder:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_resolvedColorWithTraitCollection:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)initWithProvider:(id /* block */)a0;
- (BOOL)isEqual:(id)a0;

@end
