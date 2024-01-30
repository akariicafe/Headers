@class NSString, SBUIProudLockContainerViewController, UIView, CSLockScreenPearlSettings;
@protocol SBUIBiometricResource, SBFAuthenticationStatusProvider, BSInvalidatable;

@interface CSProudLockViewController : CSCoverSheetViewControllerBase <PTSettingsKeyObserver, SBUIProudLockContainerViewControllerLockStatusProvider, SBUIProudLockContainerViewControllerDelegate> {
    CSLockScreenPearlSettings *_pearlSettings;
    id<BSInvalidatable> _faceDetectWantedAssertion;
    long long _deferredAuthenticationState;
}

@property (retain, nonatomic) SBUIProudLockContainerViewController *proudLockContainerViewController;
@property (retain, nonatomic) id<SBUIBiometricResource> biometricResource;
@property (retain, nonatomic) id<SBFAuthenticationStatusProvider> authenticationStatusProvider;
@property (nonatomic) BOOL suspendLockUpdates;
@property (readonly, nonatomic) UIView *proudLockView;
@property (readonly, nonatomic) UIView *cameraCoveredView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL hasPasscodeSet;
@property (readonly, nonatomic) BOOL isBiometricLockedOut;

- (void)aggregateAppearance:(id)a0;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (void)proudLockContainerViewController:(id)a0 guidanceTextVisibilityDidChangeAnimated:(BOOL)a1;
- (BOOL)handleEvent:(id)a0;
- (void)updateLockForBiometricMatchFailure;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)settings:(id)a0 changedValueForKey:(id)a1;
- (void)viewDidLoad;
- (void)_updateProudLockViewControllerConfiguration;
- (void)_createFaceDetectAssertion;
- (void)_clearFaceDetectAssertion;
- (void)_updateForAuthenticated:(BOOL)a0;

@end
