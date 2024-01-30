@class NSDictionary;

@interface UIDynamicAppDefinedColor : UIDynamicColor {
    NSDictionary *_colorsByThemeKey;
}

+ (BOOL)supportsSecureCoding;

- (id)_resolvedColorWithTraitCollection:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)_initWithColorsByThemeKey:(id)a0;
- (id)initWithColorsByTraitCollection:(id)a0;
- (id)_generateColorsByTraitCollection;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;

@end
