@class DAAccount;

@interface DASettingsDataclassConfigurationViewController : ACUIDataclassConfigurationViewController {
    BOOL _haveRegisteredForAccountsChanged;
}

@property (retain, nonatomic) DAAccount *daAccount;

- (void)cancelButtonClicked:(id)a0;
- (void)dealloc;
- (void)viewDidLoad;
- (void)viewWillDisappear:(BOOL)a0;
- (id)specifiers;
- (void).cxx_destruct;
- (void)loadView;
- (void)_accountsChanged:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (id)_navTitle;
- (void)reloadAccount;
- (id)otherSpecifiers;
- (Class)accountInfoControllerClass;
- (void)operationsHelper:(id)a0 didRemoveAccount:(id)a1 withSuccess:(BOOL)a2 error:(id)a3;
- (BOOL)shouldVerifyBeforeAccountSave;
- (void)_listenForAccountsChangedNotifications;
- (id)accountDescriptionForFirstTimeSetup;
- (id)accountFromSpecifier;

@end
