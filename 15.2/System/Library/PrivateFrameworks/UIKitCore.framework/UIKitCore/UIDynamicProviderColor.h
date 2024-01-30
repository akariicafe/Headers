@interface UIDynamicProviderColor : UIDynamicColor {
    id /* block */ _provider;
}

+ (BOOL)supportsSecureCoding;

- (id)_resolvedColorWithTraitCollection:(id)a0;
- (id)description;
- (id)replacementObjectForCoder:(id)a0;
- (id)initWithProvider:(id /* block */)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;

@end
