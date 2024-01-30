@class NSString, NSArray, PSSpecifier, ACAccountStore, ACUIAccountViewProvidersManager;

@interface ACUIAddAccountViewController : PSListController <ACUISetupViewControllerDelegate> {
    BOOL _dontShowSecondLevelOtherAccountTypes;
    NSArray *_preEnabledDataclasses;
    unsigned char _originalWifiFlag;
    unsigned char _originalCellFlag;
    PSSpecifier *_gmailSpecifier;
    ACAccountStore *_accountStore;
}

@property (retain) NSString *filteredDataclass;
@property (readonly, nonatomic) ACUIAccountViewProvidersManager *viewProvidersManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_debugStringForAction:(long long)a0;

- (id)specifiers;
- (void)viewWillAppear:(BOOL)a0;
- (void)setSpecifier:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (BOOL)shouldAddSpecifierForAccountTypeID:(id)a0;
- (id)_specifierForiCloudAccount;
- (id)_specifierForExchangeAccount;
- (id)_specifiersForRegionalMailAccounts;
- (id)_specifierForGmailAccount;
- (id)_specifierForYahooAccount;
- (id)_specifierForAOLAccount;
- (id)_specifierForOutlookAccount;
- (id)specifierForOtherAccounts;
- (id)_specifierForPrimaryiCloudAccount;
- (id)giantSpecifierWithName:(id)a0 forAccountTypeID:(id)a1;
- (void)_presentPrimaryAppleIDSignInController:(id)a0;
- (void)_dismissAndBecomeFirstResponder;
- (void)setupViewControllerDidDismiss:(id)a0;
- (id)_specifierForCustomControlledAccountWithName:(id)a0 accountTypeID:(id)a1;
- (void)_createCustomControlledAccountTapped:(id)a0;
- (void)_alertIfAccountTypePreventsMultiples:(id)a0 withCompletion:(id /* block */)a1;
- (void)nonModalDataclassConfigurationControllerDidCompleteWithSuccess:(BOOL)a0;
- (id)_specifierForRegionalAccountType:(id)a0;
- (void)_addAccountSpecifierWasTapped:(id)a0;
- (void)signInControllerDidCompleteWithSuccess:(BOOL)a0 error:(id)a1;
- (void)signInControllerDidCancel;

@end
