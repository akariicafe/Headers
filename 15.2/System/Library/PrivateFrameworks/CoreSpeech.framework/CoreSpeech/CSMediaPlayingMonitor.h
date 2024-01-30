@class NSObject;
@protocol OS_dispatch_queue;

@interface CSMediaPlayingMonitor : CSEventMonitor {
    long long _mediaIsPlaying;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (id)sharedInstance;

- (void)_startMonitoringWithQueue:(id)a0;
- (void)_notifyObserver:(id)a0 mediaIsPlayingState:(long long)a1;
- (long long)mediaPlayingState;
- (void)_stopMonitoring;
- (void)initializeMediaPlayingState;
- (void).cxx_destruct;
- (id)init;
- (void)_notePossiblePlayPausedStateChange:(id)a0;
- (void)mediaPlayingStateWithCompletion:(id /* block */)a0;

@end
