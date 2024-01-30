@class NSString, PKAccountService, NSArray, PKAccountUserCollection, NSMutableDictionary, PKTransactionSourceCollection, NSDateFormatter, PKAccount, PKFamilyMemberCollection;
@protocol PKPaymentDataProvider;

@interface PKInstallmentPlansViewController : UITableViewController <PKPaymentDataProviderDelegate> {
    PKAccount *_account;
    PKAccountUserCollection *_accountUserCollection;
    PKAccountService *_accountService;
    id<PKPaymentDataProvider> _dataProvider;
    NSArray *_installmentPlans;
    NSMutableDictionary *_installmentPlanToDeviceName;
    NSMutableDictionary *_installmentPlanImages;
    NSDateFormatter *_installmentDateFormatter;
    PKFamilyMemberCollection *_familyCollection;
}

@property (readonly, nonatomic) PKTransactionSourceCollection *transactionSourceCollection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)viewWillLayoutSubviews;
- (void)didUpdateFamilyMembers:(id)a0;
- (void).cxx_destruct;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)_updateInstallmentPlans;
- (void)_handleAccountUpdatedNotification:(id)a0;
- (id)_installmentPlanForIndexPath:(id)a0;
- (void)_configureCell:(id)a0 forInstallmentPlan:(id)a1;
- (id)_imageWithURL:(id)a0 installmentPlan:(id)a1;
- (id)initWithAccount:(id)a0 accountUserCollection:(id)a1 accountService:(id)a2 transactionSourceCollection:(id)a3 familyCollection:(id)a4 dataProvider:(id)a5;
- (id)_totalAmountPaid;
- (id)_totalAmountRemaining;

@end
