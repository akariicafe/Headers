@class PKAccountService, PKPhysicalCard, PKTableHeaderView, PKBusinessChatController, PKAccountUser, PKAccount, PKPaymentPass, UIBarButtonItem;

@interface PKPhysicalCardSupportViewController : UITableViewController {
    PKAccountService *_accountService;
    PKAccount *_account;
    PKAccountUser *_accountUser;
    PKPaymentPass *_paymentPass;
    PKPhysicalCard *_physicalCard;
    PKTableHeaderView *_tableHeaderView;
    UIBarButtonItem *_nextButton;
    PKBusinessChatController *_businessChatController;
    BOOL _hasSelectedReason;
    long long _selectedReason;
}

- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)scrollViewDidScroll:(id)a0;
- (void)viewDidLoad;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)viewWillLayoutSubviews;
- (void).cxx_destruct;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)_nextButtonTapped:(id)a0;
- (void)_presentBusinessChatWithContext:(id)a0;
- (void)_presentManualActivation;
- (id)initWithAccountService:(id)a0 account:(id)a1 accountUser:(id)a2 paymentPass:(id)a3 physicalCard:(id)a4;

@end
