@class TIEventDescriptorRegistry, NSMutableDictionary, TIMetricDescriptorRegistry, NSMutableSet, NSObject;
@protocol OS_dispatch_queue;

@interface TICounterChangeCache : NSObject {
    TIEventDescriptorRegistry *_eventDescriptorRegistry;
    TIMetricDescriptorRegistry *_metricDescriptorRegistry;
    NSMutableDictionary *_cache;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSMutableSet *_referencedCounters;
    BOOL _userModelRateLimitingDisabled;
    double _timeOfLastPersist;
}

- (void)addCounterReferencesForMetric:(id)a0;
- (void)addStatisticChanges:(id)a0 withContext:(id)a1;
- (void)loadReferencedCounters;
- (void)close;
- (void)queueCompletionHandler:(id /* block */)a0;
- (id)initWithEventDescriptorRegistry:(id)a0 metricDescriptorRegistry:(id)a1;
- (void)keyboardDidSuspendForDate:(id)a0;
- (void).cxx_destruct;
- (void)persistForDate:(id)a0;

@end
