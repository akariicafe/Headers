@interface CSGestureMonitor : CSEventMonitor

@property (nonatomic) unsigned long long wakeGestureTimestamp;
@property (nonatomic) unsigned long long dismissalTimestamp;

+ (id)sharedInstance;

- (void)_stopMonitoring;
- (void)_startMonitoringWithQueue:(id)a0;
- (BOOL)isTriggerHandheld;

@end
