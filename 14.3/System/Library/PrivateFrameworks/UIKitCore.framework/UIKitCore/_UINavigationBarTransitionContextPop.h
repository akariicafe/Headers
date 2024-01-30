@interface _UINavigationBarTransitionContextPop : _UINavigationBarTransitionContext {
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _endingNewTitleViewFrame;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _endingNewBackButtonFrame;
    struct CGSize { double width; double height; } _titleTransitionDistance;
    double _titleTransitionAdjustment;
}

- (void)cancel;
- (id)viewUsingEaseInCurve;
- (void)prepare;
- (void)_prepareBackgroundView;
- (void)_animateSearchBar;
- (int)transition;
- (void)_prepareContentView;
- (void)_animateBackgroundView;
- (void)animate;
- (void)complete;
- (void)_prepareScaleTransition;
- (void)_prepareSearchBar;
- (void)_prepareLargeTitleView;
- (void)_animateLargeTitleView;
- (void)_animateScaleTransition;
- (void)_finishWithFinalLayout:(id)a0 invalidLayout:(id)a1;
- (void)_animateContentView;

@end
