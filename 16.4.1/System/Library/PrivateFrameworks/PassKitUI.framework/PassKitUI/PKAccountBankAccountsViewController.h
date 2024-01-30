@class PKPaymentWebService, NSString, PKAccountPaymentFundingSource, NSMutableArray, PKAccount;

@interface PKAccountBankAccountsViewController : PKSectionTableViewController <PKAddBankAccountInformationViewControllerDelegate> {
    PKAccount *_account;
    PKAccount *_associatedAccount;
    PKPaymentWebService *_paymentWebService;
    unsigned long long _accountFeatureIdentifier;
    NSMutableArray *_availableFundingSources;
    NSMutableArray *_unavailableFundingSources;
    long long _context;
    NSMutableArray *_deletingFundingSources;
    PKAccountPaymentFundingSource *_lastAddedFundingSource;
    BOOL _loadingFundingSources;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)_updateContentUnavailableConfigurationUsingState:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (void)viewDidLoad;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (id)tableView:(id)a0 trailingSwipeActionsConfigurationForRowAtIndexPath:(id)a1;
- (BOOL)tableView:(id)a0 shouldHighlightRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void).cxx_destruct;
- (BOOL)tableView:(id)a0 canEditRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 commitEditingStyle:(long long)a1 forRowAtIndexPath:(id)a2;
- (id)tableView:(id)a0 titleForFooterInSection:(long long)a1;
- (void)preflightWithCompletion:(id /* block */)a0;
- (id)_addBankAccountInformationViewController;
- (id)_bankAccountCellForRowAtIndexPath:(id)a0;
- (void)_configureBankAccountCell:(id)a0 withFundingSource:(id)a1;
- (void)_didSelectDeleteBankAccountAtIndexPath:(id)a0;
- (void)_editButtonPressed:(id)a0;
- (BOOL)_hasBankAccounts;
- (BOOL)_isBankAccountIndexPath:(id)a0;
- (void)_presentAddBankAccount;
- (void)_presentContactSupport;
- (void)_toggleEditingMode;
- (void)_updateEditButtonIfNecessary;
- (void)addBankAccountInformationViewController:(id)a0 didAddFundingSource:(id)a1;
- (void)addBankAccountInformationViewController:(id)a0 didFailWithError:(id)a1;
- (void)addBankAccountInformationViewControllerDidFinish:(id)a0;
- (void)bankAccountInformationViewControllerChangedBankAccountInformation:(id)a0;
- (id)initWithAccount:(id)a0 paymentWebService:(id)a1 context:(long long)a2;
- (BOOL)shouldMapSection:(unsigned long long)a0;

@end
