@class FCKeyValueStore, NSArray, NSString, NSMutableIndexSet, NSHashTable, NSObject, NSMutableArray;
@protocol OS_dispatch_queue, FCOperationThrottler;

@interface FCNetworkBehaviorMonitor : NSObject <FCNetworkReachabilityObserving, FCOperationThrottlerDelegate> {
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSMutableArray *_sessions;
    NSMutableIndexSet *_sessionIDsThisLaunch;
    NSMutableArray *_events;
    FCKeyValueStore *_localStore;
    id<FCOperationThrottler> _saveThrottler;
    NSHashTable *_observers;
}

@property (readonly, copy, nonatomic) NSArray *sessions;
@property (readonly, copy, nonatomic) NSArray *networkEvents;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)logNetworkEvent:(id)a0;
- (BOOL)_shouldFilterNetworkEvent:(id)a0;
- (id)init;
- (void)wifiReachabilityDidChange:(id)a0;
- (void).cxx_destruct;
- (void)removeObserver:(id)a0;
- (void)operationThrottlerPerformOperation:(id)a0;
- (void)addObserver:(id)a0;
- (int)_cacheStateFromEvent:(id)a0;
- (void)populateTelemetry:(id)a0 withNetworkEventsFromDate:(id)a1 toDate:(id)a2;
- (id)_respondingPOPFromEvent:(id)a0;
- (void)_visitEventGroupsFromDate:(id)a0 toDate:(id)a1 block:(id /* block */)a2;
- (id)initWithCacheDirectory:(id)a0;
- (id)initForLoggingOnly;
- (void)_sanitizeNetworkEvent:(id)a0;

@end
