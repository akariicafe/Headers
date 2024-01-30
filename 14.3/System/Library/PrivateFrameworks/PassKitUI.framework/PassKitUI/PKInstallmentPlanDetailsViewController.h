@class PKAccountService, NSArray, PKInstallmentPlan, PKPaymentTransactionDetailHeaderView, PKPaymentTransactionDetailAmountLineItemGenerator, PKTransactionSource, PKAccount;

@interface PKInstallmentPlanDetailsViewController : PKSectionTableViewController {
    PKAccount *_account;
    PKAccountService *_accountService;
    PKInstallmentPlan *_installmentPlan;
    PKTransactionSource *_transactionSource;
    PKPaymentTransactionDetailAmountLineItemGenerator *_lineItemGenerator;
    NSArray *_lineItems;
    PKPaymentTransactionDetailHeaderView *_headerView;
}

- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (void).cxx_destruct;
- (id)initWithAccount:(id)a0 installmentPlan:(id)a1 accountService:(id)a2 transactionSource:(id)a3;
- (id)_detailsCellForTableView:(id)a0 atIndexPath:(id)a1;
- (BOOL)shouldMapSection:(unsigned long long)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (BOOL)tableView:(id)a0 shouldHighlightRowAtIndexPath:(id)a1;
- (id)_progressCellForTableView:(id)a0 atIndexPath:(id)a1;
- (void)_updateHeaderHeight;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;

@end
