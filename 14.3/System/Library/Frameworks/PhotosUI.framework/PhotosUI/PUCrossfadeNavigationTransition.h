@interface PUCrossfadeNavigationTransition : PUNavigationTransition

- (id)init;
- (void)animatePushTransition;
- (void)_animateTransition;
- (void)animatePopTransition;

@end
