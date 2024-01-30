@interface _UINavigationBarTransitionContextPush : _UINavigationBarTransitionContext {
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _endingNewTitleViewFrame;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _endingNewBackButtonFrame;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _endingBackIndicatorViewFrame;
    struct CGSize { double width; double height; } _titleTransitionDistance;
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
- (id)viewUsingEaseOutCurve;
- (void)_prepareLargeTitleView;
- (void)prepare;
- (void)_prepareSearchBar;
- (void)_prepareBackgroundView;
- (void)_animateBackgroundView;
- (void)_animateScaleTransition;
- (void)_animateLargeTitleView;

@end
