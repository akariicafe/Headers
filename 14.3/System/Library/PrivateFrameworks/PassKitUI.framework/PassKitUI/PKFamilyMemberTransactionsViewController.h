@class NSString, PKPaymentTransactionCellController, PKDashboardTransactionFetcher, NSArray, PKPaymentTransactionDetailsFactory, PKPeerPaymentWebService, PKPeerPaymentAccount, PKTransactionSource, PKFamilyMember, PKPeerPaymentContactResolver, NSDateFormatter;
@protocol PKPaymentDataProvider;

@interface PKFamilyMemberTransactionsViewController : PKSectionTableViewController <CNAvatarViewDelegate, _UIContextMenuInteractionDelegate, PKDashboardTransactionFetcherDelegate> {
    PKFamilyMember *_familyMember;
    PKFamilyMember *_viewer;
    PKPeerPaymentAccount *_peerPaymentAccount;
    PKPeerPaymentWebService *_peerPaymentWebService;
    PKTransactionSource *_transactionSource;
    PKDashboardTransactionFetcher *_transactionFetcher;
    PKPaymentTransactionDetailsFactory *_transactionDetailsFactory;
    long long _detailViewStyle;
    PKPeerPaymentContactResolver *_contactResolver;
    id<PKPaymentDataProvider> _paymentServiceDataProvider;
    PKPaymentTransactionCellController *_transactionCellController;
    NSDateFormatter *_formatterYear;
    NSString *_viewerFamilyMemberTypeAnalyticsKey;
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

- (id)contextMenuInteraction:(id)a0 actionsForMenuAtLocation:(struct CGPoint { double x0; double x1; })a1 withSuggestedActions:(id)a2;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void).cxx_destruct;
- (void)transactionsChanged:(id)a0;
- (id)presentingViewControllerForAvatarView:(id)a0;
- (id)initWithFamilyMember:(id)a0 viewer:(id)a1 transactionSource:(id)a2 peerPaymentAccount:(id)a3 peerPaymentWebService:(id)a4 detailViewStyle:(long long)a5 paymentServiceDataProvider:(id)a6;
- (BOOL)shouldMapSection:(unsigned long long)a0;
- (id)_transactionDetailViewControllerForTransaction:(id)a0;
- (void)_fetchDataWithCompletion:(id /* block */)a0;
- (id)_viewControllerForTransactionGroup:(id)a0;
- (void)_didSelectRequestStatementAtIndexPath:(id)a0;
- (void)_reloadTransactionsWithCompletion:(id /* block */)a0;
- (void)_reloadTransactionGroupsWithCompletion:(id /* block */)a0;
- (BOOL)_updateWithTransactions:(id)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (id)transactionViewControllerForTransaction:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (BOOL)tableView:(id)a0 shouldHighlightRowAtIndexPath:(id)a1;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (BOOL)contextMenuInteractionShouldBegin:(id)a0;
- (id)contextMenuInteraction:(id)a0 previewForHighlightingAtLocation:(struct CGPoint { double x0; double x1; })a1;
- (BOOL)_updateWithTransactionGroups:(id)a0;
- (id)_contactKeysToFetch;
- (void)viewDidLoad;

@end
