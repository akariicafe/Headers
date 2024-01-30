@class NSObject;
@protocol OS_dispatch_queue;

@interface CSAudioRouteChangeMonitorImplWatch : CSAudioRouteChangeMonitor {
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _isHearstConnected;
}

- (void)_startMonitoringWithQueue:(id)a0;
- (void)getHearstConnected:(id /* block */)a0;
- (void)_stopMonitoring;
- (void)_startObservingAudioRouteChange;
- (void)_systemControllerDied:(id)a0;
- (void)_startObservingSystemControllerLifecycle;
- (void).cxx_destruct;
- (BOOL)_fetchHearstConnectionState;
- (void)_notifyHearstConnectionState:(BOOL)a0;
- (id)init;
- (void)getJarvisConnected:(id /* block */)a0;
- (BOOL)hearstConnected;
- (BOOL)jarvisConnected;
- (void)activeAudioRouteDidChange:(id)a0;

@end
