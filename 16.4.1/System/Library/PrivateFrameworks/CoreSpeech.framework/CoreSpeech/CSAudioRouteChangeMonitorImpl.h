@class NSObject;
@protocol OS_dispatch_queue;

@interface CSAudioRouteChangeMonitorImpl : CSAudioRouteChangeMonitor {
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _isHearstConnected;
    BOOL _isHearstRouted;
    BOOL _isJarvisConnected;
    BOOL _isSiriInputSourceOutOfBand;
}

- (void)_stopMonitoring;
- (void)_startMonitoringWithQueue:(id)a0;
- (void)getHearstConnected:(id /* block */)a0;
- (void)carPlayAuxStreamSupportDidChange:(id)a0;
- (void)_notifyJarvisConnectionState:(BOOL)a0;
- (void)_notifyHearstRoutedState:(BOOL)a0;
- (void)_startObservingAudioRouteChange;
- (BOOL)hearstConnected;
- (void)_notifySiriInputSourceOutOfBandState:(BOOL)a0;
- (void)carPlayIsConnectedDidChange:(id)a0;
- (void)getHearstRouted:(id /* block */)a0;
- (BOOL)carPlayConnected;
- (void)pickableRoutesDidChange:(id)a0;
- (void)_systemControllerDied:(id)a0;
- (void)getJarvisConnected:(id /* block */)a0;
- (void)_startObservingSystemControllerLifecycle;
- (BOOL)_fetchSiriInputSourceOutOfBandState;
- (BOOL)siriInputSourceOutOfBand;
- (BOOL)hearstRouted;
- (void)_notifyHearstConnectionState:(BOOL)a0;
- (void)preferredExternalRouteDidChange:(id)a0;
- (BOOL)jarvisConnected;
- (id)init;
- (void)getSiriInputSourceOutOfBand:(id /* block */)a0;
- (BOOL)_fetchHearstRoutedState;
- (BOOL)_fetchJarvisConnectionState;
- (void).cxx_destruct;
- (BOOL)_fetchHearstConnectionState;

@end
