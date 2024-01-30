@interface PUCrossfadeNavigationTransition : PUNavigationTransition

- (void)animatePushTransition;
- (void)animatePopTransition;
- (id)init;
- (void)_animateTransition;

@end
