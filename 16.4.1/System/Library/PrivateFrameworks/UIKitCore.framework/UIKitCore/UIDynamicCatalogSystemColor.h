@class UIColor;

@interface UIDynamicCatalogSystemColor : UIDynamicColor {
    long long _cuiColorName;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _colorCacheLock;
    UIColor *_cachedColor;
    unsigned long long _cachedThemeKey;
}

- (id)_resolvedColorWithTraitCollection:(id)a0;
- (id)initWithName:(id)a0 coreUIColorName:(long long)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)_resolvedMaterialWithTraitCollection:(id)a0;
- (void).cxx_destruct;

@end
