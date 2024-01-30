@interface CSAudioRouteChangeMonitor : CSEventMonitor

+ (id)sharedInstance;

- (void)_startMonitoringWithQueue:(id)a0;
- (void)getHearstConnected:(id /* block */)a0;
- (void)_stopMonitoring;
- (void)getJarvisConnected:(id /* block */)a0;
- (BOOL)hearstConnected;
- (BOOL)jarvisConnected;

@end
