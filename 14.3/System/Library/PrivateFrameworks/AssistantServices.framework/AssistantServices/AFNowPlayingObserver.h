@class NSHashTable, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_group;

@interface AFNowPlayingObserver : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_group> *_playbackStateGroup;
    long long _playbackStateGroupDepth;
    long long _playbackState;
    NSHashTable *_listeners;
    BOOL _isObserving;
}

@property (readonly, nonatomic) long long playbackState;

+ (id)defaultObserver;

- (void)_endGroup;
- (id)initWithQueue:(id)a0;
- (void).cxx_destruct;
- (void)_startObservingNowPlayingAppPlaybackState;
- (void)getPlaybackStateWithCompletion:(id /* block */)a0;
- (void)nowPlayingInfoDidChange:(id)a0;
- (void)dealloc;
- (void)removeListener:(id)a0;
- (void)_beginGroup;
- (void)getNowPlayingInfoWithCompletion:(id /* block */)a0;
- (void)addListener:(id)a0;
- (void)nowPlayingApplicationPlaybackStateChanged:(id)a0;
- (void)_handleNowPlayingApplicationPlaybackStateChange:(long long)a0;
- (void)_fetchNowPlayingAppPlaybackStateForReason:(id)a0 completion:(id /* block */)a1;
- (void)_stopObservingNowPlayingAppPlaybackState;

@end
