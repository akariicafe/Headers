@class NSTimer, _UIHyperInteractor, NSArray, NSString, _UIHyperrectangle, UITabBarController, UIPanGestureRecognizer, AMSUITouchForwardingView;

@interface AMSUIToastPresentationController : UIPresentationController <_UIHyperInteractorDelegate>

@property (readonly, nonatomic) _UIHyperInteractor *interactor;
@property (readonly, nonatomic) _UIHyperrectangle *interactiveRegion;
@property (retain, nonatomic) NSTimer *dismissalTimer;
@property (retain, nonatomic) UIPanGestureRecognizer *panRecognizer;
@property (nonatomic, getter=isShowing) BOOL showing;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } lastFrameOfPresentedViewInContainerView;
@property (retain, nonatomic) AMSUITouchForwardingView *touchForwardingView;
@property (nonatomic) double dismissDelayTimeInterval;
@property (retain, nonatomic) NSArray *passthroughViews;
@property (retain, nonatomic) UITabBarController *relativeTabBarController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)shouldPresentInFullscreen;
- (void)containerViewWillLayoutSubviews;
- (void)presentationTransitionWillBegin;
- (void)dismissalTransitionWillBegin;
- (void)_setupPanGestureRecognizer;
- (id)initWithPresentedViewController:(id)a0 presentingViewController:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameOfPresentedViewInContainerView;
- (void)presentationTransitionDidEnd:(BOOL)a0;
- (long long)presentationStyle;
- (double)_yOffset;
- (void)_hyperInteractorApplyPresentationPoint:(id)a0;
- (void).cxx_destruct;
- (void)_startDismissTimer;
- (double)_bottomMargin;
- (void)_setupPassthroughView;
- (void)_dismissTimerFired:(id)a0;
- (void)_didPanPresentedView:(id)a0;
- (void)_dismissToast;

@end
