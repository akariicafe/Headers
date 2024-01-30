@class UIColor, NSArray, UIVibrancyEffect, UIImage;

@interface _UIBarBackgroundLayoutLegacy : _UIBarBackgroundLayout {
    long long _translucence;
    UIImage *_backgroundImage;
    UIColor *_backgroundTintColor;
    NSArray *_backgroundEffects;
    UIImage *_shadowImage;
    UIColor *_shadowColor;
    UIVibrancyEffect *_shadowEffect;
    BOOL _hasShadow;
}

@property (readonly, nonatomic) UIImage *shadowImage;
@property (nonatomic) BOOL disableTinting;
@property (nonatomic) double topInset;
@property (readonly, nonatomic) BOOL hasBackgroundEffect;

- (id)bg1Color;
- (double)bg1Alpha;
- (BOOL)bg1HasShadow;
- (id)bg1Effects;
- (void)configureImage:(id)a0 forceTranslucent:(BOOL)a1;
- (double)bg1ImageAlpha;
- (double)bg1ShadowAlpha;
- (BOOL)shouldUseExplicitGeometry;
- (id)bg1ShadowColor;
- (id)bg1Image;
- (void)setUseExplicitGeometry:(BOOL)a0;
- (id)bg1ShadowEffect;
- (id)bg1ShadowImage;
- (void)configureAsTransparent;
- (double)bgInset;
- (id)initWithLayout:(id)a0;
- (void)describeInto:(id)a0;
- (void)configureBackgroundColor:(id)a0 barStyle:(long long)a1 translucent:(BOOL)a2;
- (void)configureShadowForBarStyle:(long long)a0;
- (id)_colorForStyle:(long long)a0;
- (void)configureWithoutShadow;
- (id)_blurWithStyle:(long long)a0 tint:(id)a1;
- (void).cxx_destruct;
- (void)configureWithEffects:(id)a0;
- (void)configureImage:(id)a0 forceOpaque:(BOOL)a1 barStyle:(long long)a2;
- (void)configureEffectForStyle:(long long)a0 backgroundTintColor:(id)a1 forceOpaque:(BOOL)a2;
- (void)configureShadowImage:(id)a0;
- (void)configureImage:(id)a0 forceOpaque:(BOOL)a1 backgroundTintColor:(id)a2;

@end
