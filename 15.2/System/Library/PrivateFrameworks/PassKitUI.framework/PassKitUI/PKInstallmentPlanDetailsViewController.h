@class PKAccountUserCollection, PKAccountService, PKCreditInstallmentPlan, PKPaymentTransactionDetailAmountLineItemGenerator, NSArray, PKPaymentTransactionDetailHeaderView, PKTransactionSourceCollection, PKAccount, PKFamilyMemberCollection;

@interface PKInstallmentPlanDetailsViewController : PKSectionTableViewController {
    PKAccount *_account;
    PKAccountService *_accountService;
    PKAccountUserCollection *_accountUserCollection;
    PKFamilyMemberCollection *_familyMemberCollection;
    PKCreditInstallmentPlan *_installmentPlan;
    PKTransactionSourceCollection *_transactionSourceCollection;
    PKPaymentTransactionDetailAmountLineItemGenerator *_lineItemGenerator;
    NSArray *_lineItems;
    PKPaymentTransactionDetailHeaderView *_headerView;
}

- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)viewWillLayoutSubviews;
- (BOOL)tableView:(id)a0 shouldHighlightRowAtIndexPath:(id)a1;
- (void).cxx_destruct;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (void)_updateHeaderHeight;
- (id)initWithAccount:(id)a0 installmentPlan:(id)a1 accountService:(id)a2 accountUserCollection:(id)a3 familyMemberCollection:(id)a4 transactionSourceCollection:(id)a5;
- (BOOL)shouldMapSection:(unsigned long long)a0;
- (id)_detailsCellForTableView:(id)a0 atIndexPath:(id)a1;
- (id)_progressCellForTableView:(id)a0 atIndexPath:(id)a1;

@end
