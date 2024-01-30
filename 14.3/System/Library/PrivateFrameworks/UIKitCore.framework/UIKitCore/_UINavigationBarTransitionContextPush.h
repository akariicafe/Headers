@interface _UINavigationBarTransitionContextPush : _UINavigationBarTransitionContext {
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _endingNewTitleViewFrame;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _endingNewBackButtonFrame;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _endingBackIndicatorViewFrame;
    struct CGSize { double width; double height; } _titleTransitionDistance;
}

- (void)cancel;
- (void)prepare;
- (void)_prepareBackgroundView;
- (id)viewUsingEaseOutCurve;
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
