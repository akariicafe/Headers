@interface QLSlideTransitionDriver : QLTransitionDriver

- (void)tearDown;
- (void)_animateTransition;
- (void)animateTransition;
- (void)_animateTransitionUserSlideDismissal;

@end
