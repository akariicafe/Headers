@interface CSSpeechDetectionDevicePresentMonitor : CSEventMonitor

+ (id)sharedInstance;

- (id)init;
- (void)_stopMonitoring;
- (void)handleSpeechDetectionVADPresentChange:(id)a0;
- (void)_startObservingSpeechDetectionVADPresence;
- (BOOL)isPresent;
- (void)_systemControllerDied:(id)a0;
- (void)_startObservingSystemControllerLifecycle;
- (void)_startMonitoringWithQueue:(id)a0;

@end
