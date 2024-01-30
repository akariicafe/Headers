@interface PLViewControllerEdgeAnimator : PLViewControllerAnimator

+ (BOOL)drivesAnimation;

- (id)_newPropertyAnimator;
- (void)_performTransitionWithContext:(id)a0;
- (void)_animateTransitionToEdge:(unsigned long long)a0 withTransitionContext:(id)a1;

@end
