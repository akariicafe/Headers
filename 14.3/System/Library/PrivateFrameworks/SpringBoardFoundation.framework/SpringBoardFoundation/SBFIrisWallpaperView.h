@class NSString, UIImageView, NSURL, ISAVPlayer, UIGestureRecognizer, ISPlayerView;
@protocol SBFIrisWallpaperViewDelegate;

@interface SBFIrisWallpaperView : SBFStaticWallpaperView <ISPlayerViewDelegatePrivate, SBFIrisWallpaperView> {
    UIImageView *_imageView;
    BOOL _useRewindPlaybackStyle;
    ISAVPlayer *_prewiredAVPlayer;
    struct CGSize { double width; double height; } _prewiredSize;
    ISPlayerView *_playerView;
    long long _playerState;
    long long _playbackState;
    BOOL _isInteracting;
    UIGestureRecognizer *_playerGestureRecognizer;
}

@property (readonly, nonatomic) long long currentIrisMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<SBFIrisWallpaperViewDelegate> irisDelegate;
@property (readonly, nonatomic) long long irisPlaybackState;
@property (readonly, nonatomic) BOOL isIrisInteracting;
@property (readonly, copy, nonatomic) NSURL *videoFileURL;
@property (readonly, nonatomic) double stillTimeInVideo;

+ (void)initialize;

- (void)_setImage:(id)a0;
- (void)_setupContentViewWithOptions:(unsigned long long)a0;
- (void).cxx_destruct;
- (long long)wallpaperType;
- (void)_resetPrewiredAVPlayer;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 configuration:(id)a1 variant:(long long)a2 cacheGroup:(id)a3 delegate:(id)a4 options:(unsigned long long)a5;
- (void)switchToIrisMode:(long long)a0;
- (void)_populateContentView;
- (id)irisGestureRecognizer;
- (void)playerViewPlaybackStateDidChange:(id)a0;
- (id)videoPlayerForPlayerView:(id)a0;
- (void)playerViewGestureRecognizerDidChange:(id)a0;
- (BOOL)_setupContentViewForMode:(long long)a0;
- (void)_setPlayerGestureRecognizer:(id)a0;
- (void)playerViewIsInteractingDidChange:(id)a0;

@end
