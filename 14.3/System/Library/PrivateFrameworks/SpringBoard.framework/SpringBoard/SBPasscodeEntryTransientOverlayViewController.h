@class NSString, SBFUserAuthenticationController, SBUIPasscodeViewWithLockScreenStyle, CSPoseidonViewController, CSLockScreenPearlSettings;
@protocol SBPasscodeEntryTransientOverlayViewControllerDelegate, SBUIPasscodeLockView;

@interface SBPasscodeEntryTransientOverlayViewController : SBTransientOverlayViewController <PTSettingsKeyObserver, SBFAuthenticationResponder, SBUIPasscodeLockViewDelegate> {
    BOOL _attemptingUnlock;
    SBFUserAuthenticationController *_authenticationController;
    id<SBUIPasscodeLockView> _passcodeRequester;
    SBUIPasscodeViewWithLockScreenStyle *_passcodeView;
    CSLockScreenPearlSettings *_pearlSettings;
    CSPoseidonViewController *_poseidonViewController;
    BOOL _keyboardVisible;
}

@property (weak, nonatomic) id<SBPasscodeEntryTransientOverlayViewControllerDelegate> delegate;
@property (nonatomic) BOOL showEmergencyCallButton;
@property (nonatomic) BOOL useBiometricPresentation;
@property (copy, nonatomic) NSString *unlockDestination;
@property (nonatomic) int intent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)preferredStatusBarStyle;
- (long long)preferredInterfaceOrientationForPresentation;
- (long long)idleTimerDuration;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (void)handleFailedAuthenticationRequest:(id)a0 error:(id)a1;
- (int)_preferredStatusBarVisibility;
- (void)passcodeLockViewPasscodeEnteredViaMesa:(id)a0;
- (void)passcodeLockViewCancelButtonPressed:(id)a0;
- (void)passcodeLockViewEmergencyCallButtonPressed:(id)a0;
- (long long)idleWarnMode;
- (void)handleSuccessfulAuthenticationRequest:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)handleInvalidAuthenticationRequest:(id)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (long long)idleTimerMode;
- (BOOL)isContentOpaque;
- (void)settings:(id)a0 changedValueForKey:(id)a1;
- (id)initWithAuthenticationController:(id)a0;
- (unsigned long long)supportedInterfaceOrientations;
- (BOOL)_canShowWhileLocked;
- (void)passcodeLockViewPasscodeEntered:(id)a0;
- (void)passcodeLockViewPasscodeDidChange:(id)a0;
- (void)viewDidLoad;
- (id)newTransientOverlayDismissalTransitionCoordinator;
- (id)newTransientOverlayPresentationTransitionCoordinator;
- (id)preferredDisplayLayoutElementIdentifier;
- (void)_updatePrototypeSettings;
- (void)_passcodeLockViewPasscodeEntered:(id)a0 viaMesa:(BOOL)a1;
- (void)_attemptUnlock:(id)a0 passcode:(id)a1;
- (void)handleWillShowKeyboard:(BOOL)a0;

@end
