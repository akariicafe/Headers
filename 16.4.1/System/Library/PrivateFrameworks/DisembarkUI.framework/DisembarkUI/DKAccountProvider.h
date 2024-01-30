@class CDPWalrusStateController, CDPLocalSecret, AAUIRecoveryFactorController, NSString, ACAccountStore, AIDAAccountManager, UIViewController;
@protocol AIDAServiceOwnerProtocol, DKFindMyProvider;

@interface DKAccountProvider : NSObject <AASignOutFlowControllerDelegate, AAUIRecoveryFactorControllerDelegate, AIDAAccountManagerDelegate, DKAccountProvider>

@property (retain, nonatomic) ACAccountStore *accountStore;
@property (retain, nonatomic) AIDAAccountManager *accountManager;
@property (retain, nonatomic) id<AIDAServiceOwnerProtocol> serviceOwnersManager;
@property (weak, nonatomic) UIViewController *presentingViewController;
@property (retain, nonatomic) CDPLocalSecret *cachedLocalSecret;
@property (retain, nonatomic) CDPWalrusStateController *walrusStateController;
@property (retain, nonatomic) AAUIRecoveryFactorController *recoveryFactorController;
@property (copy, nonatomic) id /* block */ pendingWalrusValidationCompletion;
@property (retain, nonatomic) id<DKFindMyProvider> findMyProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)accountsForAccountManager:(id)a0;
- (void).cxx_destruct;
- (void)fetchAccounts:(id /* block */)a0;
- (void)signOutFlowController:(id)a0 disableFindMyDeviceForAccount:(id)a1 completion:(id /* block */)a2;
- (void)signOutFlowController:(id)a0 performWalrusValidationForAccount:(id)a1 completion:(id /* block */)a2;
- (void)signOutFlowController:(id)a0 showAlertWithTitle:(id)a1 message:(id)a2 completion:(id /* block */)a3;
- (void)signOutFlowController:(id)a0 signOutAccount:(id)a1 completion:(id /* block */)a2;
- (void)recoveryFactorController:(id)a0 didFinishAddingRecoveryContactWithError:(id)a1;
- (void)_verifyAndRepairManateeWithPresentingViewController:(id)a0 completion:(id /* block */)a1;
- (void)_addAccountDataForAccounts:(id)a0 toAccountsData:(id)a1 completion:(id /* block */)a2;
- (void)_determineEligibilityWithCompletion:(id /* block */)a0;
- (void)_fetchAccountDataForAccount:(id)a0 completion:(id /* block */)a1;
- (void)_performLastDeviceCheckWithCompletion:(id /* block */)a0;
- (void)_presentLastDeviceAlertWithCompletion:(id /* block */)a0;
- (void)_presentLastDeviceAlertWithRecoveryFactors:(unsigned long long)a0 withCompletion:(id /* block */)a1;
- (id)_unknownFailureAlertControllerWithCompletion:(id /* block */)a0;
- (void)_walrusStatusWithCompletion:(id /* block */)a0;
- (void)cacheLocalDevicePasscode:(id)a0 passcodeType:(int)a1;
- (id)initWithFindMyProvider:(id)a0;
- (void)preparationRequiredForPrimaryAppleAccountWithCompletion:(id /* block */)a0;
- (void)preparePrimaryAppleAccountForSignOutWithPresentingViewController:(id)a0 completion:(id /* block */)a1;
- (void)signOutPrimaryAppleAccountWithPresentingViewController:(id)a0 completion:(id /* block */)a1;

@end
