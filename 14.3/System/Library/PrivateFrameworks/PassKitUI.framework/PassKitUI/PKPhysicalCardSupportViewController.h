@class PKPaymentPass, PKAccountService, PKPhysicalCard, PKTableHeaderView, UIBarButtonItem, PKBusinessChatController, PKAccount;

@interface PKPhysicalCardSupportViewController : UITableViewController {
    PKAccountService *_accountService;
    PKAccount *_account;
    PKPaymentPass *_paymentPass;
    PKPhysicalCard *_physicalCard;
    PKTableHeaderView *_tableHeaderView;
    UIBarButtonItem *_nextButton;
    PKBusinessChatController *_businessChatController;
    BOOL _hasSelectedReason;
    long long _selectedReason;
}

- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void).cxx_destruct;
- (void)scrollViewDidScroll:(id)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)_nextButtonTapped:(id)a0;
- (void)_presentManualActivation;
- (void)_presentBusinessChatWithContext:(id)a0;
- (id)initWithAccountService:(id)a0 account:(id)a1 paymentPass:(id)a2 physicalCard:(id)a3;

@end
