@class PKAccount, NSString, PKPayLaterFinancingPlansFetcher, NSArray, NSMutableArray, PKPayLaterInstallmentPresenter;

@interface PKPayLaterCalendarViewController : PKHorizontalScrollingViewController <PKPayLaterFinancingPlansFetcherObserver, PKHorizontalScrollingViewControllerDataSource> {
    PKPayLaterFinancingPlansFetcher *_fetcher;
    PKPayLaterInstallmentPresenter *_installmentPresenter;
    PKAccount *_payLaterAccount;
    NSArray *_months;
    long long _startingIndex;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lockUpdate;
    NSMutableArray *_pendingDateUpdates;
    NSArray *_emptyViewControllers;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)footerView;
- (long long)numberOfItems;
- (void)dealloc;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void).cxx_destruct;
- (void)invalidatedInstallmentsMonth;
- (void)invalidatedInstallmentsMonthsWithDates:(id)a0;
- (long long)startingIndex;
- (id)cachedDataAtIndex:(long long)a0;
- (void)didDequeueViewController:(id)a0;
- (void)didMoveToPrimaryIndex:(long long)a0;
- (id)emptyViewControllers;
- (void)fetchDataAtIndex:(long long)a0 completion:(id /* block */)a1;
- (double)footerViewContentHeight;
- (id)initWithPlansFetcher:(id)a0 installmentPresenter:(id)a1 paymentIntentController:(id)a2;
- (id)loadingDataObjectWithCurrentData:(id)a0 index:(long long)a1 swap:(BOOL)a2;
- (void)prefetchDataIfNecessary;
- (void)preflightWithFirstShownDate:(id)a0 completion:(id /* block */)a1;

@end
