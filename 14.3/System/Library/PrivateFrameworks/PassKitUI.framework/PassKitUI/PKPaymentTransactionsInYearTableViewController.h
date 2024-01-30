@class NSDate, PKPaymentTransactionCellController, NSString, NSCalendar, NSArray, NSSet, PKPeerPaymentWebService, PKTransactionSource, PKDashboardTransactionFetcher, NSDateFormatter, PKPeerPaymentContactResolver, PKPaymentTransactionDetailsFactory;
@protocol PKPaymentDataProvider;

@interface PKPaymentTransactionsInYearTableViewController : UITableViewController <CNAvatarViewDelegate, _UIContextMenuInteractionDelegate, PKDashboardTransactionFetcherDelegate> {
    NSDate *_dateFromYear;
    NSCalendar *_calendar;
    NSArray *_transactionsByMonth;
    NSArray *_instantWithdrawalFeesTransactionGroups;
    PKTransactionSource *_transactionSource;
    NSSet *_transactionSourceIdentifiers;
    id<PKPaymentDataProvider> _paymentServiceDataProvider;
    PKPaymentTransactionCellController *_transactionCellController;
    PKPeerPaymentContactResolver *_contactResolver;
    PKPeerPaymentWebService *_peerPaymentWebService;
    NSDateFormatter *_transactionMonthFormatter;
    NSDateFormatter *_withdrawalFeeMonthYearFormatter;
    long long _detailViewStyle;
    PKDashboardTransactionFetcher *_transactionFetcher;
    PKPaymentTransactionDetailsFactory *_transactionDetailsFactory;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)contextMenuInteraction:(id)a0 actionsForMenuAtLocation:(struct CGPoint { double x0; double x1; })a1 withSuggestedActions:(id)a2;
- (long long)_sectionTypeForSection:(long long)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void).cxx_destruct;
- (void)transactionsChanged:(id)a0;
- (id)presentingViewControllerForAvatarView:(id)a0;
- (id)_transactionDetailViewControllerForTransaction:(id)a0;
- (void)_fetchDataWithCompletion:(id /* block */)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (id)_transactionsInYearTitleString;
- (id)_withdrawalFeeMonthYearFormatter;
- (id)_transactionMonthFormatter;
- (void)_updateWithTransactions:(id)a0 completion:(id /* block */)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (id)initWithDateFromYear:(id)a0 calendar:(id)a1 transactionSource:(id)a2 detailViewStyle:(long long)a3 paymentServiceDataProvider:(id)a4 contactResolver:(id)a5 peerPaymentWebService:(id)a6;
- (long long)numberOfSectionsInTableView:(id)a0;
- (BOOL)contextMenuInteractionShouldBegin:(id)a0;
- (id)contextMenuInteraction:(id)a0 previewForHighlightingAtLocation:(struct CGPoint { double x0; double x1; })a1;
- (void)viewDidLoad;

@end
