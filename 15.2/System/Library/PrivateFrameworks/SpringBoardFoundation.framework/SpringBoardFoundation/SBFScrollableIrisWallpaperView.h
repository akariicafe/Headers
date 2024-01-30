@class NSString, AVAsset, NSURL, SBFLivePhotoPlayerView;
@protocol SBFIrisWallpaperPlayerDelegate;

@interface SBFScrollableIrisWallpaperView : SBFScrollableStaticWallpaperView <UIGestureRecognizerDelegate, SBFLivePhotoPlayerViewDelegate, SBFIrisWallpaperView> {
    AVAsset *_video;
    SBFLivePhotoPlayerView *_playerView;
    long long _playbackState;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSURL *videoFileURL;
@property (readonly, nonatomic) double stillTimeInVideo;
@property (weak, nonatomic) id<SBFIrisWallpaperPlayerDelegate> irisDelegate;
@property (readonly, nonatomic) long long irisPlaybackState;
@property (readonly, nonatomic) BOOL isIrisInteracting;

- (void)playerViewPlaybackStateDidChange:(id)a0;
- (void)playerViewIsInteractingDidChange:(id)a0;
- (id)_newImageView;
- (id)irisGestureRecognizer;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 configuration:(id)a1 wallpaperVideo:(id)a2 variant:(long long)a3;

@end
