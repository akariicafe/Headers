@interface _UINavigationBarTransitionContextCrossfade : _UINavigationBarTransitionContext

- (void)_animateSearchBar;
- (BOOL)shouldPerformTwoPartCrossfadeTransition;
- (void)complete;
- (int)transition;
- (void)_finishWithFinalLayout:(id)a0 invalidLayout:(id)a1;
- (void)_animateContentView;
- (double)contentViewMaxY;
- (void)cancel;
- (void)_prepareContentView;
- (void)animate;
- (void)_prepareLargeTitleView;
- (void)prepare;
- (void)_prepareSearchBar;
- (void)_animateLargeTitleView;

@end
