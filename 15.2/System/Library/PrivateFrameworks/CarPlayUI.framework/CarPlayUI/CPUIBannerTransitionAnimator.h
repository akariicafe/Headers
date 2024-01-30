@interface CPUIBannerTransitionAnimator : BNBannerTransitionAnimator

@property (class, readonly, nonatomic) double defaultTransitionDuration;

+ (void)animateInteractive:(BOOL)a0 animations:(id /* block */)a1 completion:(id /* block */)a2;

- (double)transitionDuration:(id)a0;

@end
