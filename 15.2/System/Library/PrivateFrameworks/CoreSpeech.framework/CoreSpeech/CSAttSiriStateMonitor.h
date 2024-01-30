@interface CSAttSiriStateMonitor : CSEventMonitor

@property (nonatomic) unsigned long long currentState;

+ (id)sharedInstance;

- (void)_startMonitoringWithQueue:(id)a0;
- (BOOL)isInAttendingState;
- (void)_stopMonitoring;
- (id)init;
- (void)notifyUpdatedState:(unsigned long long)a0;

@end
