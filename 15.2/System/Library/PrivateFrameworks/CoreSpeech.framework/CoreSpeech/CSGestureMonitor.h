@interface CSGestureMonitor : CSEventMonitor

@property (nonatomic) unsigned long long wakeGestureTimestamp;
@property (nonatomic) unsigned long long dismissalTimestamp;

+ (id)sharedInstance;

- (void)_startMonitoringWithQueue:(id)a0;
- (void)_stopMonitoring;
- (BOOL)isTriggerHandheld;

@end
