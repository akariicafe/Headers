@interface CSAudioRouteChangeMonitor : CSEventMonitor

+ (id)sharedInstance;

- (void)_stopMonitoring;
- (BOOL)hearstConnected;
- (BOOL)jarvisConnected;
- (void)_startMonitoringWithQueue:(id)a0;
- (void)getHearstConnected:(id /* block */)a0;
- (void)getJarvisConnected:(id /* block */)a0;

@end
