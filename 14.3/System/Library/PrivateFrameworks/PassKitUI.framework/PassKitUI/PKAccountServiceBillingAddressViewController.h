@class PKAccountService, PKAccount, CNContact;

@interface PKAccountServiceBillingAddressViewController : PKSectionTableViewController <PKAddressEditorViewControllerDelegate> {
    CNContact *_currentBillingAddress;
    PKAccountService *_accountService;
    PKAccount *_account;
    unsigned long long _accountFeatureIdentifier;
    long long _detailViewStyle;
    id /* block */ _handler;
    BOOL _loadingNewBillingContact;
}

- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (id)tableView:(id)a0 contextMenuConfigurationForRowAtIndexPath:(id)a1 point:(struct CGPoint { double x0; double x1; })a2;
- (void).cxx_destruct;
- (id)_currentBillingAddressCellForRowIndex:(long long)a0 tableView:(id)a1;
- (id)_enterNewBillingAddressCellForRowIndex:(long long)a0 tableView:(id)a1;
- (void)_didSelectChangeAddress;
- (id)requiredBillingAddressKeys;
- (id)initWithBillingAddress:(id)a0 account:(id)a1 accountService:(id)a2 detailViewStyle:(long long)a3 handler:(id /* block */)a4;
- (BOOL)shouldMapSection:(unsigned long long)a0;
- (id)tableView:(id)a0 titleForFooterInSection:(long long)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (long long)modalPresentationStyle;
- (BOOL)tableView:(id)a0 shouldHighlightRowAtIndexPath:(id)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (void)addressEditorViewController:(id)a0 selectedContact:(id)a1;
- (void)addressEditorViewControllerDidCancel:(id)a0;
- (void)viewDidLoad;

@end
