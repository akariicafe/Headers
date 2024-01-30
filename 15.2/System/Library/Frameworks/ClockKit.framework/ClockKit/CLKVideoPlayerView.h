@class NSValue, AVPlayerItem, AVQueuePlayer, NSURL, _CLKPlayerView, AVAsset, UIView;
@protocol CLKVideoPlayerViewDelegate;

@interface CLKVideoPlayerView : UIView {
    _CLKPlayerView *_playerView;
    AVQueuePlayer *_player;
    AVPlayerItem *_playerItem;
    AVPlayerItem *_observedItem;
    AVPlayerItem *_queuedItem;
    NSURL *_assetURL;
    AVAsset *_asset;
    id _periodicTimeObserver;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _willBeginPlayingTime;
    UIView *_pausedView;
    unsigned long long _servicingRequest;
    NSValue *_seekRequested;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _seekWithTolerance;
    unsigned char _playRequested : 1;
    unsigned char _prerollRequested : 1;
    unsigned char _isExpectingPreroll : 1;
}

@property (weak, nonatomic) id<CLKVideoPlayerViewDelegate> delegate;
@property (readonly, nonatomic) AVQueuePlayer *player;
@property (nonatomic) long long gravityResize;
@property (nonatomic) BOOL pausedViewEnabled;
@property (readonly, nonatomic) BOOL playing;

+ (void)_prewarm;

- (void)layoutSubviews;
- (void)_play;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)seekToTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (void)pause;
- (void)_pause;
- (void)play;
- (void)preroll;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)dealloc;
- (void)_seekToTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (void)_performNextRequest;
- (void)loadVideo:(id)a0;
- (void)resetRequestState;
- (void)expectPreroll;
- (BOOL)isPlaybackReady;
- (void)queueVideo:(id)a0;
- (void)_periodicTimeObserverChanged:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (void)_handleDidPlayToEndTime:(id)a0;
- (void)_stopObservingPlayerItem;
- (void)_observePlayerItem:(id)a0;
- (void)_hidePausedView;
- (BOOL)_readyToPerformRequest;
- (void)_preroll;
- (id)_createPlayerItemForVideoURL:(id)a0;
- (void)_showPausedView;
- (void)seekToTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 tolerance:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (void)prepareNextQueuedVideo;

@end
