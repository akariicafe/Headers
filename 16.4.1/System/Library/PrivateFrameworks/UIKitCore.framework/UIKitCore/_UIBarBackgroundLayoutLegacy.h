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

- (id)bg1Effects;
- (id)bg1Color;
- (void)setUseExplicitGeometry:(BOOL)a0;
- (BOOL)shouldUseExplicitGeometry;
- (double)bg1ImageAlpha;
- (id)bg1ShadowColor;
- (double)bg1Alpha;
- (id)initWithLayout:(id)a0;
- (id)bg1Image;
- (BOOL)bg1HasShadow;
- (id)bg1ShadowEffect;
- (double)bg1ShadowAlpha;
- (double)bgInset;
- (id)bg1ShadowImage;
- (void)configureWithoutShadow;
- (void)configureShadowImage:(id)a0;
- (void)describeInto:(id)a0;
- (id)_colorForStyle:(long long)a0;
- (void)configureShadowForBarStyle:(long long)a0;
- (void)configureBackgroundColor:(id)a0 barStyle:(long long)a1 translucent:(BOOL)a2;
- (void)configureAsTransparent;
- (void)configureImage:(id)a0 forceTranslucent:(BOOL)a1;
- (id)_blurWithStyle:(long long)a0 tint:(id)a1;
- (void)configureImage:(id)a0 forceOpaque:(BOOL)a1 backgroundTintColor:(id)a2;
- (void)configureWithEffects:(id)a0;
- (void)configureEffectForStyle:(long long)a0 backgroundTintColor:(id)a1 forceOpaque:(BOOL)a2;
- (void)configureImage:(id)a0 forceOpaque:(BOOL)a1 barStyle:(long long)a2;
- (void).cxx_destruct;

@end
