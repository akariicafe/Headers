@class NSString, SBDashBoardHostedAppViewController, SBHomeGestureParticipant;
@protocol BSInvalidatable, SBCoverSheetSecureAppEnvironmentViewControllerDelegate;

@interface SBCoverSheetSecureAppEnvironmentViewController : UIViewController <SBHomeGestureParticipantDelegate, SBHomeGrabberPointerClickDelegate, SBSecureAppObserver, CSApplicationHosting, SBCoverSheetSlidingViewControllerContentViewController> {
    id<BSInvalidatable> _biometricMatchingAssertion;
    unsigned long long _currentOrientationMask;
}

@property (readonly, nonatomic) SBDashBoardHostedAppViewController *secureAppViewController;
@property (weak, nonatomic) id<SBCoverSheetSecureAppEnvironmentViewControllerDelegate> delegate;
@property (retain, nonatomic) SBHomeGestureParticipant *homeGestureParticipant;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL contentOccludesBackground;

- (BOOL)isHostingAnApp;
- (void)hostedAppWillRotateToInterfaceOrientation:(long long)a0;
- (id)hostedAppSceneHandle;
- (BOOL)canHostAnApp;
- (void)conformsToSBApplicationHosting;
- (id)hostedAppSceneHandles;
- (void).cxx_destruct;
- (void)viewWillDisappear:(BOOL)a0;
- (void)homeGrabberViewDidReceiveClick:(id)a0;
- (void)homeGestureParticipantOwningHomeGestureDidChange:(id)a0;
- (BOOL)handlesRotationIndependentOfCoverSheet;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (unsigned long long)supportedInterfaceOrientations;
- (void)secureAppOfTypeDidBegin:(unsigned long long)a0;
- (BOOL)_canShowWhileLocked;
- (void)viewDidLoad;
- (void)conformsToCSApplicationHosting;
- (void)conformsToSBCoverSheetSlidingViewControllerContentViewController;
- (id)initWithSecureAppViewController:(id)a0;
- (void)requestHomeGestureOwnership;
- (void)relinquishHomeGesture;
- (void)secureAppOfTypeDidTakeNewAssertion:(unsigned long long)a0;
- (void)_updateSupportedOrientationsMaskForSecureAppAction;
- (void)updateHomeGrabberHiddenAssertion:(BOOL)a0;
- (id)_currentSecureAppAction;
- (void)relinquishHiddenAssertionForHomeGrabber:(id)a0 animated:(BOOL)a1;
- (void)takeHiddenAssertionForHomeGrabber:(id)a0 animated:(BOOL)a1;

@end
