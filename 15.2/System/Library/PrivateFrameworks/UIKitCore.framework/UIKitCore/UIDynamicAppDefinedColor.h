@class NSDictionary;

@interface UIDynamicAppDefinedColor : UIDynamicColor {
    NSDictionary *_colorsByThemeKey;
}

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)_resolvedColorWithTraitCollection:(id)a0;
- (id)_generateColorsByTraitCollection;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_initWithColorsByThemeKey:(id)a0;
- (unsigned long long)hash;
- (id)initWithColorsByTraitCollection:(id)a0;

@end
