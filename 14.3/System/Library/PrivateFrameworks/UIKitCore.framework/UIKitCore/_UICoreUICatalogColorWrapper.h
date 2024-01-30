@class NSString, UIColor, NSMutableDictionary;

@interface _UICoreUICatalogColorWrapper : NSObject <NSCoding> {
    NSString *_nibLoadingBundleID;
    NSMutableDictionary *_colorCache;
    BOOL _hasLoggedFailure;
}

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *bundleID;
@property (readonly, nonatomic) UIColor *fallbackColor;
@property (readonly, nonatomic) UIColor *color;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)bundle;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (id)colorCache;
- (BOOL)isEqual:(id)a0;
- (id)nibLoadingBundle;
- (BOOL)isEqualToCoreUICatalogColor:(id)a0;
- (id)_uikit_valueForTraitCollection:(id)a0;
- (id)cachedColorForDisplayGamut:(long long)a0;
- (id)initWithName:(id)a0 bundleID:(id)a1 fallbackColor:(id)a2;
- (void)setCachedColor:(id)a0 forDisplayGamut:(long long)a1;
- (struct CGColor { } *)cgColorForTraitCollection:(id)a0;
- (BOOL)_uikit_variesByTraitCollections;
- (void)encodeWithCoder:(id)a0;

@end
