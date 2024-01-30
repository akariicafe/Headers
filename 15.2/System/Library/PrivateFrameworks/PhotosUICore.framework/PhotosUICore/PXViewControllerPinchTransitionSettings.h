@interface PXViewControllerPinchTransitionSettings : PXSettings

@property (nonatomic) BOOL allowPinchTransitions;
@property (nonatomic) double transitionDuration;
@property (nonatomic) double backgroundScale;
@property (nonatomic) double backgroundParallax;
@property (nonatomic) double shadowOpacity;
@property (nonatomic) double shadowRadius;
@property (nonatomic) double dimmingWhite;
@property (nonatomic) double dimmingOpacity;

+ (id)sharedInstance;
+ (id)settingsControllerModule;

- (void)setDefaultValues;
- (id)parentSettings;

@end
