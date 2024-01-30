@class SBFAnimationSettings;

@interface SBPIPFadeInOutSettings : PTSettings

@property (nonatomic) double fadeInInitialScale;
@property (nonatomic) double fadeInInitialOpacity;
@property (nonatomic) double fadeInInitialBlurRadius;
@property (nonatomic) double fadeOutFinalScale;
@property (nonatomic) double fadeOutFinalOpacity;
@property (nonatomic) double fadeOutFinalBlurRadius;
@property (retain, nonatomic) SBFAnimationSettings *fadeInOutAnimationSettings;
@property (readonly, nonatomic) struct { double x0; double x1; double x2; } fadeInInitialValues;
@property (readonly, nonatomic) struct { double x0; double x1; double x2; } fadeOutFinalValues;

+ (BOOL)ignoresKey:(id)a0;
+ (id)settingsControllerModule;

- (void)setDefaultValues;
- (void).cxx_destruct;

@end
