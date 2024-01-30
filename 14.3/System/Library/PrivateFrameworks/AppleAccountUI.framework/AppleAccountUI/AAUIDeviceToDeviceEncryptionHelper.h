@class AKAppleIDAuthenticationController, UIViewController;
@protocol AAUIDeviceToDeviceEncryptionHelperDelegate;

@interface AAUIDeviceToDeviceEncryptionHelper : NSObject

@property (retain, nonatomic) AKAppleIDAuthenticationController *authController;
@property (readonly, weak, nonatomic) UIViewController *presentingViewController;
@property (weak, nonatomic) id<AAUIDeviceToDeviceEncryptionHelperDelegate> delegate;

- (void).cxx_destruct;
- (id)initWithPresentingViewController:(id)a0;
- (void)performDeviceToDeviceEncryptionStateRepairForContext:(id)a0 withCompletion:(id /* block */)a1;
- (BOOL)_hasPasscode;
- (id)_encryptionErrorFromError:(id)a0;
- (BOOL)_isHSA2AvailableForAuthenticationContext:(id)a0;
- (void)_validateCDPStateForAuthResults:(id)a0 withCompletion:(id /* block */)a1;
- (void)_askPermissionToContinueFlowForEligibleAccountForContext:(id)a0 withCompletion:(id /* block */)a1;
- (void)_authenticateContext:(id)a0 withCompletion:(id /* block */)a1;
- (void)_presentCDPUpgradeSpinnerViewControllerForAuthContext:(id)a0 completion:(id /* block */)a1;
- (void)_validatePasscodeWithCompletion:(id /* block */)a0;

@end
