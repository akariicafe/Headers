@class UIColor;

@interface _UICustomBlurEffect : UIBlurEffect

@property (nonatomic) double grayscaleTintLevel;
@property (nonatomic) double grayscaleTintAlpha;
@property (nonatomic) BOOL lightenGrayscaleWithSourceOver;
@property (retain, nonatomic) UIColor *colorTint;
@property (nonatomic) double colorTintAlpha;
@property (nonatomic) double colorBurnTintLevel;
@property (nonatomic) double colorBurnTintAlpha;
@property (nonatomic) double darkeningTintAlpha;
@property (nonatomic) double darkeningTintHue;
@property (nonatomic) double darkeningTintSaturation;
@property (nonatomic) BOOL darkenWithSourceOver;
@property (nonatomic) double blurRadius;
@property (nonatomic) double saturationDeltaFactor;
@property (nonatomic) double scale;
@property (nonatomic) double zoom;

+ (id)effectWithStyle:(long long)a0;

- (id)effectSettings;

@end
