@class NSNumber, UIColor;

@interface CustomBlurEffect : UIBlurEffect

@property (retain, nonatomic) NSNumber *customBlurRadius;
@property (retain, nonatomic) NSNumber *customSaturation;
@property (retain, nonatomic) UIColor *customColorTint;
@property (retain, nonatomic) NSNumber *customColorTintAlpha;

+ (id)effectWithStyle:(long long)a0;

- (id)effectSettings;
- (void).cxx_destruct;

@end
