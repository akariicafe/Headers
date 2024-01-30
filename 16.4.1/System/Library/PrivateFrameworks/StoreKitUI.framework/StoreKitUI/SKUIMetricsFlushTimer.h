@class NSObject, NSHashTable;
@protocol OS_dispatch_source;

@interface SKUIMetricsFlushTimer : NSObject {
    NSHashTable *_metricsControllers;
    NSObject<OS_dispatch_source> *_timer;
    unsigned long long _timerStartTime;
}

+ (id)sharedTimer;

- (void)_applicationDidEnterBackgroundNotification:(id)a0;
- (void)_applicationWillEnterForegroundNotification:(id)a0;
- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)addMetricsController:(id)a0;
- (void)removeMetricsController:(id)a0;
- (void)_cancelFlushTimer;
- (void)_performFlush;
- (void)flushAllMetricsControllers;
- (void)reloadFlushInterval;

@end
