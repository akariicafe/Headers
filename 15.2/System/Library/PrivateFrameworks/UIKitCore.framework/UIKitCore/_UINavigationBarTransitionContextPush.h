@interface _UINavigationBarTransitionContextPush : _UINavigationBarTransitionContext {
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _endingNewTitleViewFrame;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _endingNewBackButtonFrame;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _endingBackIndicatorViewFrame;
    struct CGSize { double width; double height; } _titleTransitionDistance;
}

- (int)transition;
- (void)_animateContentView;
- (id)viewUsingEaseOutCurve;
- (void)_prepareSearchBar;
- (void)_prepareContentView;
- (void)_animateBackgroundView;
- (void)_prepareLargeTitleView;
- (void)animate;
- (void)_finishWithFinalLayout:(id)a0 invalidLayout:(id)a1;
- (void)_animateLargeTitleView;
- (void)_animateSearchBar;
- (void)_animateScaleTransition;
- (void)prepare;
- (void)complete;
- (void)_prepareBackgroundView;
- (void)cancel;
- (void)_prepareScaleTransition;

@end
