@class NSString, NSArray, AAUISpinnerManager, AAUIContactsProvider, AAUIGrandSlamRemoteUIPresenter, AAUICustodianSetupFlowController, NSObject, AAAccountRecoveryManagementViewModel, AIDAAccountManager, ACAccount;
@protocol OS_dispatch_queue;

@interface AAUIAccountRecoveryViewController : PSListController <AAUIGrandSlamRemoteUIPresenterDelegate> {
    AIDAAccountManager *_accountManager;
    AAUIContactsProvider *_contactsProvider;
    NSObject<OS_dispatch_queue> *_contactWorkQueue;
    NSArray *_myCustodians;
    NSArray *_myCustodianshipOwners;
    AAUICustodianSetupFlowController *_custodianSetupFlowController;
    AAAccountRecoveryManagementViewModel *_viewModel;
    AAUIGrandSlamRemoteUIPresenter *_remoteUIPresenter;
    AAUISpinnerManager *_spinnerManager;
    BOOL _recoveryKeyStateIsEnabled;
    ACAccount *_idmsAccount;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithAccountManager:(id)a0;
- (id)specifiers;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (BOOL)_canHaveCustodian;
- (BOOL)_canBeCustodian;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)a0;
- (void)dealloc;
- (void)_showViewController:(id)a0;
- (void)remoteUIRequestComplete:(id)a0 error:(id)a1;
- (void)_startSpinnerInSpecifier:(id)a0;
- (void)_stopObservingTrustedContactChangeNotification;
- (void)_fetchAllCustodianContacts;
- (void)_beginObservingTrustedContactChangeNotification;
- (void)_syncTrustedContactsFromCloudKit;
- (id)_accountRecoveryDetailsSpecifier;
- (id)_recoveryOptionsGroupSpecifier;
- (id)_myRecoveryOptionsSpecifiers;
- (id)_addRecoveryContactSpecifier;
- (id)_accountRecoveryDetailsSpecifierForIneligibleAccount;
- (id)_recoveryOptionsGroupSpecifierForIneligibleAccount;
- (BOOL)_isEligibleForRecoveryKey;
- (id)_recoveryKeySpecifiers;
- (id)_recoveryContactForGroupSpecifier;
- (id)_recoveryContactForSpecifiers;
- (void)_showAppleDataRecoveryDetails:(id)a0;
- (void)_myRecoveryContactWasTapped:(id)a0;
- (void)_showAddCustodian;
- (id)_recoveryKeyState;
- (void)_showRecoveryKey:(id)a0;
- (void)_custodianshipOwnerWasTapped:(id)a0;
- (id)_idmsAccount;
- (void)_learnMoreWasTapped;
- (void)_footerLearnMoreWasTapped;

@end
