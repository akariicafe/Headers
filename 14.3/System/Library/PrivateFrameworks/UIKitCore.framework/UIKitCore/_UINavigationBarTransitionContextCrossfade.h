@class UIView;

@interface _UINavigationBarTransitionContextCrossfade : _UINavigationBarTransitionContext {
    UIView *_fromCanvasView;
    UIView *_toCanvasView;
}

- (void)cancel;
- (void)prepare;
- (double)contentViewMaxY;
- (void).cxx_destruct;
- (void)_animateSearchBar;
- (int)transition;
- (void)_prepareContentView;
- (void)animate;
- (void)complete;
- (void)_animateCanvasViews;
- (void)_prepareSearchBar;
- (void)_prepareLargeTitleView;
- (void)_prepareCanvasViews;
- (void)_animateLargeTitleView;
- (void)_finishWithFinalLayout:(id)a0 invalidLayout:(id)a1;
- (void)_animateContentView;

@end
