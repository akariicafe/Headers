@class NSDictionary;

@interface UIDynamicAppDefinedColor : UIDynamicColor {
    NSDictionary *_colorsByThemeKey;
}

+ (BOOL)supportsSecureCoding;

- (id)_initWithColorsByThemeKey:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_resolvedColorWithTraitCollection:(id)a0;
- (id)initWithColorsByTraitCollection:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)_generateColorsByTraitCollection;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
