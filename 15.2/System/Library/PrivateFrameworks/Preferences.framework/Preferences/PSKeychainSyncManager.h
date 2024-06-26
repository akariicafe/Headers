@class UIView, PSRootController, NSString, KeychainSyncDevicePINController, KeychainSyncAdvancedSecurityCodeController, PSKeychainSyncSecurityCodeController, KeychainSyncPhoneNumberController, KeychainSyncSMSVerificationController, NSTimer, UIViewController, PSSetupController;

@interface PSKeychainSyncManager : NSObject <KeychainSyncViewControllerDelegate> {
    BOOL _joiningCircle;
    BOOL _joiningCircleAfterRecovery;
    int _circleNotificationToken;
    int _flow;
    KeychainSyncDevicePINController *_devicePinController;
    PSKeychainSyncSecurityCodeController *_simpleSecurityCodeController;
    PSKeychainSyncSecurityCodeController *_complexSecurityCodeController;
    KeychainSyncAdvancedSecurityCodeController *_advancedSecurityCodeChoiceController;
    PSKeychainSyncSecurityCodeController *_securityCodeRecoveryController;
    KeychainSyncPhoneNumberController *_phoneNumberController;
    KeychainSyncSMSVerificationController *_smsValidationController;
    UIView *_spinningView;
    unsigned int _spinnerCount;
    NSTimer *_credentialExpirationTimer;
    NSTimer *_joinAfterRecoveryTimeoutTimer;
}

@property (copy, nonatomic) id /* block */ completion;
@property (copy, nonatomic) id /* block */ passwordPromptCompletion;
@property (copy, nonatomic) id /* block */ changeSecurityCodeCompletion;
@property (copy, nonatomic) id /* block */ resetCompletion;
@property (copy, nonatomic) id /* block */ circleJoinCompletion;
@property (retain, nonatomic) UIViewController *resetPromptControllerHost;
@property (weak, nonatomic) UIViewController *hostViewController;
@property (retain, nonatomic) PSSetupController *settingsSetupController;
@property (retain, nonatomic) PSRootController *buddyNavigationController;
@property (retain, nonatomic) NSString *securityCodeRecoveryAttempt;
@property (readonly, nonatomic) NSString *stagedSecurityCode;
@property (readonly, nonatomic) int stagedSecurityCodeType;
@property (nonatomic) BOOL circleWasReset;
@property (readonly, nonatomic, getter=isRunningInBuddy) BOOL runningInBuddy;
@property (copy, nonatomic) NSString *appleIDUsername;
@property (copy, nonatomic) NSString *appleIDRawPassword;
@property (readonly, nonatomic) NSString *appleIDPasswordOrEquivalentToken;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedManager;
+ (void)getStatusWithCompletion:(id /* block */)a0;

