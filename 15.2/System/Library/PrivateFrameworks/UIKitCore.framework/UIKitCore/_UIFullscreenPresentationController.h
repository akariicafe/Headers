@class UIView;

@interface _UIFullscreenPresentationController : _UICurrentContextPresentationController {
    UIView *_counterRotatedView;
    double _counterRotatedAngle;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _counterRotatedOriginalBounds;
    long long _originalOrientation;
    BOOL _presentingViewControllerHandledCounterRotation;
    id /* block */ finalRotationBlock;
}

- (BOOL)_inheritsPresentingViewControllerThemeLevel;
- (BOOL)shouldPresentInFullscreen;
- (void)_adjustOrientationIfNecessaryInWindow:(id)a0 forViewController:(id)a1 preservingViewController:(id)a2;
- (void)_placeCounterRotationViewWithView:(id)a0 inWindow:(id)a1 fromOrientation:(long long)a2 toOrientation:(long long)a3 force:(BOOL)a4;
- (void)dismissalTransitionDidEnd:(BOOL)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameOfPresentedViewInContainerView;
- (void)presentationTransitionDidEnd:(BOOL)a0;
- (long long)presentationStyle;
- (void)_setPresentedViewController:(id)a0;
- (void).cxx_destruct;
- (BOOL)_shouldRespectDefinesPresentationContext;
- (void)dealloc;
- (void)_removeCounterRotation;
- (BOOL)_invokesDelegatesOnOrientationChange;

@end
