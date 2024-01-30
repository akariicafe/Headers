@interface CSBluetoothWirelessSplitterMonitorImpIOS : CSBluetoothWirelessSplitterMonitor {
    int _notifyToken;
    unsigned long long _splitterState;
}

- (void)_startMonitoringWithQueue:(id)a0;
- (void)_stopMonitoring;
- (unsigned long long)splitterState;
- (void)splitterState:(id /* block */)a0;
- (id)init;
- (void)updateSplitterState:(unsigned long long)a0 shouldDisableSpeakerVerificationInSplitterMode:(BOOL)a1;
- (void)_didReceiveWirelessSplitterStateChange;
- (void)_notifyObserver:(id)a0 splitterState:(unsigned long long)a1 shouldDisableSpeakerVerificationInSplitterMode:(BOOL)a2;

@end
