@class NSDate, PKDashboardTransactionFetcher, PKPeerPaymentWebService, NSDateFormatter, PKPaymentTransactionDetailsFactory, PKFamilyMemberCollection, NSCalendar, NSString, NSSet, NSArray, PKContactResolver, PKPaymentTransactionCellController, PKTransactionSourceCollection;
@protocol PKPaymentDataProvider;

@interface PKPaymentTransactionsInYearTableViewController : UITableViewController <CNAvatarViewDelegate, _UIContextMenuInteractionDelegate, PKDashboardTransactionFetcherDelegate> {
    NSDate *_dateFromYear;
    NSCalendar *_calendar;
    NSArray *_transactionsByMonth;
    NSArray *_instantWithdrawalFeesTransactionGroups;
    PKTransactionSourceCollection *_transactionSourceCollection;
    NSSet *_transactionSourceIdentifiers;
    id<PKPaymentDataProvider> _paymentServiceDataProvider;
    PKPaymentTransactionCellController *_transactionCellController;
    PKContactResolver *_contactResolver;
    PKPeerPaymentWebService *_peerPaymentWebService;
    NSDateFormatter *_transactionMonthFormatter;
    NSDateFormatter *_withdrawalFeeMonthYearFormatter;
    long long _detailViewStyle;
    PKDashboardTransactionFetcher *_transactionFetcher;
    PKPaymentTransactionDetailsFactory *_transactionDetailsFactory;
    PKFamilyMemberCollection *_familyCollection;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)numberOfSectionsInTableView:(id)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (id)contextMenuInteraction:(id)a0 actionsForMenuAtLocation:(struct CGPoint { double x0; double x1; })a1 withSuggestedActions:(id)a2;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (id)contextMenuInteraction:(id)a0 previewForHighlightingAtLocation:(struct CGPoint { double x0; double x1; })a1;
- (id)presentingViewControllerForAvatarView:(id)a0;
- (void).cxx_destruct;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (BOOL)contextMenuInteractionShouldBegin:(id)a0;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (long long)_sectionTypeForSection:(long long)a0;
- (id)initWithDateFromYear:(id)a0 calendar:(id)a1 transactionSourceCollection:(id)a2 familyCollection:(id)a3 detailViewStyle:(long long)a4 paymentServiceDataProvider:(id)a5 contactResolver:(id)a6 peerPaymentWebService:(id)a7;
- (void)transactionsChanged:(id)a0;
- (id)_transactionDetailViewControllerForTransaction:(id)a0;
- (void)_fetchDataWithCompletion:(id /* block */)a0;
- (id)_transactionsInYearTitleString;
- (id)_withdrawalFeeMonthYearFormatter;
- (id)_transactionMonthFormatter;
- (void)_updateWithTransactions:(id)a0 completion:(id /* block */)a1;

@end
