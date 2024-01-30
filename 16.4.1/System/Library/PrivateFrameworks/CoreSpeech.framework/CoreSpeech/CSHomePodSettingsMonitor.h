@interface CSHomePodSettingsMonitor : CSEventMonitor

+ (id)sharedInstance;

- (void)_stopMonitoring;
- (void)_startMonitoringWithQueue:(id)a0;
- (BOOL)shouldAudioMonitoringRecording;
- (BOOL)shouldVoiceTriggerRun;

@end
