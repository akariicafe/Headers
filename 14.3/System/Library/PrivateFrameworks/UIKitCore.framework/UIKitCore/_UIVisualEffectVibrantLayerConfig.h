@class UIColor, NSDictionary;

@interface _UIVisualEffectVibrantLayerConfig : _UIVisualEffectLayerConfig

@property (readonly, nonatomic) UIColor *vibrantColor;
@property (readonly, nonatomic) UIColor *tintColor;
@property (readonly, copy, nonatomic) NSDictionary *filterAttributes;

+ (id)layerWithVibrantColor:(id)a0 tintColor:(id)a1 filterType:(id)a2;
+ (id)layerWithVibrantColor:(id)a0 tintColor:(id)a1 filterType:(id)a2 filterAttributes:(id)a3;

- (void).cxx_destruct;
- (void)configureLayerView:(id)a0;
- (id)description;
- (void)deconfigureLayerView:(id)a0;

@end
