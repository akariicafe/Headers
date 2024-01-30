@class NSString, SBFluidDismissalState, SBFTouchPassThroughView, SBHomeGrabberView, UIScreen, SBFHomeGrabberSettings, SBKeyboardHomeAffordanceAssertion, SiriPresentationSpringBoardMainScreenViewController;

@interface SBAssistantRootViewController : SBFTouchPassThroughViewController <SBFluidGestureDismissable> {
    SBFluidDismissalState *_fluidDismissalState;
    UIScreen *_screen;
    SBHomeGrabberView *_homeAffordanceView;
    SBKeyboardHomeAffordanceAssertion *_keyboardHomeAffordanceAssertion;
    SBFHomeGrabberSettings *_grabberSettings;
    BOOL _keyboardPresented;
    BOOL _keyboardStashed;
}

@property (retain, nonatomic) SBFluidDismissalState *fluidDismissalState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) SBFTouchPassThroughView *clippingView;
@property (readonly, nonatomic) SBFTouchPassThroughView *contentView;
@property (retain, nonatomic) SiriPresentationSpringBoardMainScreenViewController *assistantController;
@property (nonatomic) BOOL ownsHomeGesture;
@property (nonatomic) BOOL showsHomeAffordance;

- (BOOL)shouldAutomaticallyForwardRotationMethods;
- (BOOL)shouldAutorotate;
- (id)childViewControllerForHomeIndicatorAutoHidden;
- (BOOL)wantsFullScreenLayout;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_edgeInsetsForChildViewController:(id)a0 insetsAreAbsolute:(BOOL *)a1;
- (BOOL)_canShowWhileLocked;
- (BOOL)shouldAutomaticallyForwardAppearanceMethods;
- (void)willRotateToInterfaceOrientation:(long long)a0 duration:(double)a1;
- (id)initWithScreen:(id)a0;
- (void)viewWillLayoutSubviews;
- (unsigned long long)supportedInterfaceOrientations;
- (void).cxx_destruct;
- (void)loadView;
- (id)childViewControllerForScreenEdgesDeferringSystemGestures;
- (void)setNeedsUpdateOfHomeIndicatorAutoHidden;
- (void)setNeedsUpdateOfScreenEdgesDeferringSystemGestures;
- (void)_keyboardWillShowNotification:(id)a0;
- (void)_keyboardWillHideNotification:(id)a0;
- (void)_updateHomeAffordance;
- (void)_setStatusBarHidden:(BOOL)a0 animated:(BOOL)a1;
- (void)_updateKeyboardForHomeGesture;
- (void)setHomeGrabberPointerClickDelegate:(id)a0;

@end
