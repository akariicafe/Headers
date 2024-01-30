@class NSString, PHLivePhotoView, UIImageView, NSLayoutConstraint, NSDate;

@interface QLLivePhotoItemViewController : QLScrollableContentItemViewController <PHLivePhotoViewDelegate, UIGestureRecognizerDelegate> {
    struct CGSize { double width; double height; } _imageSize;
    PHLivePhotoView *_livePhotoView;
    UIImageView *_livePhotoBadge;
    NSLayoutConstraint *_livePhotoBadgeLeftConstraint;
    NSLayoutConstraint *_livePhotoBadgeTopConstraint;
    NSDate *_didEndPlayingTimestamp;
    BOOL _isPlaying;
    BOOL _livePhotoBadgeVisible;
    BOOL _isFullScreen;
    BOOL _fullyZoomedOut;
    BOOL _transitionInProgress;
    BOOL _shouldPlayHint;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (struct CGSize { double x0; double x1; })imageSize;
- (long long)preferredWhitePointAdaptivityStyle;
- (void).cxx_destruct;
- (void)previewBecameFullScreen:(BOOL)a0 animated:(BOOL)a1;
- (void)_updateLivePhotoBadgeAnimated:(BOOL)a0;
- (BOOL)_wasJustPlaying;
- (void)didEndZoomingAtScale:(double)a0;
- (void)willBeginZooming;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (void)loadPreviewControllerWithContents:(id)a0 context:(id)a1 completionHandler:(id /* block */)a2;
- (BOOL)canEnterFullScreen;
- (void)livePhotoView:(id)a0 willBeginPlaybackWithStyle:(long long)a1;
- (void)livePhotoView:(id)a0 didEndPlaybackWithStyle:(long long)a1;
- (void)transitionDidFinish:(BOOL)a0 didComplete:(BOOL)a1;
- (void)transitionDidStart:(BOOL)a0;
- (void)setAppearance:(id)a0 animated:(BOOL)a1;
- (BOOL)canToggleFullScreen;
- (void)previewWillFinishAppearing;
- (void)previewWillAppear:(BOOL)a0;
- (void)previewDidAppear:(BOOL)a0;
- (void)previewDidDisappear:(BOOL)a0;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;

@end
