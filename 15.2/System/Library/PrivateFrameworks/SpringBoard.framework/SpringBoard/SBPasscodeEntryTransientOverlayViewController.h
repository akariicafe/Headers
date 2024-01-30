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

- (long long)idleWarnMode;
- (void)settings:(id)a0 changedValueForKey:(id)a1;
- (long long)preferredStatusBarStyle;
- (void)viewDidLoad;
- (long long)preferredInterfaceOrientationForPresentation;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLayoutSubviews;
- (long long)idleTimerMode;
- (BOOL)_canShowWhileLocked;
- (void)viewDidDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (unsigned long long)supportedInterfaceOrientations;
- (id)initWithAuthenticationController:(id)a0;
- (BOOL)isContentOpaque;
- (int)_preferredStatusBarVisibility;
- (long long)idleTimerDuration;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)handleSuccessfulAuthenticationRequest:(id)a0;
- (void)handleFailedAuthenticationRequest:(id)a0 error:(id)a1;
- (void)handleInvalidAuthenticationRequest:(id)a0;
- (void)passcodeLockViewPasscodeEnteredViaMesa:(id)a0;
- (void)passcodeLockViewCancelButtonPressed:(id)a0;
- (void)passcodeLockViewEmergencyCallButtonPressed:(id)a0;
- (void)passcodeLockViewPasscodeEntered:(id)a0;
- (void)passcodeLockViewPasscodeDidChange:(id)a0;
- (id)newTransientOverlayDismissalTransitionCoordinator;
- (id)newTransientOverlayPresentationTransitionCoordinator;
- (id)preferredDisplayLayoutElementIdentifier;
- (BOOL)canBecomeLocalFirstResponder;
- (void)_updatePrototypeSettings;
- (void)_passcodeLockViewPasscodeEntered:(id)a0 authenticationType:(unsigned long long)a1;
- (void)_attemptUnlock:(id)a0 passcode:(id)a1;
- (void)handleWillShowKeyboard:(BOOL)a0;

@end
