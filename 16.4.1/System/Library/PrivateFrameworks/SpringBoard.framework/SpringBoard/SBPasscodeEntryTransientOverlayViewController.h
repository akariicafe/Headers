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

- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (long long)preferredInterfaceOrientationForPresentation;
- (BOOL)_canShowWhileLocked;
- (int)_preferredStatusBarVisibility;
- (long long)preferredStatusBarStyle;
- (void)viewDidLoad;
- (void)settings:(id)a0 changedValueForKey:(id)a1;
- (long long)idleTimerMode;
- (long long)idleTimerDuration;
- (void)viewDidDisappear:(BOOL)a0;
- (long long)idleWarnMode;
- (unsigned long long)supportedInterfaceOrientations;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(BOOL)a0;
- (id)initWithAuthenticationController:(id)a0;
- (BOOL)isContentOpaque;
- (void)handleFailedAuthenticationRequest:(id)a0 error:(id)a1;
- (void)handleInvalidAuthenticationRequest:(id)a0;
- (void)handleSuccessfulAuthenticationRequest:(id)a0;
- (BOOL)prefersEmbeddedDisplayPresentation;
- (void)passcodeLockViewCancelButtonPressed:(id)a0;
- (void)passcodeLockViewEmergencyCallButtonPressed:(id)a0;
- (void)passcodeLockViewPasscodeDidChange:(id)a0;
- (void)passcodeLockViewPasscodeEntered:(id)a0;
- (void)passcodeLockViewPasscodeEnteredViaMesa:(id)a0;
- (void)_passcodeLockViewPasscodeEntered:(id)a0 authenticationType:(unsigned long long)a1;
- (void)_attemptUnlock:(id)a0 passcode:(id)a1;
- (void)_updatePrototypeSettings;
- (BOOL)canBecomeLocalFirstResponder;
- (void)handleWillShowKeyboard:(BOOL)a0;
- (id)newTransientOverlayDismissalTransitionCoordinator;
- (id)newTransientOverlayPresentationTransitionCoordinator;
- (id)preferredDisplayLayoutElementIdentifier;

@end
