@interface UIStatusBarOrientationAnimationParameters : UIStatusBarAnimationParameters

@property (nonatomic) int orientationAnimation;

- (BOOL)shouldAnimate;
- (id)initWithDefaultParameters;

@end
