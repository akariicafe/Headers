@class PKAccountService, PKVirtualCard, PKPaymentPass, PKVirtualCardCredentials, PKPhysicalCard, PKSettingTableCell, PKAccount;

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
    PKSettingTableCell *_dynamicSecurityCodeCell;
    BOOL _redactSensitiveDetails;
}

- (void)applicationWillResignActive:(id)a0;
- (void)applicationDidEnterBackground:(id)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (void)applicationDidBecomeActive:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (BOOL)tableView:(id)a0 shouldHighlightRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 titleForFooterInSection:(long long)a1;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (id)tableView:(id)a0 viewForFooterInSection:(long long)a1;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)a0;
- (BOOL)canBecomeFirstResponder;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)_willHideUIMenuController:(id)a0;
- (BOOL)pkui_disablesAutomaticDismissalUponEnteringBackground;
- (BOOL)shouldMapSection:(unsigned long long)a0;
- (id)initWithPass:(id)a0 accountService:(id)a1 account:(id)a2 cardCredentials:(id)a3 virtualCard:(id)a4 physicalCard:(id)a5 context:(long long)a6;
- (id)initWithPass:(id)a0 accountService:(id)a1 account:(id)a2 physicalCard:(id)a3 context:(long long)a4;
- (id)_reuseIdentifierForSection:(unsigned long long)a0;
- (long long)_numberOfVirtualCardCredentialDetailsRowsEnabled;
- (BOOL)_virtualCardCredentialDetailsRowIsEnabled:(unsigned long long)a0;
- (id)_cardCredentialsCellForRowIndex:(long long)a0 tableView:(id)a1;
- (id)_dynamicSecurityCodeCellForRowIndex:(long long)a0 tableView:(id)a1;
- (id)_physicalCardCellForRowIndex:(long long)a0 tableView:(id)a1;
- (id)_dpanCellForRowIndex:(long long)a0 tableView:(id)a1;
- (id)_otherCardNumbersHeaderWithTableView:(id)a0;
- (id)_virtualCardStateFooter;
- (unsigned long long)_virtualCardCredentialDetailsRowForRowIndex:(long long)a0;
- (void)_copyCardDetails;
- (id)_replaceCardAlertFromIndexPath:(id)a0;
- (id)_credentialsCellWithPrimaryText:(id)a0 detailText:(id)a1 forTableView:(id)a2;
- (id)_credentialsCellWithPrimaryText:(id)a0 detailText:(id)a1 detailImage:(id)a2 forTableView:(id)a3;
- (id)_buttonCellForRowIndex:(long long)a0 text:(id)a1 cellStyle:(long long)a2 forTableView:(id)a3;
- (void)_toggleDynamicSecurityCodeSetting;

@end
