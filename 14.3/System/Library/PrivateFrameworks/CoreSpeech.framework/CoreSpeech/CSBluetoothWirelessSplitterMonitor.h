@interface CSBluetoothWirelessSplitterMonitor : CSEventMonitor {
    int _notifyToken;
}

+ (id)sharedInstance;

- (id)init;
- (void)_stopMonitoring;
- (void)_didReceiveWirelessSplitterStateChange;
- (void)splitterState:(id /* block */)a0;
- (void)_startMonitoringWithQueue:(id)a0;
- (void)_notifyObserver:(id)a0 splitterState:(unsigned long long)a1 shouldDisableSpeakerVerificationInSplitterMode:(BOOL)a2;

@end
