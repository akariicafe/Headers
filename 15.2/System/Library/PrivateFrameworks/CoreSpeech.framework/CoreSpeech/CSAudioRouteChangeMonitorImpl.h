@class NSObject;
@protocol OS_dispatch_queue;

@interface CSAudioRouteChangeMonitorImpl : CSAudioRouteChangeMonitor {
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _isHearstConnected;
    BOOL _isJarvisConnected;
}

- (void)_startMonitoringWithQueue:(id)a0;
- (void)getHearstConnected:(id /* block */)a0;
- (void)carPlayAuxStreamSupportDidChange:(id)a0;
- (void)_stopMonitoring;
- (void)_startObservingAudioRouteChange;
- (BOOL)carPlayConnected;
- (void)_notifyJarvisConnectionState:(BOOL)a0;
- (void)_systemControllerDied:(id)a0;
- (void)carPlayIsConnectedDidChange:(id)a0;
- (void)_startObservingSystemControllerLifecycle;
- (void).cxx_destruct;
- (BOOL)_fetchHearstConnectionState;
- (void)_notifyHearstConnectionState:(BOOL)a0;
- (id)init;
- (void)getJarvisConnected:(id /* block */)a0;
- (BOOL)hearstConnected;
- (void)preferredExternalRouteDidChange:(id)a0;
- (BOOL)_fetchJarvisConnectionState;
- (BOOL)jarvisConnected;

@end
