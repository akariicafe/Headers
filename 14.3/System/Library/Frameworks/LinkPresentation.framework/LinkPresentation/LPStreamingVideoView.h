@class AVPlayerLayer, AVPlayerLooper, AVQueuePlayer;

@interface LPStreamingVideoView : LPVideoView {
    AVQueuePlayer *_player;
    AVPlayerLooper *_looper;
    AVPlayerLayer *_playerLayer;
    id /* block */ _readyForDisplayCallback;
    BOOL _hasCreatedVideoPlayerView;
    BOOL _isWaitingToRetryAfterFailingToPlay;
    unsigned int _playbackRetryCountWithoutSuccess;
    BOOL _desiredPlayingState;
    float _desiredVolume;
}

- (void)setMuted:(BOOL)a0;
- (double)volume;
- (void)setVolume:(double)a0;
- (BOOL)isMuted;
- (void).cxx_destruct;
- (void)dealloc;
- (BOOL)shouldAutoPlay;
- (void)setPlaying:(BOOL)a0;
- (id)initWithVideo:(id)a0 style:(id)a1 posterFrame:(id)a2 posterFrameStyle:(id)a3 configuration:(id)a4;
- (void)destroyPlayer;
- (void)createPlayerItemAdjustedForLoopingWithAsset:(id)a0 completionHandler:(id /* block */)a1;
- (void)resetToPlaceholderView;
- (void)didFailToPlay;
- (void)createPlayerIfNeeded;
- (void)layoutComponentView;
- (void)fullScreenVideoDidPresent;
- (void)fullScreenVideoWillDismiss;
- (void)beginLoadingMediaForPreroll;
- (BOOL)releaseDecodingResourcesIfInactive;
- (BOOL)usesSharedAudioSession;
- (BOOL)shouldShowMuteButton;
- (id)createFullScreenVideoViewController;
- (id)createVideoPlayerView;
- (BOOL)usesCustomFullScreenImplementation;
- (void)prepareForDisplayWithCompletionHandler:(id /* block */)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;

@end
