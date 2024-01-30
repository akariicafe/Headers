@class NSDate, NSString, PKAccount, NSCalendar, NSHashTable, NSMutableOrderedSet, NSMutableDictionary, NSArray, NSObject, PKPaymentDefaultDataProvider, PKPaymentPass, NSCache;
@protocol OS_dispatch_queue;

@interface PKSpendingSummaryFetcher : NSObject <PKPaymentDataProviderDelegate, PKAccountServiceObserver> {
    PKPaymentPass *_paymentPass;
    NSString *_passUniqueID;
    PKAccount *_account;
    NSCache *_weeklySummaryItemsPerStartDate;
    NSCache *_monthlySummaryItemsPerStartDate;
    NSCache *_yearlySummaryItemsPerStartDate;
    NSDate *_oldestTransactionDate;
    NSDate *_newestTransactionDate;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSObject<OS_dispatch_queue> *_replyQueue;
    PKPaymentDefaultDataProvider *_paymentDataProvider;
    NSCalendar *_currentCalendar;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _observersLock;
    NSHashTable *_observers;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _requestsLock;
    NSMutableOrderedSet *_pendingRequests;
    NSMutableDictionary *_blockPendingRequests;
    BOOL _processingRequest;
    NSArray *_statements;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)previousStartOfWeekFromDate:(id)a0;
+ (id)nextStartOfWeekFromDate:(id)a0;
+ (id)summaryWithTransactions:(id)a0 currency:(id)a1 type:(unsigned long long)a2 startDate:(id)a3 endDate:(id)a4 lastSummary:(id)a5;
+ (id)_sortedTransactions:(id)a0 ascending:(BOOL)a1;
+ (id)_spendingCategoriesFromTransactions:(id)a0 currencyCode:(id)a1;
+ (id)_spendingMerchantsFromTransaction:(id)a0 currencyCode:(id)a1;

- (void)_resetCurrentCalendar;
- (id)_cachedSpendingSummaryStartingWithDate:(id)a0 type:(unsigned long long)a1 withLastPeriodChange:(BOOL)a2;
- (id)_cacheForType:(unsigned long long)a0;
- (void)_processNextRequest;
- (void)_spendingSummaryStartingWithDate:(id)a0 endDate:(id)a1 type:(unsigned long long)a2 withLastPeriodChange:(BOOL)a3 completion:(id /* block */)a4;
- (id)initWithPaymentPass:(id)a0 account:(id)a1;
- (void)availableSummaries:(id /* block */)a0;
- (id)cachedSpendingSummaryStartingWithDate:(id)a0 type:(unsigned long long)a1;
- (void)registerObserver:(id)a0;
- (void)spendingSummaryStartingWithDate:(id)a0 type:(unsigned long long)a1 includingLastPeriodChange:(BOOL)a2 completion:(id /* block */)a3;
- (void).cxx_destruct;
- (void)transactionSourceIdentifier:(id)a0 didReceiveTransaction:(id)a1;
- (void)dealloc;
- (void)_accessObserversWithHandler:(id /* block */)a0;
- (void)unregisterObserver:(id)a0;
- (void)_timeZoneChanged:(id)a0;
- (void)statementsChangedForAccountIdentifier:(id)a0;

@end
