@class UIView;

@interface _UINavigationBarTransitionContextCrossfade : _UINavigationBarTransitionContext {
    UIView *_fromCanvasView;
    UIView *_toCanvasView;
}

- (int)transition;
- (void)_animateContentView;
- (void)_prepareSearchBar;
- (void)_prepareContentView;
- (void)_prepareLargeTitleView;
- (void)animate;
- (void)_finishWithFinalLayout:(id)a0 invalidLayout:(id)a1;
- (BOOL)shouldPerformTwoPartCrossfadeTransition;
- (double)contentViewMaxY;
- (void)_animateLargeTitleView;
- (void)_animateSearchBar;
- (void)prepare;
- (void)_prepareCanvasViews;
- (void)complete;
- (void).cxx_destruct;
- (void)cancel;
- (void)_animateCanvasViews;

@end
