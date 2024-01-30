@class NSObject;
@protocol OS_dispatch_queue;

@interface CSAudioRouteChangeMonitorImplWatch : CSAudioRouteChangeMonitor {
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _isHearstConnected;
    BOOL _isHearstRouted;
    BOOL _isSiriInputSourceOutOfBand;
}

- (void)_stopMonitoring;
- (void)_startMonitoringWithQueue:(id)a0;
- (void)getHearstConnected:(id /* block */)a0;
- (void)_notifyHearstRoutedState:(BOOL)a0;
- (void)_startObservingAudioRouteChange;
- (BOOL)hearstConnected;
- (void)_notifySiriInputSourceOutOfBandState:(BOOL)a0;
- (void)getHearstRouted:(id /* block */)a0;
- (BOOL)carPlayConnected;
- (void)_systemControllerDied:(id)a0;
- (void)getJarvisConnected:(id /* block */)a0;
- (void)_startObservingSystemControllerLifecycle;
- (BOOL)_fetchSiriInputSourceOutOfBandState;
- (BOOL)siriInputSourceOutOfBand;
- (BOOL)hearstRouted;
- (BOOL)jarvisConnected;
- (id)init;
- (void)getSiriInputSourceOutOfBand:(id /* block */)a0;
- (BOOL)_fetchHearstRoutedState;
- (void).cxx_destruct;
- (void)activeAudioRouteDidChange:(id)a0;

@end
