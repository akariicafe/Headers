@class UIView, NSString, AVSynchronizedLayer, CLKDevice, CLKVideoPlayerView, UIImageView, CALayer, CLKMediaAsset;
@protocol CLKMediaAssetViewDelegate;

@interface CLKMediaAssetView : UIView <CLKVideoPlayerViewDelegate> {
    CLKVideoPlayerView *_videoPlayerView;
    UIImageView *_posterView;
    UIView *_curtainView;
    unsigned char _isVideoLoaded : 1;
    unsigned char _isPlaying : 1;
    id _timeObserver;
    AVSynchronizedLayer *_syncLayer;
    CALayer *_posterLayer;
    long long _preparedForOperation;
    long long _transitionOperation;
}

@property (readonly, nonatomic) CLKDevice *device;
@property (weak, nonatomic) id<CLKMediaAssetViewDelegate> delegate;
@property (readonly, nonatomic) CLKMediaAsset *mediaAsset;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)_reset;
- (void)layoutSubviews;
- (BOOL)isPlaying;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)_mediaServicesWereReset:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)pauseVideoPlayerViewIfItExists;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 forDevice:(id)a1;
- (void)interruptPlayback;
- (void)resumeInterruptedPlayback;
- (void)_createVideoPlayerViewIfNeeded;
- (void)videoPlayerViewDidBeginPlaying:(id)a0;
- (void)videoPlayerViewDidPauseAfterPlayingVideoToEnd:(id)a0;
- (void)videoPlayerViewDidBeginPlayingQueuedVideo:(id)a0;
- (void)changeMediaAsset:(id)a0;
- (void)prepareToPlayWithOperation:(long long)a0;
- (void)playWithOperation:(long long)a0;
- (void)pauseWithOperation:(long long)a0;
- (void)_cancelPlayback;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })_startTimeForOperation:(long long)a0;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })_endTimeForOperation:(long long)a0;
- (void)_completePlaybackWithOperation:(long long)a0;
- (void)_transitionFromPosterToVideo;
- (void)showCurtainView;
- (void)hideCurtainView;
- (void)fadeToCurtainViewWithDuration:(double)a0 completion:(id /* block */)a1;
- (void)fadeFromCurtainViewWithDuration:(double)a0 completion:(id /* block */)a1;

@end
