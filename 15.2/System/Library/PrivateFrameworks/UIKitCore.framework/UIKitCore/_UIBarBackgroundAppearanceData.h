@class UIColor, NSArray, UIBlurEffect, UIImage, UIVibrancyEffect;

@interface _UIBarBackgroundAppearanceData : _UIBarAppearanceData {
    struct { unsigned char backgroundEffectsAreSingular : 1; unsigned char hasBackground : 1; unsigned char hasShadow : 1; unsigned char needsToCalculateVibrantEffect : 1; } _flags;
}

@property (copy, nonatomic) UIBlurEffect *backgroundEffect;
@property (copy, nonatomic) NSArray *backgroundEffects;
@property (copy, nonatomic) UIColor *backgroundColor;
@property (retain, nonatomic) UIImage *backgroundImage;
@property (nonatomic) long long backgroundImageContentMode;
@property (copy, nonatomic) UIColor *shadowColor;
@property (retain, nonatomic) UIImage *shadowImage;
@property (copy, nonatomic) UIVibrancyEffect *shadowEffect;
@property (readonly, nonatomic) BOOL hasBackground;
@property (readonly, nonatomic) BOOL hasShadow;
@property (readonly, nonatomic) UIVibrancyEffect *shadowViewEffect;
@property (readonly, nonatomic) UIColor *shadowViewBackgroundColor;
@property (readonly, nonatomic) UIColor *shadowViewTintColor;
@property (readonly, nonatomic) UIVibrancyEffect *defaultVibrancyEffect;

+ (id)transparentBackgroundData;
+ (id)standardBackgroundData;
+ (id)opaqueBackgroundData;
+ (id)decodeFromCoder:(id)a0 prefix:(id)a1;

- (long long)hashInto:(long long)a0;
- (void)_updateShadowFlags;
- (void)describeInto:(id)a0;
- (void)_updateBackgroundFlags;
- (id)replicate;
- (void)configureWithDefaultShadow;
- (void)configureWithoutShadow;
- (BOOL)checkEqualTo:(id)a0;
- (void)encodeToCoder:(id)a0 prefix:(id)a1;
- (void).cxx_destruct;
- (long long)behaviorForTransitioningTo:(id)a0;

@end
