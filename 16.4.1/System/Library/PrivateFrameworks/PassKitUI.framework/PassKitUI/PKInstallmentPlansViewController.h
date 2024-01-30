@class NSString, PKAccountService, PKAccountUserCollection, NSSet, NSArray, NSMutableDictionary, PKTransactionSourceCollection, NSDateFormatter, PKAccount, PKFamilyMemberCollection;
@protocol PKPaymentDataProvider;

@interface PKInstallmentPlansViewController : UITableViewController <PKPaymentDataProviderDelegate> {
    PKAccount *_account;
    PKAccountUserCollection *_accountUserCollection;
    NSSet *_physicalCards;
    PKAccountService *_accountService;
    id<PKPaymentDataProvider> _dataProvider;
    NSArray *_activeInstallmentPlans;
    NSArray *_completedInstallmentPlans;
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

- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (void)viewDidLoad;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)viewWillLayoutSubviews;
- (void).cxx_destruct;
- (void)didUpdateFamilyMembers:(id)a0;
- (void)_configureCell:(id)a0 forInstallmentPlan:(id)a1;
- (void)_handleAccountUpdatedNotification:(id)a0;
- (id)_imageWithURL:(id)a0 installmentPlan:(id)a1;
- (id)_indexPathForInstallmentPlan:(id)a0;
- (id)_installmentPlanForIndexPath:(id)a0;
- (void)_updateInstallmentPlans;
- (id)initWithAccount:(id)a0 accountUserCollection:(id)a1 physicalCards:(id)a2 accountService:(id)a3 transactionSourceCollection:(id)a4 familyCollection:(id)a5 dataProvider:(id)a6;

@end
