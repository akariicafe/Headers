@class ACAccount, AAUIContactsProvider, NSArray, AAAccountBeneficiaryManagementViewModel, AIDAAccountManager, NSObject, AAUIInheritanceSetupFlowController;
@protocol OS_dispatch_queue;

@interface AAUIAccountBeneficiaryViewController : PSListController {
    AIDAAccountManager *_accountManager;
    AAUIContactsProvider *_contactsProvider;
    NSObject<OS_dispatch_queue> *_contactWorkQueue;
    NSArray *_myBeneficiaries;
    NSArray *_myBenefactors;
    AAUIInheritanceSetupFlowController *_inheritanceSetupFlowController;
    AAAccountBeneficiaryManagementViewModel *_viewModel;
    ACAccount *_idmsAccount;
}

- (id)initWithAccountManager:(id)a0;
- (void)dealloc;
- (void)viewDidLoad;
- (void)traitCollectionDidChange:(id)a0;
- (id)specifiers;
- (id)init;
- (void).cxx_destruct;
- (BOOL)_canBeBeneficiary;
- (BOOL)_canHaveBeneficiary;
- (void)_showViewController:(id)a0;
- (id)_addBeneficiarySpecifier;
- (void)_beginObservingTrustedContactChangeNotification;
- (void)_fetchAllBeneficiaryContacts;
- (id)_idmsAccount;
- (void)_learnMoreWasTapped;
- (void)_myBenefactorWasTapped:(id)a0;
- (id)_myBenefactorsGroupSpecifier;
- (id)_myBenefactorsSpecifiers;
- (id)_myBeneficiariesGroupSpecifier;
- (id)_myBeneficiariesSpecifiers;
- (void)_myBeneficiaryWasTapped:(id)a0;
- (id)_noBenefactorSpecifier;
- (void)_showAddBeneficiary;
- (void)_stopObservingTrustedContactChangeNotification;
- (void)_syncTrustedContactsFromCloudKit;

@end
