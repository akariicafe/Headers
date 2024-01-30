@class AAUIRecoveryFactorController, NSString, AIDAAccountManager, ACAccountStore, UIViewController;

@interface AAUISignOutFlowControllerDelegate : NSObject <AAUISignOutControllerDelegate, AAUIRecoveryFactorControllerDelegate, AASignOutFlowControllerDelegate> {
    id /* block */ _pendingSignOutCompletion;
    ACAccountStore *_accountStore;
    AAUIRecoveryFactorController *_recoveryFactorController;
    id /* block */ _pendingWalrusValidationCompletion;
}

@property (weak, nonatomic) UIViewController *presentingViewController;
@property (retain, nonatomic) AIDAAccountManager *accountManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithPresentingViewController:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)signOutFlowController:(id)a0 disableFindMyDeviceForAccount:(id)a1 completion:(id /* block */)a2;
- (void)signOutFlowController:(id)a0 performWalrusValidationForAccount:(id)a1 completion:(id /* block */)a2;
- (void)signOutFlowController:(id)a0 showAlertWithTitle:(id)a1 message:(id)a2 completion:(id /* block */)a3;
- (void)signOutFlowController:(id)a0 signOutAccount:(id)a1 completion:(id /* block */)a2;
- (void)_completedRestoreFromiCloud:(id /* block */)a0;
- (void)_disableDeviceLocatorForAccount:(id)a0 inViewController:(id)a1 completion:(id /* block */)a2;
- (void)_offerManateeRepairWithContext:(id)a0 completion:(id /* block */)a1;
- (void)_performLastDeviceCheckForAccount:(id)a0 withContext:(id)a1 completion:(id /* block */)a2;
- (void)_presentLastDeviceAlertForAccount:(id)a0 withRecoveryFactors:(unsigned long long)a1 withCompletion:(id /* block */)a2;
- (id)_recoveryFactorController;
- (void)recoveryFactorController:(id)a0 didFinishAddingRecoveryContactWithError:(id)a1;
- (void)signOutController:(id)a0 didCompleteWithSuccess:(BOOL)a1 error:(id)a2;
- (void)signOutControllerDidCancel:(id)a0;

@end
