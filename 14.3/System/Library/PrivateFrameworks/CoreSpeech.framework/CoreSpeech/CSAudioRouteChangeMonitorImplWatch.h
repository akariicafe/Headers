@class NSObject;
@protocol OS_dispatch_queue;

@interface CSAudioRouteChangeMonitorImplWatch : CSAudioRouteChangeMonitor {
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _isHearstConnected;
}

- (id)init;
- (void).cxx_destruct;
- (void)_stopMonitoring;
- (void)_notifyHearstConnectionState:(BOOL)a0;
- (BOOL)hearstConnected;
- (BOOL)_fetchHearstConnectionState;
- (BOOL)jarvisConnected;
- (void)_startMonitoringWithQueue:(id)a0;
- (void)getHearstConnected:(id /* block */)a0;
- (void)getJarvisConnected:(id /* block */)a0;
- (void)activeAudioRouteDidChange:(id)a0;

@end
