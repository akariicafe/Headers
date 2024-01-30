@class NSString, AVAsset, NSURL, ISPlayerView;
@protocol SBFIrisWallpaperViewDelegate;

@interface SBFScrollableIrisWallpaperView : SBFScrollableStaticWallpaperView <UIGestureRecognizerDelegate, ISPlayerViewDelegate, SBFIrisWallpaperView> {
    AVAsset *_video;
    ISPlayerView *_playerView;
    long long _playbackState;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<SBFIrisWallpaperViewDelegate> irisDelegate;
@property (readonly, nonatomic) long long irisPlaybackState;
@property (readonly, nonatomic) BOOL isIrisInteracting;
@property (readonly, copy, nonatomic) NSURL *videoFileURL;
@property (readonly, nonatomic) double stillTimeInVideo;

- (id)_newImageView;
- (void).cxx_destruct;
- (void)dealloc;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (id)irisGestureRecognizer;
- (void)playerViewPlaybackStateDidChange:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 configuration:(id)a1 wallpaperVideo:(id)a2 variant:(long long)a3;
- (void)playerViewIsInteractingDidChange:(id)a0;

@end
