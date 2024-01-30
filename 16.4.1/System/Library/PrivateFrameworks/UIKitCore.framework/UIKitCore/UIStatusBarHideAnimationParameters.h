@interface UIStatusBarHideAnimationParameters : UIStatusBarAnimationParameters

@property (nonatomic) int hideAnimation;
@property (nonatomic) double additionalSlideHeight;

- (BOOL)shouldAnimate;
- (id)initWithDefaultParameters;

@end
