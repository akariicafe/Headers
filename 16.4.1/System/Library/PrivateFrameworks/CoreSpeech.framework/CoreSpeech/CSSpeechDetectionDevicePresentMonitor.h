@interface CSSpeechDetectionDevicePresentMonitor : CSEventMonitor

+ (id)sharedInstance;

- (void)_stopMonitoring;
- (void)_startMonitoringWithQueue:(id)a0;
- (void)_systemControllerDied:(id)a0;
- (void)_startObservingSystemControllerLifecycle;
- (void)handleSpeechDetectionVADPresentChange:(id)a0;
- (BOOL)isPresent;
- (void)_startObservingSpeechDetectionVADPresence;
- (id)init;

@end
