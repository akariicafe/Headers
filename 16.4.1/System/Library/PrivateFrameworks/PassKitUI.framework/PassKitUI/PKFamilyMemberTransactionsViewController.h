@class PKFamilyMember, PKDashboardTransactionFetcher, PKPeerPaymentWebService, PKPeerPaymentAccount, PKPaymentTransactionDetailsFactory, NSDateFormatter, PKAccount, NSString, PKFamilyMemberCollection, PKContactResolver, NSArray, PKPaymentTransactionCellController, PKTransactionSourceCollection;
@protocol PKPaymentDataProvider;

@interface PKFamilyMemberTransactionsViewController : PKSectionTableViewController <CNAvatarViewDelegate, PKDashboardTransactionFetcherDelegate> {
    PKFamilyMember *_familyMember;
    PKFamilyMemberCollection *_familyCollection;
    PKPeerPaymentAccount *_peerPaymentAccount;
    PKPeerPaymentWebService *_peerPaymentWebService;
    PKTransactionSourceCollection *_transactionSourceCollection;
    PKDashboardTransactionFetcher *_transactionFetcher;
    PKPaymentTransactionDetailsFactory *_transactionDetailsFactory;
    long long _detailViewStyle;
    PKContactResolver *_contactResolver;
    id<PKPaymentDataProvider> _paymentServiceDataProvider;
    PKPaymentTransactionCellController *_transactionCellController;
    NSDateFormatter *_formatterYear;
    NSString *_viewerFamilyMemberTypeAnalyticsKey;
    unsigned long long _mode;
    PKAccount *_account;
    NSArray *_transactionGroups;
    NSArray *_transactions;
    BOOL _allContentIsLoaded;
    BOOL _didBeginReporter;
    BOOL _requestingStatement;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (id)_contactKeysToFetch;
- (void)viewDidLoad;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (id)presentingViewControllerForAvatarView:(id)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (BOOL)tableView:(id)a0 shouldHighlightRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 contextMenuConfigurationForRowAtIndexPath:(id)a1 point:(struct CGPoint { double x0; double x1; })a2;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)a0;
- (void)transactionsChanged:(id)a0;
- (void)_didSelectRequestStatementAtIndexPath:(id)a0;
- (void)_fetchDataWithCompletion:(id /* block */)a0;
- (void)_reloadTransactionGroupsWithCompletion:(id /* block */)a0;
- (void)_reloadTransactionsWithCompletion:(id /* block */)a0;
- (id)_transactionDetailViewControllerForTransaction:(id)a0;
- (BOOL)_updateWithTransactionGroups:(id)a0;
- (BOOL)_updateWithTransactions:(id)a0;
- (id)_viewControllerForTransactionGroup:(id)a0;
- (id)initWithFamilyMember:(id)a0 familyCollection:(id)a1 transactionSource:(id)a2 account:(id)a3 peerPaymentAccount:(id)a4 peerPaymentWebService:(id)a5 detailViewStyle:(long long)a6 paymentServiceDataProvider:(id)a7 mode:(unsigned long long)a8;
- (BOOL)shouldMapSection:(unsigned long long)a0;
- (id)transactionViewControllerForTransaction:(id)a0;

@end
