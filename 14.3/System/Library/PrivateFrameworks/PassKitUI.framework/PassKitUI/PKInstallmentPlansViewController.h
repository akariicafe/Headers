@class PKAccountService, NSArray, NSMutableDictionary, NSDateFormatter, PKTransactionSource, PKAccount;
@protocol PKPaymentDataProvider;

@interface PKInstallmentPlansViewController : UITableViewController {
    PKAccount *_account;
    PKAccountService *_accountService;
    PKTransactionSource *_transactionSource;
    id<PKPaymentDataProvider> _dataProvider;
    NSArray *_installmentPlans;
    NSMutableDictionary *_installmentPlanToDeviceName;
    NSMutableDictionary *_installmentPlanImages;
    NSDateFormatter *_installmentDateFormatter;
}

- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void).cxx_destruct;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)_updateInstallmentPlans;
- (void)_handleAccountUpdatedNotification:(id)a0;
- (id)_installmentPlanForIndexPath:(id)a0;
- (void)_configureCell:(id)a0 forInstallmentPlan:(id)a1;
- (id)_imageWithURL:(id)a0 installmentPlan:(id)a1;
- (id)initWithAccount:(id)a0 accountService:(id)a1 transactionSource:(id)a2 dataProvider:(id)a3;
- (id)_totalAmountPaid;
- (id)_totalAmountRemaining;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;

@end
