@class NSString, _UIAssetManager, UIColor;

@interface UIDynamicCatalogColor : UIDynamicColor {
    NSString *_name;
    _UIAssetManager *_assetManager;
    UIColor *_genericColor;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _cachedColorLock;
    UIColor *_cachedColor;
    unsigned long long _cachedThemeKey;
}

+ (BOOL)supportsSecureCoding;

- (id)_resolvedColorWithTraitCollection:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void)_setDebugName:(id)a0;
- (id)initWithName:(id)a0 assetManager:(id)a1 genericColor:(id)a2;
- (id)_initForNibEncodingWithName:(id)a0 genericColor:(id)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)_debugName;
- (id)description;
- (id)_debugCatalogBundleIdentifier;
- (void)_setDebugCatalogBundleIdentifier:(id)a0;
- (void).cxx_destruct;

@end
