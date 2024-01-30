@interface CSSpeechDetectionDevicePresentMonitor : CSEventMonitor

+ (id)sharedInstance;

- (void)_startMonitoringWithQueue:(id)a0;
- (void)_stopMonitoring;
- (void)_systemControllerDied:(id)a0;
- (void)_startObservingSystemControllerLifecycle;
- (void)_startObservingSpeechDetectionVADPresence;
- (id)init;
- (void)handleSpeechDetectionVADPresentChange:(id)a0;
- (BOOL)isPresent;

@end
