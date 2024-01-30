@interface BNBannerTransitionAnimator : BNBannerAnimator

@property (readonly, nonatomic, getter=isPresenting) BOOL presenting;

+ (void)animateInteractive:(BOOL)a0 animations:(id /* block */)a1 completion:(id /* block */)a2;

- (double)transitionDuration:(id)a0;
- (id)initForPresenting:(BOOL)a0;
- (void)actionsForTransition:(id)a0;

@end
