@class AVPlayerViewController, NSString, _MPMoviePlayerProxyView, NSURL, UIView;

@interface MPMoviePlayerController : NSObject <AVPlayerViewControllerDelegatePrivate, MPMediaPlayback> {
    _MPMoviePlayerProxyView *_proxyView;
    UIView *_backgroundView;
    BOOL _useApplicationAudioSession;
    BOOL _isFullscreen;
}

@property (readonly, nonatomic) AVPlayerViewController *playerViewController;
@property (copy, nonatomic) NSURL *contentURL;
@property (readonly, nonatomic) UIView *view;
@property (readonly, nonatomic) UIView *backgroundView;
@property (readonly, nonatomic) long long playbackState;
@property (readonly, nonatomic) unsigned long long loadState;
@property (nonatomic) long long controlStyle;
@property (nonatomic) long long repeatMode;
@property (nonatomic) BOOL shouldAutoplay;
@property (nonatomic, getter=isFullscreen) BOOL fullscreen;
@property (nonatomic) long long scalingMode;
@property (readonly, nonatomic) BOOL readyForDisplay;
@property (readonly, nonatomic) unsigned long long movieMediaTypes;
@property (nonatomic) long long movieSourceType;
@property (readonly, nonatomic) double duration;
@property (readonly, nonatomic) double playableDuration;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } naturalSize;
@property (nonatomic) double initialPlaybackTime;
@property (nonatomic) double endPlaybackTime;
@property (nonatomic) BOOL allowsAirPlay;
@property (readonly, nonatomic, getter=isAirPlayVideoActive) BOOL airPlayVideoActive;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL isPreparedToPlay;
@property (nonatomic) double currentPlaybackTime;
@property (nonatomic) float currentPlaybackRate;

- (void)play;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)stop;
- (id)errorLog;
- (id)accessLog;
- (void)pause;
- (void)endSeeking;
- (void)prepareToPlay;
- (void)beginSeekingForward;
- (void)beginSeekingBackward;
- (void)playerViewController:(id)a0 willBeginFullScreenPresentationWithAnimationCoordinator:(id)a1;
- (id)initWithContentURL:(id)a0;
- (void)playerViewController:(id)a0 willEndFullScreenPresentationWithAnimationCoordinator:(id)a1;
- (void)setFullscreen:(BOOL)a0 animated:(BOOL)a1;
- (id)thumbnailImageAtTime:(double)a0 timeOption:(long long)a1;
- (void)requestThumbnailImagesAtTimes:(id)a0 timeOption:(long long)a1;
- (void)cancelAllThumbnailImageRequests;
- (id)timedMetadata;
- (BOOL)useApplicationAudioSession;
- (void)setUseApplicationAudioSession:(BOOL)a0;
- (id)_advertisementView;
- (id)_videoViewController;
- (void)_avPlayerItemDidPlayToEndNotification:(id)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;

@end
