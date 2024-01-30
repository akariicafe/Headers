@class NSString, TUDispatcher, TUCallProviderManager, CHManager, NSArray, NSMutableSet;

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
@property (nonatomic) unsigned long long coalescingStrategy;
@property (nonatomic) unsigned long long options;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedControllerWithCoalescingStrategy:(unsigned long long)a0 options:(unsigned long long)a1;
+ (id)callHistoryControllerWithCoalescingStrategy:(unsigned long long)a0 options:(unsigned long long)a1;

- (void)deleteRecentCalls:(id)a0;
- (void)callHistoryDatabaseChanged:(id)a0;
- (id /* block */)callHistoryManagerRecentCallsDispatchBlock;
- (id /* block */)callHistoryManagerInitializationDispatchBlock;
- (void)deleteAllRecentCalls;
- (void)markRecentAudioCallsAsRead;
- (void)deleteRecentCall:(id)a0;
- (void).cxx_destruct;
- (void)markRecentVideoCallsAsRead;
- (id)init;
- (void)providersChangedForProviderManager:(id)a0;
- (id)initWithCoalescingStrategy:(unsigned long long)a0 options:(unsigned long long)a1;
- (void)_updateCallHistoryManagerUsingCurrentOptions;
- (void)dispatcherDidFinishBoost:(id)a0;
- (id)recentCallsWithPredicate:(id)a0;
- (void)dealloc;
- (void)markRecentCallsAsReadWithPredicate:(id)a0;
- (void)loadDispatchQueue;
- (void)reloadWithOptions:(unsigned long long)a0;
- (void)markRecentCallsAsRead;
- (id)_callHistoryCoalescingStrategyForCoalescingStrategy:(unsigned long long)a0;
- (void)boostQualityOfService;

@end
