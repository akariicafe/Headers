@interface _UINavigationBarTransitionContextPop : _UINavigationBarTransitionContext {
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _endingNewTitleViewFrame;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _endingNewBackButtonFrame;
    struct CGSize { double width; double height; } _titleTransitionDistance;
    double _titleTransitionAdjustment;
}

- (int)transition;
- (void)_animateContentView;
- (void)_prepareSearchBar;
- (void)_prepareContentView;
- (void)_animateBackgroundView;
- (void)_prepareLargeTitleView;
- (void)animate;
- (void)_finishWithFinalLayout:(id)a0 invalidLayout:(id)a1;
- (void)_animateLargeTitleView;
- (void)_animateSearchBar;
- (id)viewUsingEaseInCurve;
- (void)_animateScaleTransition;
- (void)prepare;
- (void)complete;
- (void)_prepareBackgroundView;
- (void)cancel;
- (void)_prepareScaleTransition;

@end
