@class NSString, SBUIProudLockContainerViewController, UIView, CSLockScreenPearlSettings;
@protocol BSInvalidatable, SBUIBiometricResource, CSProudLockViewControllerDelegate, SBFAuthenticationStatusProvider;

@interface CSProudLockViewController : CSCoverSheetViewControllerBase <PTSettingsKeyObserver, SBUIProudLockContainerViewControllerLockStatusProvider, SBUIProudLockContainerViewControllerDelegate> {
    CSLockScreenPearlSettings *_pearlSettings;
    id<BSInvalidatable> _faceDetectWantedAssertion;
    long long _deferredAuthenticationState;
    BOOL _isAuthenticated;
    BOOL _shouldReactToAuthentication;
    BOOL _hasReactedToAuthentication;
}

@property (retain, nonatomic) SBUIProudLockContainerViewController *proudLockContainerViewController;
@property (retain, nonatomic) id<SBUIBiometricResource> biometricResource;
@property (retain, nonatomic) id<SBFAuthenticationStatusProvider> authenticationStatusProvider;
@property (nonatomic) BOOL suspendLockUpdates;
@property (readonly, nonatomic) UIView *proudLockView;
@property (readonly, nonatomic) UIView *cameraCoveredView;
@property (weak, nonatomic) id<CSProudLockViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL hasPasscodeSet;
@property (readonly, nonatomic) BOOL isBiometricLockedOut;

- (void)_updateProudLockViewControllerConfiguration;
- (void)updateLockForBiometricMatchFailure;
- (BOOL)_shouldApplyScaleAndBlurForAuthenticated;
- (void)_updateForAuthenticated:(BOOL)a0;
- (void)_clearFaceDetectAssertion;
- (BOOL)proudLockContainerViewControllerIsCoverSheetVisible:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (BOOL)handleEvent:(id)a0;
- (void)_createFaceDetectAssertion;
- (void)_updateForProudLockStateChangeAnimated:(BOOL)a0;
- (void)proudLockContainerViewController:(id)a0 guidanceTextVisibilityDidChange:(id)a1 animated:(BOOL)a2;
- (void)viewDidLoad;
- (void)settings:(id)a0 changedValueForKey:(id)a1;
- (void)_updateForProudLockStateChangeDuration:(double)a0 completion:(id /* block */)a1;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)aggregateAppearance:(id)a0;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(BOOL)a0;

@end
