@class NSObject;
@protocol OS_dispatch_queue;

@interface CSAudioRouteChangeMonitorImpl : CSAudioRouteChangeMonitor {
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _isHearstConnected;
    BOOL _isJarvisConnected;
}

- (void)_notifyJarvisConnectionState:(BOOL)a0;
- (id)init;
- (void).cxx_destruct;
- (void)_stopMonitoring;
- (void)_notifyHearstConnectionState:(BOOL)a0;
- (BOOL)hearstConnected;
- (void)preferredExternalRouteDidChange:(id)a0;
- (BOOL)_fetchHearstConnectionState;
- (BOOL)_fetchJarvisConnectionState;
- (BOOL)jarvisConnected;
- (void)_startMonitoringWithQueue:(id)a0;
- (void)carPlayAudioRouteDidChange:(id)a0;
- (void)getHearstConnected:(id /* block */)a0;
- (void)getJarvisConnected:(id /* block */)a0;

@end
