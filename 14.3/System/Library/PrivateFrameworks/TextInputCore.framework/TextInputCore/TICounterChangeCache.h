@class NSMutableSet, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface TICounterChangeCache : NSObject {
    NSMutableDictionary *_cache;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSMutableSet *_referencedCounters;
    BOOL _userModelRateLimitingDisabled;
    double _timeOfLastPersist;
}

- (id)init;
- (void)close;
- (void).cxx_destruct;
- (void)addStatisticChanges:(id)a0 withContext:(id)a1;
- (void)keyboardDidSuspendForDate:(id)a0;
- (void)queueCompletionHandler:(id /* block */)a0;
- (void)persistForDate:(id)a0;
- (void)loadReferencedCounters;
- (void)addCounterReferencesForMetric:(id)a0 withRegistry:(id)a1;

@end
