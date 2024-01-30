@interface CSAudioRouteChangeMonitor : CSEventMonitor

+ (id)sharedInstance;

- (void)_stopMonitoring;
- (void)_startMonitoringWithQueue:(id)a0;
- (void)getHearstConnected:(id /* block */)a0;
- (BOOL)hearstConnected;
- (void)getHearstRouted:(id /* block */)a0;
- (void)getJarvisConnected:(id /* block */)a0;
- (BOOL)siriInputSourceOutOfBand;
- (BOOL)hearstRouted;
- (BOOL)jarvisConnected;
- (void)getSiriInputSourceOutOfBand:(id /* block */)a0;

@end
