@class PKAccountService, PKVirtualCard, PKPaymentPass, PKVirtualCardCredentials, PKPhysicalCard, PKAccount;

@interface PKAccountCardNumbersViewController : PKSectionTableViewController {
    unsigned long long _accountFeatureIdentifier;
    PKVirtualCard *_virtualCard;
    PKVirtualCardCredentials *_cardCredentials;
    PKAccountService *_accountService;
    PKAccount *_account;
    PKPaymentPass *_pass;
    long long _context;
    BOOL _loadingReplacementCard;
    PKPhysicalCard *_physicalCard;
    BOOL _redactSensitiveDetails;
}

- (void)applicationDidBecomeActive:(id)a0;
- (void)applicationWillResignActive:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (id)tableView:(id)a0 contextMenuConfigurationForRowAtIndexPath:(id)a1 point:(struct CGPoint { double x0; double x1; })a2;
- (void).cxx_destruct;
- (BOOL)pkui_disablesAutomaticDismissalUponEnteringBackground;
- (BOOL)shouldMapSection:(unsigned long long)a0;
- (id)tableView:(id)a0 titleForFooterInSection:(long long)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (id)initWithPass:(id)a0 accountService:(id)a1 account:(id)a2 cardCredentials:(id)a3 virtualCard:(id)a4 physicalCard:(id)a5 context:(long long)a6;
- (long long)_numberOfVirtualCardCredentialDetailsRowsEnabled;
- (BOOL)_virtualCardCredentialDetailsRowIsEnabled:(unsigned long long)a0;
- (id)_cardCredentialsCellForRowIndex:(long long)a0 tableView:(id)a1;
- (id)_physicalCardCellForRowIndex:(long long)a0 tableView:(id)a1;
- (id)_dpanCellForRowIndex:(long long)a0 tableView:(id)a1;
- (id)_virtualCardStateFooter;
- (unsigned long long)_virtualCardCredentialDetailsRowForRowIndex:(long long)a0;
- (id)_replaceCardAlertFromIndexPath:(id)a0;
- (id)_credentialsCellWithPrimaryText:(id)a0 detailText:(id)a1 forTableView:(id)a2;
- (id)_buttonCellForRowIndex:(long long)a0 text:(id)a1 cellStyle:(long long)a2 forTableView:(id)a3;
- (id)reuseIdentifierForSection:(unsigned long long)a0;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (BOOL)tableView:(id)a0 shouldHighlightRowAtIndexPath:(id)a1;
- (id)initWithPass:(id)a0 accountService:(id)a1 account:(id)a2 physicalCard:(id)a3 context:(long long)a4;
- (void)traitCollectionDidChange:(id)a0;
- (void)viewDidLoad;

@end
