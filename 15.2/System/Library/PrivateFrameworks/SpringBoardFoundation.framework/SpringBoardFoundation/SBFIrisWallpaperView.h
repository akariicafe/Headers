@class NSMutableSet, NSString, UIImageView, NSURL, ISAVPlayer, SBFLivePhotoPlayerView, UIGestureRecognizer;
@protocol SBFIrisWallpaperPlayerDelegate;

@interface SBFIrisWallpaperView : SBFStaticWallpaperView <SBFLivePhotoPlayerViewDelegate, SBFIrisWallpaperView> {
    UIImageView *_imageView;
    BOOL _useRewindPlaybackStyle;
    ISAVPlayer *_prewiredAVPlayer;
    struct CGSize { double width; double height; } _prewiredSize;
    SBFLivePhotoPlayerView *_playerView;
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
@property (readonly, copy, nonatomic) NSURL *videoFileURL;
@property (readonly, nonatomic) double stillTimeInVideo;
@property (weak, nonatomic) id<SBFIrisWallpaperPlayerDelegate> irisDelegate;
@property (readonly, nonatomic) long long irisPlaybackState;
@property (readonly, nonatomic) BOOL isIrisInteracting;

- (void)_setupContentViewWithOptions:(unsigned long long)a0;
- (void)playerViewPlaybackStateDidChange:(id)a0;
- (long long)wallpaperType;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 configuration:(id)a1 variant:(long long)a2 cacheGroup:(id)a3 delegate:(id)a4 options:(unsigned long long)a5;
- (void)playerViewIsInteractingDidChange:(id)a0;
- (id)videoPlayerForPlayerView:(id)a0;
- (id)irisGestureRecognizer;
- (void)_resetPrewiredAVPlayer;
- (void)endSimulatedTouchWithReason:(id)a0;
- (id)_playbackReasonForSimulatedTouchReason:(id)a0;
- (void)beginSimulatedTouchWithReason:(id)a0;
- (void)switchToIrisMode:(long long)a0;
- (void)_populateContentView;
- (void).cxx_destruct;
- (void)_setPlayerGestureRecognizer:(id)a0;
- (BOOL)_setupContentViewForMode:(long long)a0;
- (void)dealloc;
- (void)_setImage:(id)a0;

@end
