@class PKPayLaterFinancingPlansFetcherRequest, NSString, PKAccountService, NSHashTable, NSDate, NSArray, PKCurrencyAmount, NSMutableArray, NSObject, PKAccount, NSCache;
@protocol OS_dispatch_queue;

@interface PKPayLaterFinancingPlansFetcher : NSObject <PKAccountServiceObserver> {
    PKAccountService *_accountService;
    PKCurrencyAmount *_fallbackAmount;
    NSMutableArray *_pendingRequests;
    PKPayLaterFinancingPlansFetcherRequest *_currentRequest;
    NSCache *_financingPlanCache;
    NSCache *_installmentMonthCache;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _requestsLock;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _cacheLock;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _observersLock;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSObject<OS_dispatch_queue> *_replyQueue;
    BOOL _hasDateRange;
    BOOL _updatingDateRange;
    NSMutableArray *_dateRangeCompletions;
    NSHashTable *_observers;
    NSDate *_oldestDate;
    NSDate *_newestDate;
    NSArray *_months;
}

@property (readonly, nonatomic) PKAccount *payLaterAccount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_financingPlanStates;

- (void)accountChanged:(id)a0;
- (void)registerObserver:(id)a0;
- (void)dealloc;
- (void)unregisterObserver:(id)a0;
- (void).cxx_destruct;
- (void)accountFinancingPlanUpdated:(id)a0 oldFinancingPlan:(id)a1 accountIdentifier:(id)a2;
- (void)_accessObserversWithHandler:(id /* block */)a0;
- (void)_addRequest:(id)a0;
- (void)_executeNextRequestIfPossible;
- (void)_executeRequest:(id)a0;
- (void)_queue_clearAllCache;
- (void)_queue_clearCacheWithMonths:(id)a0;
- (void)_queue_financingPlanUpdated:(id)a0;
- (void)_timeZoneChanged;
- (void)accountFinancingPlanAdded:(id)a0 accountIdentifier:(id)a1;
- (void)accountFinancingPlanRemoved:(id)a0 accountIdentifier:(id)a1;
- (id)cachedInstallmentsMonthWithStartDate:(id)a0;
- (void)financingPlansWithQueries:(id)a0 completion:(id /* block */)a1;
- (void)financingPlansWithQueryItems:(unsigned long long)a0 completion:(id /* block */)a1;
- (id)initWithPayLaterAccount:(id)a0;
- (void)installmentsMonthWithDate:(id)a0 completion:(id /* block */)a1;
- (id)monthDates;
- (void)preflightDataIfNecessaryWithCompletion:(id /* block */)a0;

@end
