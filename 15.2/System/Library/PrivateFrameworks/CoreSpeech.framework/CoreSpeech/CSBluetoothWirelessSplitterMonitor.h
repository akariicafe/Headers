@interface CSBluetoothWirelessSplitterMonitor : CSEventMonitor

+ (id)sharedInstance;

- (void)_startMonitoringWithQueue:(id)a0;
- (void)_stopMonitoring;
- (unsigned long long)splitterState;
- (void)splitterState:(id /* block */)a0;
- (void)updateSplitterState:(unsigned long long)a0 shouldDisableSpeakerVerificationInSplitterMode:(BOOL)a1;

@end
