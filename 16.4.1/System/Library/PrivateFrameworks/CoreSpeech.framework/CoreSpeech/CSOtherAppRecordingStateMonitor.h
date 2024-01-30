@interface CSOtherAppRecordingStateMonitor : CSEventMonitor

+ (id)sharedInstance;

- (void)_stopMonitoring;
- (void)_startMonitoringWithQueue:(id)a0;
- (void)_systemControllerDied:(id)a0;
- (void)_startObservingSystemControllerLifecycle;
- (BOOL)isOtherNonEligibleAppRecording;
- (void)handleOtherAppRecordingStateChange:(id)a0;
- (void)_startObservingOtherAppRecordingState;
- (id)init;

@end
