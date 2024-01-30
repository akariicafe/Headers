@interface UIStatusBarStyleAnimationParameters : UIStatusBarAnimationParameters

@property (nonatomic) int styleAnimation;

- (BOOL)shouldAnimate;
- (id)initWithDefaultParameters;

@end
