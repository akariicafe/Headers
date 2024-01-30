@class NSString, TUDispatcher, TUCallProviderManager, CHManager, NSArray, NSMutableSet;
@protocol TUCallHistoryControllerDataSource;

@interface TUCallHistoryController : NSObject <TUCallProviderManagerDelegate>

@property (class, readonly, nonatomic) TUCallHistoryController *sharedController;

@property (retain, nonatomic) CHManager *callHistoryManager;
@property (retain, nonatomic) TUCallProviderManager *callProviderManager;
@property (retain, nonatomic) TUDispatcher *dispatcher;
@property (retain, nonatomic) TUDispatcher *simpleIvarDispatcher;
@property (retain, nonatomic) NSArray *recentCalls;
@property (nonatomic) unsigned long long unreadCallCount;
@property (copy, nonatomic) NSArray *thirdPartyCallProviders;
@property (retain, nonatomic) NSMutableSet *metadataPreCachedOptions;
@property (readonly, nonatomic) id<TUCallHistoryControllerDataSource> dataSource;
@property (nonatomic) unsigned long long coalescingStrategy;
@property (nonatomic) unsigned long long options;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)callHistoryControllerWithCoalescingStrategy:(unsigned long long)a0 options:(unsigned long long)a1;
+ (id)sharedControllerWithCoalescingStrategy:(unsigned long long)a0 options:(unsigned long long)a1;

- (id /* block */)callHistoryManagerRecentCallsDispatchBlock;
- (void)providersChangedForProviderManager:(id)a0;
- (void)_updateCallHistoryManagerUsingCurrentOptions;
- (void)deleteRecentCall:(id)a0;
- (void)deleteRecentCalls:(id)a0;
- (id)_callHistoryCoalescingStrategyForCoalescingStrategy:(unsigned long long)a0;
- (id)initWithCoalescingStrategy:(unsigned long long)a0 options:(unsigned long long)a1 dataSource:(id)a2;
- (void)reloadWithOptions:(unsigned long long)a0;
- (void)markRecentCallsAsReadWithPredicate:(id)a0;
- (void)dealloc;
- (void)loadDispatchQueue;
- (void)markRecentCallsAsRead;
- (void)markRecentVideoCallsAsRead;
- (id)recentCallsWithPredicate:(id)a0;
- (id)init;
- (id /* block */)callHistoryManagerInitializationDispatchBlock;
- (void)deleteAllRecentCalls;
- (void)markRecentAudioCallsAsRead;
- (void)boostQualityOfService;
- (void)callHistoryDatabaseChanged:(id)a0;
- (void).cxx_destruct;
- (void)dispatcherDidFinishBoost:(id)a0;

@end
