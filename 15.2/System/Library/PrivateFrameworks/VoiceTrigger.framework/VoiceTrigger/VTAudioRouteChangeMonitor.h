@interface VTAudioRouteChangeMonitor : VTEventMonitor {
    unsigned long long _hearstConnection;
}

+ (id)sharedInstance;

- (void)_startMonitoringWithQueue:(id)a0;
- (void)_stopMonitoring;
- (void)_notifyObserver:(id)a0;
- (id)init;
- (id)_CMSessionDispatchQueue;
- (unsigned long long)_updateHearstConnectionStatus;
- (void)updateExternalRouteConnectionStatus;
- (unsigned long long)hearstConnectionStatus;
- (BOOL)_hasInEarDetectSupport:(struct __CFDictionary { } *)a0;
- (BOOL)_isActiveRoute:(struct __CFDictionary { } *)a0;
- (BOOL)_hasDoAPSupport:(struct __CFDictionary { } *)a0;

@end