- (void)_cleanup;
- (BOOL)_changeSecurityCode:(id)a0 type:(int)a1 smsTarget:(id)a2 smsTargetCountryInfo:(id)a3 username:(id)a4 passwordOrEquivalentToken:(id)a5 error:(id *)a6;
- (void)keychainSyncControllerCancel:(id)a0;
- (void)keychainSyncController:(id)a0 didFinishWithResult:(id)a1 error:(id)a2;
- (id)navigationController;
- (void)showEnableSyncFlowWithSpecifier:(id)a0 overController:(id)a1 completion:(id /* block */)a2;
- (void)joinCircleWithCompletion:(id /* block */)a0;
- (void)showRecoveryFlowWithSpecifier:(id)a0 overController:(id)a1 completion:(id /* block */)a2;
- (void)_cleanupAppleIDCredentials;
- (void)showNetworkReachabilityError;
- (void)_finishedWithStatus:(int)a0 error:(id)a1;
- (void)makeSettingsSetupControllerWithSpecifier:(id)a0 parent:(id)a1 initialController:(id)a2;
- (void)_showResetFlowOverController:(id)a0 withEnableBackupText:(BOOL)a1 withCompletion:(id /* block */)a2;
- (void)showPinChoiceAlert;
- (void)_preSetupCancelledWithCurrentStatus;
- (void)_registerForCircleChangeNotifications;
- (void)promptForPasswordIfNeededForWritingOverController:(id)a0 withCompletion:(id /* block */)a1;
- (void)stopNavigationSpinner;
- (void)startNavigationSpinnerInViewController:(id)a0;
- (id)preferencesApp;
- (BOOL)_resetCircleAndDisableBackupWithError:(id *)a0;
- (BOOL)_errorRequiresPasswordPrompt:(id)a0;
- (void)showResetAcknowledgementIfNeededWithCompletion:(id /* block */)a0;
- (void)_deleteSafariAutoFillPasswords;
- (void)_disableCDPKeychainSyncOverController:(id)a0 deletingSafariPasswords:(BOOL)a1 withCompletion:(id /* block */)a2;
- (void)_promptUserToDeleteSafariSavedContentWithCompletion:(id /* block */)a0;
- (void)_disableKeychainSyncOverController:(id)a0 deletingSafariPasswords:(BOOL)a1 withCompletion:(id /* block */)a2;
- (void)promptForPasswordOverController:(id)a0 withCompletion:(id /* block */)a1;
- (BOOL)_registerUserCredentialsName:(id)a0 rawPassword:(id)a1 error:(id *)a2;
- (void)setAppleIDRawPassword:(id)a0 equivalentToken:(id)a1;
- (void)_showGenericFlowErrorAlert;
- (void)promptForPasswordIfNeededOverController:(id)a0 withCompletion:(id /* block */)a1;
- (void)handleCircleChangedNotification;
- (void)setStagedSecurityCode:(id)a0 type:(int)a1;
- (void)pinChoiceAlertDidChooseToUseDevicePasscode:(BOOL)a0;
- (void)_showInvalidPhoneNumberAlertWithDigits:(id)a0 countryInfo:(id)a1;
- (void)_showGenericFlowErrorAlertWithDismissalHandler:(id /* block */)a0;
- (void)promptForPasswordIfCredentialsNotCachedOverController:(id)a0 withCompletion:(id /* block */)a1;
- (id)viewControllerForPresentingAlerts;
- (void)dismissAppleSupportPane:(id)a0;
- (id)_defaultKeychainViewSet;
- (void)_registerForCircleChangeNotificationsWithCompletion:(id /* block */)a0;
- (void)showContactAppleSupportPane;
- (void)joinCircleAfterRecovery:(BOOL)a0 withCompletion:(id /* block */)a1;
- (void)_peerApprovalFromRecoveryFlow;
- (void)_resetFromRecoveryFlow;
- (void)_startCircleJoinAfterRecoveryTimer;
- (void)_stopCircleJoinAfterRecoveryTimer;
- (void)_circleJoinAfterRecoveryTimerFired:(id)a0;
- (void)_callCompletionWithStatus:(int)a0 error:(id)a1;
- (void)_autoVetSMSValidationWithToken:(id)a0;
- (void)_recoverWithSecurityCode:(id)a0 verificationCode:(id)a1;
- (void)_changeToNewSecurityCode:(id)a0 type:(int)a1 smsTarget:(id)a2 smsTargetCountryInfo:(id)a3;
- (void)joinCircleAndEnableSecureBackupWithPhoneNumber:(id)a0 countryInfo:(id)a1;
- (void)keychainSyncPhoneNumberController:(id)a0 didCompleteWithPhoneNumber:(id)a1 countryInfo:(id)a2;
- (void)_enableSecureBackupWithPhoneNumber:(id)a0 countryInfo:(id)a1;
- (void)showEnableEscrowFlowWithSpecifier:(id)a0 overController:(id)a1 completion:(id /* block */)a2;
- (void)showRecoveryFlowWithNavigationController:(id)a0 completion:(id /* block */)a1;
- (void)showChangeSecurityCodeFlowWithSpecifier:(id)a0 overController:(id)a1 completion:(id /* block */)a2;
- (void)showEnableFlowWithNavigationController:(id)a0 completion:(id /* block */)a1;
- (void)showResetAndJoinFlowOverController:(id)a0 withCompletion:(id /* block */)a1;
- (void)disableKeychainSyncOverController:(id)a0 withCompletion:(id /* block */)a1;
- (void)promptForPasswordIfNeededWithCompletion:(id /* block */)a0;
- (void)promptForDevicePasscodeChangeToPasscode:(id)a0 overController:(id)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;
- (id)init;
- (void)showAlert:(id)a0;
- (void)dealloc;
- (void)showController:(id)a0;

@end
