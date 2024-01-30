@interface UIDynamicProviderColor : UIDynamicColor {
    id /* block */ _provider;
}

+ (BOOL)supportsSecureCoding;

- (id)_resolvedColorWithTraitCollection:(id)a0;
- (id)initWithProvider:(id /* block */)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)replacementObjectForCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;

@end
