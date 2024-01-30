@interface _UINavigationBarTransitionContextPop : _UINavigationBarTransitionContext {
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _endingNewTitleViewFrame;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _endingNewBackButtonFrame;
    struct CGSize { double width; double height; } _titleTransitionDistance;
    double _titleTransitionAdjustment;
}

- (void)_animateSearchBar;
- (void)complete;
- (int)transition;
- (void)_finishWithFinalLayout:(id)a0 invalidLayout:(id)a1;
- (void)_animateContentView;
- (void)cancel;
- (void)_prepareScaleTransition;
- (void)_prepareContentView;
- (void)animate;
- (id)viewUsingEaseInCurve;
- (void)_prepareLargeTitleView;
- (void)prepare;
- (void)_prepareSearchBar;
- (void)_prepareBackgroundView;
- (void)_animateBackgroundView;
- (void)_animateScaleTransition;
- (void)_animateLargeTitleView;

@end
