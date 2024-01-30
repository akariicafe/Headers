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

- (void)willRotateToInterfaceOrientation:(long long)a0 duration:(double)a1;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_edgeInsetsForChildViewController:(id)a0 insetsAreAbsolute:(BOOL *)a1;
- (void)hasContentAtPoint:(struct CGPoint { double x0; double x1; })a0 completion:(id /* block */)a1;
- (id)childViewControllerForHomeIndicatorAutoHidden;
- (void)setNeedsUpdateOfScreenEdgesDeferringSystemGestures;
- (void).cxx_destruct;
- (BOOL)wantsFullScreenLayout;
- (void)setNeedsUpdateOfHomeIndicatorAutoHidden;
- (BOOL)shouldAutomaticallyForwardAppearanceMethods;
- (BOOL)shouldAutomaticallyForwardRotationMethods;
- (void)loadView;
- (BOOL)shouldAutorotate;
- (void)_updateHomeAffordance;
- (id)childViewControllerForScreenEdgesDeferringSystemGestures;
- (unsigned long long)supportedInterfaceOrientations;
- (BOOL)_canShowWhileLocked;
- (void)_keyboardWillShowNotification:(id)a0;
- (id)initWithScreen:(id)a0;
- (void)viewWillLayoutSubviews;
- (void)_keyboardWillHideNotification:(id)a0;
- (void)setHomeGrabberPointerClickDelegate:(id)a0;
- (void)_updateKeyboardForHomeGesture;

@end
