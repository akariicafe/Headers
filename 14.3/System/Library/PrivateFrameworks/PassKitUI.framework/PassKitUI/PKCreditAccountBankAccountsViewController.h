@class PKPaymentWebService, NSString, NSMutableArray, PKAccount;

@interface PKCreditAccountBankAccountsViewController : PKSectionTableViewController <PKAddBankAccountInformationViewControllerDelegate> {
    PKAccount *_account;
    PKPaymentWebService *_paymentWebService;
    unsigned long long _accountFeatureIdentifier;
    NSMutableArray *_fundingSources;
    long long _context;
    NSMutableArray *_deletingFundingSources;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)tableView:(id)a0 commitEditingStyle:(long long)a1 forRowAtIndexPath:(id)a2;
- (void).cxx_destruct;
- (id)_addBankAccountInformationViewController;
- (void)bankAccountInformationViewControllerChangedBankAccountInformation:(id)a0;
- (void)addBankAccountInformationViewController:(id)a0 didAddFundingSource:(id)a1;
- (void)addBankAccountInformationViewControllerDidFinish:(id)a0;
- (void)addBankAccountInformationViewController:(id)a0 didFailWithError:(id)a1;
- (BOOL)shouldMapSection:(unsigned long long)a0;
- (BOOL)tableView:(id)a0 canEditRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)_toggleEditingMode;
- (void)_updateEditButtonIfNecessary;
- (void)_editButtonPressed:(id)a0;
- (id)_broadwayBankAccountCellForRowAtIndex:(long long)a0;
- (void)_configureBankAccountCell:(id)a0 withFundingSource:(id)a1;
- (BOOL)_isBankAccountIndexPath:(id)a0;
- (void)_didSelectDeleteBroadwayBankAccountAtIndexPath:(id)a0;
- (id)initWithAccount:(id)a0 paymentWebService:(id)a1 context:(long long)a2;
- (void)preflightWithCompletion:(id /* block */)a0;
- (id)tableView:(id)a0 editActionsForRowAtIndexPath:(id)a1;
- (BOOL)tableView:(id)a0 shouldHighlightRowAtIndexPath:(id)a1;
- (void)viewDidLoad;

@end
