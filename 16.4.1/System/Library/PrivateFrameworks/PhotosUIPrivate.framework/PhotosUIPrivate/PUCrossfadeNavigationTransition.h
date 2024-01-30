@interface PUCrossfadeNavigationTransition : PUNavigationTransition

- (void)animatePopTransition;
- (id)init;
- (void)animatePushTransition;
- (void)_animateTransition;

@end
