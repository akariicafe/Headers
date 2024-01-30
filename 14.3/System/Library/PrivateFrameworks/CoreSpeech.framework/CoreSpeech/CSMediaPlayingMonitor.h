@class NSObject;
@protocol OS_dispatch_queue;

@interface CSMediaPlayingMonitor : CSEventMonitor {
    long long _mediaIsPlaying;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)_stopMonitoring;
- (void)_startMonitoringWithQueue:(id)a0;
- (void)_notifyObserver:(id)a0 mediaIsPlayingState:(long long)a1;
- (void)_notePossiblePlayPausedStateChange:(id)a0;
- (void)initializeMediaPlayingState;
- (long long)mediaPlayingState;
- (void)mediaPlayingStateWithCompletion:(id /* block */)a0;

@end
