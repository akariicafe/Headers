@class NSObject, NSHashTable;
@protocol OS_dispatch_source;

@interface SKUIMetricsFlushTimer : NSObject {
    NSHashTable *_metricsControllers;
    NSObject<OS_dispatch_source> *_timer;
    unsigned long long _timerStartTime;
}

+ (id)sharedTimer;

- (void)_applicationDidEnterBackgroundNotification:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)_applicationWillEnterForegroundNotification:(id)a0;
- (void)dealloc;
- (void)addMetricsController:(id)a0;
- (void)removeMetricsController:(id)a0;
- (void)flushAllMetricsControllers;
- (void)reloadFlushInterval;
- (void)_performFlush;
- (void)_cancelFlushTimer;

@end
