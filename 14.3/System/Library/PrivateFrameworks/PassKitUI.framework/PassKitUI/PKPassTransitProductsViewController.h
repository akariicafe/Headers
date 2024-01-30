@class PKPaymentPass, NSString, PKAdjustableSingleCellView, PKRemoteDataAccessor, PKTransitBalanceModel;
@protocol PKPaymentDataProvider;

@interface PKPassTransitProductsViewController : PKSectionTableViewController <PKPaymentDataProviderDelegate, PKPerformActionViewControllerDelegate, PKAccessibleLayoutObserverDelegate> {
    PKTransitBalanceModel *_balanceModel;
    long long _accessibleLayout;
    id<PKPaymentDataProvider> _paymentDataProvider;
    BOOL _hasBalance;
    BOOL _hasCommutePlans;
    unsigned long long _transitType;
    PKAdjustableSingleCellView *_sampleSingleCellView;
    PKRemoteDataAccessor *_remoteDataAccessor;
}

@property (nonatomic) PKPaymentPass *pass;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void).cxx_destruct;
- (void)scrollViewDidScroll:(id)a0;
- (void)dealloc;
- (void)paymentPassWithUniqueIdentifier:(id)a0 didReceiveBalanceUpdate:(id)a1;
- (id)initWithPaymentPass:(id)a0 transitType:(unsigned long long)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)paymentPassWithUniqueIdentifier:(id)a0 didUpdateWithTransitPassProperties:(id)a1;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (id)_renewActionForCommutePlanIdentifier:(id)a0;
- (void)_configureView:(id)a0 indexPath:(id)a1 animated:(BOOL)a2;
- (void)_configureCell:(id)a0 inTableView:(id)a1 forIndexPath:(id)a2;
- (void)accessibleLayoutForView:(id)a0 changedFrom:(long long)a1 to:(long long)a2;
- (long long)numberOfSectionsInTableView:(id)a0;
- (void)_reloadContent;
- (void)_handlePassUpdate:(id)a0;
- (void)_setupPlans;
- (void)_setupBalances;
- (id)_topUpActionForIndexPath:(id)a0 balanceIdentifier:(id)a1;
- (id /* block */)_actionHandlerForIndexPath:(id)a0;
- (id)_allocView;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)performActionViewControllerDidCancel:(id)a0;
- (void)performActionViewControllerDidPerformAction:(id)a0;
- (void)traitCollectionDidChange:(id)a0;
- (void)_reloadBalance;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;

@end
