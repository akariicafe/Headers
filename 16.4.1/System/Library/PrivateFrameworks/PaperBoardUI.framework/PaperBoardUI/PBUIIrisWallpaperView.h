@class NSMutableSet, NSString, UIImageView, NSURL, ISAVPlayer, UIGestureRecognizer, PBUILivePhotoPlayerView;
@protocol PBUIIrisWallpaperPlayerDelegate;

@interface PBUIIrisWallpaperView : PBUIStaticWallpaperView <PBUILivePhotoPlayerViewDelegate, PBUIIrisWallpaperPlaying> {
    UIImageView *_imageView;
    BOOL _useRewindPlaybackStyle;
    ISAVPlayer *_prewiredAVPlayer;
    struct CGSize { double width; double height; } _prewiredSize;
    PBUILivePhotoPlayerView *_playerView;
    long long _playerState;
    long long _playbackState;
    BOOL _isInteracting;
    UIGestureRecognizer *_playerGestureRecognizer;
    NSMutableSet *_simulatedTouchReasons;
}

@property (readonly, nonatomic) long long currentIrisMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<PBUIIrisWallpaperPlayerDelegate> irisDelegate;
@property (readonly, nonatomic) long long irisPlaybackState;
@property (readonly, nonatomic) BOOL isIrisInteracting;
@property (readonly, nonatomic) double stillTimeInVideo;
@property (readonly, nonatomic) UIGestureRecognizer *irisGestureRecognizer;
@property (readonly, copy, nonatomic) NSURL *videoFileURL;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 configuration:(id)a1 variant:(long long)a2 cacheGroup:(id)a3 delegate:(id)a4 options:(unsigned long long)a5;
- (id)videoPlayerForPlayerView:(id)a0;
- (void)_setupContentViewWithOptions:(unsigned long long)a0;
- (id)_playbackReasonForSimulatedTouchReason:(id)a0;
- (BOOL)_setupContentViewForMode:(long long)a0;
- (long long)wallpaperType;
- (void)switchToIrisMode:(long long)a0;
- (void)beginSimulatedTouchWithReason:(id)a0;
- (void)_setPlayerGestureRecognizer:(id)a0;
- (void)playerViewIsInteractingDidChange:(id)a0;
- (void)_populateContentView;
- (void)_setImage:(id)a0;
- (void)playerViewPlaybackStateDidChange:(id)a0;
- (void)endSimulatedTouchWithReason:(id)a0;
- (void)dealloc;
- (void).cxx_destruct;
- (void)_resetPrewiredAVPlayer;

@end
