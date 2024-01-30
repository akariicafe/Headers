@class SBFZStackParticipant, NSString, SBDashBoardHostedAppViewController, SBHomeGestureParticipant;
@protocol BSInvalidatable, SBCoverSheetSecureAppEnvironmentViewControllerDelegate;

@interface SBCoverSheetSecureAppEnvironmentViewController : UIViewController <SBHomeGestureParticipantDelegate, SBFZStackParticipantDelegate, SBHomeGrabberPointerClickDelegate, SBSecureAppObserver, CSApplicationHosting, SBCoverSheetSlidingViewControllerContentViewController> {
    id<BSInvalidatable> _biometricMatchingAssertion;
    unsigned long long _currentOrientationMask;
}

@property (readonly, nonatomic) SBDashBoardHostedAppViewController *secureAppViewController;
@property (weak, nonatomic) id<SBCoverSheetSecureAppEnvironmentViewControllerDelegate> delegate;
@property (retain, nonatomic) SBHomeGestureParticipant *homeGestureParticipant;
@property (retain, nonatomic) SBFZStackParticipant *zStackParticipant;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL contentOccludesBackground;

- (void)zStackParticipantDidChange:(id)a0;
- (void)homeGrabberViewDidReceiveClick:(id)a0;
- (void)homeGestureParticipantOwningHomeGestureDidChange:(id)a0;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (void)zStackParticipant:(id)a0 updatePreferences:(id)a1;
- (BOOL)canHostAnApp;
- (id)hostedAppSceneHandle;
- (void)viewWillDisappear:(BOOL)a0;
- (BOOL)_canShowWhileLocked;
- (BOOL)isHostingAnApp;
- (void)hostedAppWillRotateToInterfaceOrientation:(long long)a0;
- (void)conformsToSBApplicationHosting;
- (void)secureAppOfTypeDidBegin:(unsigned long long)a0;
- (void)conformsToCSApplicationHosting;
- (id)hostedAppSceneHandles;
- (void).cxx_destruct;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidAppear:(BOOL)a0;
- (BOOL)handlesRotationIndependentOfCoverSheet;
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
