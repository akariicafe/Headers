@class UIColor, NSString;

@interface ARUIMetricColors : NSObject

@property (retain, nonatomic) UIColor *gradientLightColor;
@property (retain, nonatomic) UIColor *gradientDarkColor;
@property (retain, nonatomic) UIColor *gradientContrastColor;
@property (retain, nonatomic) UIColor *adjustmentButtonBackgroundColor;
@property (retain, nonatomic) UIColor *nonGradientTextColor;
@property (retain, nonatomic) UIColor *lightenedNonGradientColor;
@property (retain, nonatomic) UIColor *buttonTextColor;
@property (retain, nonatomic) UIColor *buttonDisabledTextColor;
@property (retain, nonatomic) UIColor *valueDisplayColor;
@property (retain, nonatomic) UIColor *platterBackgroundColor;
@property (retain, nonatomic) UIColor *platterInactiveBackgroundColor;
@property (retain, nonatomic) NSString *workoutRingColorIdentifier;

+ (id)energyColors;
+ (id)keyColors;
+ (id)sedentaryColors;
+ (id)briskColors;
+ (id)paceColors;
+ (id)systemGrayTextColor;
+ (struct CGGradient { } *)newGradientForStartColor:(id)a0 endColor:(id)a1;
+ (id)distanceColors;
+ (id)noMetricColors;
+ (id)elapsedTimeColors;
+ (id)heartRateColors;
+ (id)clockColors;

- (void).cxx_destruct;

@end
