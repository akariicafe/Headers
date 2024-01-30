@class NSDictionary, UIColor;

@interface UIDynamicSystemColor : UIDynamicColor {
    NSDictionary *_colorsByThemeKey;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _cachedColorLock;
    UIColor *_cachedColor;
    unsigned long long _cachedThemeKey;
}

- (id)_resolvedColorWithTraitCollection:(id)a0;
- (id)_colorsByThemeKey;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)_setColorsByThemeKey:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithName:(id)a0 colorsByThemeKey:(id)a1;

@end
