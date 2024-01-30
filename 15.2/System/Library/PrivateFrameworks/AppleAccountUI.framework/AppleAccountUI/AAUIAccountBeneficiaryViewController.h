@class AAAccountBeneficiaryManagementViewModel, NSArray, AAUIContactsProvider, AAUIAccountBeneficiaryManagementContext, NSObject, ACAccount, AIDAAccountManager, AAUIInheritanceSetupFlowController;
@protocol OS_dispatch_queue;

@interface AAUIAccountBeneficiaryViewController : PSListController {
    AIDAAccountManager *_accountManager;
    AAUIContactsProvider *_contactsProvider;
    NSObject<OS_dispatch_queue> *_contactWorkQueue;
    NSArray *_myBeneficiaries;
    NSArray *_myBenefactors;
    AAUIInheritanceSetupFlowController *_inheritanceSetupFlowController;
    AAAccountBeneficiaryManagementViewModel *_viewModel;
    AAUIAccountBeneficiaryManagementContext *_context;
    ACAccount *_idmsAccount;
}

- (id)specifiers;
- (void)viewDidLoad;
- (BOOL)_canHaveBeneficiary;
- (BOOL)_canBeBeneficiary;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)a0;
- (id)init;
- (void)dealloc;
- (void)_showViewController:(id)a0;
- (void)_stopObservingTrustedContactChangeNotification;
- (void)_beginObservingTrustedContactChangeNotification;
- (void)_syncTrustedContactsFromCloudKit;
- (id)_idmsAccount;
- (void)_learnMoreWasTapped;
- (id)initWithAccountManager:(id)a0 context:(id)a1;
- (void)_fetchAllBeneficiaryContacts;
- (id)_myBeneficiariesGroupSpecifier;
- (id)_myBeneficiariesSpecifiers;
- (id)_addBeneficiarySpecifier;
- (id)_myBenefactorsGroupSpecifier;
- (id)_myBenefactorsSpecifiers;
- (id)_noBenefactorSpecifier;
- (void)_myBeneficiaryWasTapped:(id)a0;
- (void)_showAddBeneficiary;
- (void)_myBenefactorWasTapped:(id)a0;

@end
