@class DAAccount;

@interface DASettingsDataclassConfigurationViewController : ACUIDataclassConfigurationViewController {
    BOOL _haveRegisteredForAccountsChanged;
}

@property (retain, nonatomic) DAAccount *daAccount;

- (void).cxx_destruct;
- (void)dealloc;
- (void)viewWillDisappear:(BOOL)a0;
- (void)loadView;
- (id)specifiers;
- (void)cancelButtonClicked:(id)a0;
- (void)_accountsChanged:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (id)_navTitle;
- (void)reloadAccount;
- (void)viewDidLoad;
- (void)operationsHelper:(id)a0 didRemoveAccount:(id)a1 withSuccess:(BOOL)a2 error:(id)a3;
- (BOOL)shouldVerifyBeforeAccountSave;
- (id)otherSpecifiers;
- (Class)accountInfoControllerClass;
- (id)accountDescriptionForFirstTimeSetup;
- (void)_listenForAccountsChangedNotifications;
- (id)accountFromSpecifier;

@end
