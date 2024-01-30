@class UIViewController, NSString, AALocalContactInfo, AAUIRecoveryFactorController, AAUISpinnerManager, AIDAAccountManager, OBNavigationController;

@interface AAUIMyCustodianActionHandler : NSObject <AAUIRecoveryFactorControllerDelegate, AAUITrustedContactDetailsActionHandler> {
    AAUISpinnerManager *_spinnerManager;
    AIDAAccountManager *_accountManager;
    OBNavigationController *_recoveryContactRemovedNavigationController;
    UIViewController *_presentingViewController;
    AAUIRecoveryFactorController *_recoveryFactorController;
}

@property (readonly, nonatomic) AALocalContactInfo *contact;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)_isWalrusEnabled;
- (void).cxx_destruct;
- (void)_addRecoveryContact;
- (void)_checkRecoveryContactAndRecoveryKeyStatus:(id /* block */)a0;
- (void)_dismissAndPopFromRecoveryContactRemovedScreen;
- (void)_dismissAndStartHealthCheck;
- (void)_dismissRecoveryContactRemovedScreenWithCompletion:(id /* block */)a0;
- (void)_doCustodianRemove;
- (void)_performHealthCheck;
- (void)_popToAccountRecoveryScreen;
- (id)_recoveryFactorController;
- (void)_setupRecoveryKey;
- (void)_stopSpinners;
- (void)_updateUIAfterDeleteWithHasRecoveryContact:(BOOL)a0 hasRecoveryKey:(BOOL)a1;
- (void)doDestructiveAction:(id)a0 specifier:(id)a1;
- (id)initWithAccountManager:(id)a0 localContact:(id)a1;
- (void)recoveryFactorController:(id)a0 didFinishAddingRecoveryContactWithError:(id)a1;

@end
