@class UINavigationController, CDPUIDeviceToDeviceEncryptionFlowContext, UIViewController, NSString, AKAppleIDAuthenticationController;
@protocol CDPUIDeviceToDeviceEncryptionHelperDelegate;

@interface CDPUIDeviceToDeviceEncryptionHelper : NSObject <CDPUIDeviceToDeviceEncryptionPasscodeValidationDelegate>

@property (retain, nonatomic) UINavigationController *navController;
@property (retain, nonatomic) AKAppleIDAuthenticationController *authController;
@property (retain, nonatomic) CDPUIDeviceToDeviceEncryptionFlowContext *context;
@property (readonly, weak, nonatomic) UIViewController *presentingViewController;
@property (weak, nonatomic) id<CDPUIDeviceToDeviceEncryptionHelperDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithContext:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (id)_authController;
- (id)initWithPresentingViewController:(id)a0;
- (id)_presentingViewController;
- (id)_spinnerViewController;
- (void)performDeviceToDeviceEncryptionStateRepairWithCompletion:(id /* block */)a0;
- (void)performDeviceToDeviceEncryptionStateRepairForContext:(id)a0 withCompletion:(id /* block */)a1;
- (BOOL)_hasPasscode;
- (void)_dismissPresentedViewControllerWithCompletion:(id /* block */)a0;
- (id)_encryptionErrorFromError:(id)a0;
- (void)localSecretValidationCanCancelWithViewController:(id)a0 completion:(id /* block */)a1;
- (void)_setupPresentedViewController;
- (void)_executeSyncOnMainThreadIfNeeded:(id /* block */)a0;
- (void)_showUpgradeMessageWithContext:(id)a0 completion:(id /* block */)a1;
- (void)_preflightDeviceToDeviceEncryptionWithContext:(id)a0 completion:(id /* block */)a1;
- (BOOL)_hasManatee;
- (BOOL)_isInCircle;
- (void)_checkEligibilityWithCompletionForContext:(id)a0 completion:(id /* block */)a1;
- (void)_isAccount2FAForAltDSID:(id)a0 completion:(id /* block */)a1;
- (id)_authContextFromContext:(id)a0;
- (id)_inAppContextFromContext:(id)a0;
- (void)_validateLocalSecretAndRepairCDPWithAuthResults:(id)a0 withCompletion:(id /* block */)a1;
- (void)_presentCDPUpgradeSpinnerWithCompletion:(id /* block */)a0;
- (void)_presentIneligibleAlertWithCompletion:(id /* block */)a0;
- (void)_legacyAskPermissionToContinueFlowWithCompletion:(id /* block */)a0;
- (id)_upgradeUIProvider;
- (id)_presentingViewControllerInline;
- (void)_repairCDPWithAuthResults:(id)a0 cachedSecret:(id)a1 withCompletion:(id /* block */)a2;
- (void)_createPasscodeWithCompletion:(id /* block */)a0;
- (void)_postBiometricFollowupIfNeeded;
- (id)_cdpStateControllerWithAuthResults:(id)a0;
- (id)_cdpContextForPrimaryAccountWithAuthenticationResults:(id)a0;
- (id)_cdpStateControllerWithContext:(id)a0;
- (void)_shouldContinueCreationWithCompletion:(id /* block */)a0;
- (void)_configurePresentingViewControllerForModalPresentation;

@end
