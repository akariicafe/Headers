@class UIColor, NSArray, UIVibrancyEffect, UIImage;

@interface _UIBarBackgroundLayout : NSObject <NSCopying>

@property (readonly, nonatomic) double bgInset;
@property (readonly, nonatomic) BOOL shouldUseExplicitGeometry;
@property (readonly, nonatomic) double bg1Alpha;
@property (readonly, nonatomic) NSArray *bg1Effects;
@property (readonly, nonatomic) UIColor *bg1Color;
@property (readonly, nonatomic) UIImage *bg1Image;
@property (readonly, nonatomic) double bg1ImageAlpha;
@property (readonly, nonatomic) long long bg1ImageMode;
@property (readonly, nonatomic) BOOL bg1HasShadow;
@property (readonly, nonatomic) UIColor *bg1ShadowColor;
@property (readonly, nonatomic) UIImage *bg1ShadowImage;
@property (readonly, nonatomic) UIVibrancyEffect *bg1ShadowEffect;
@property (readonly, nonatomic) UIColor *bg1ShadowTint;
@property (readonly, nonatomic) double bg1ShadowAlpha;
@property (readonly, nonatomic) BOOL bg2Enabled;
@property (readonly, nonatomic) double bg2Alpha;
@property (readonly, nonatomic) NSArray *bg2Effects;
@property (readonly, nonatomic) UIColor *bg2Color;
@property (readonly, nonatomic) UIImage *bg2Image;
@property (readonly, nonatomic) long long bg2ImageMode;
@property (readonly, nonatomic) BOOL bg2HasShadow;
@property (readonly, nonatomic) UIColor *bg2ShadowColor;
@property (readonly, nonatomic) UIImage *bg2ShadowImage;
@property (readonly, nonatomic) UIVibrancyEffect *bg2ShadowEffect;
@property (readonly, nonatomic) UIColor *bg2ShadowTint;
@property (readonly, nonatomic) double bg2ShadowAlpha;
@property (nonatomic) long long interfaceIdiom;
@property (nonatomic) long long interfaceStyle;
@property (nonatomic) double backgroundAlpha;
@property (nonatomic) double shadowAlpha;
@property (nonatomic) BOOL shadowHidden;
@property (nonatomic) BOOL useExplicitGeometry;
@property (nonatomic) double backgroundHeight1;
@property (nonatomic) double backgroundHeight2;
@property (nonatomic) double backgroundTransitionProgress;
@property (readonly, nonatomic) double topInset;
@property (nonatomic) BOOL disableTinting;

- (id)initWithLayout:(id)a0;
- (BOOL)bg2HasHeight;
- (void)describeInto:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;

@end
