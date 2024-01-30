@class UIView, NSString, UIImage, NSDate, UIImageView, NSDictionary, PHLivePhotoView, NSLayoutConstraint, NSNumber, QLImageAnalysisManager;

@interface QLLivePhotoItemViewController : QLScrollableContentItemViewController <PHLivePhotoViewDelegate, UIGestureRecognizerDelegate, QLImageAnalysisManagerDelegate> {
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
    NSNumber *_savedFullScreenState;
    BOOL _shouldPlayHint;
    QLImageAnalysisManager *_imageAnalysisManager;
    UIView *_analysisButtonContainer;
    NSLayoutConstraint *_analysisButtonContainerRightConstraint;
    NSLayoutConstraint *_analysisButtonContainerBottomConstraint;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) UIView *imageAnalysisView;
@property (readonly, nonatomic) UIImage *image;
@property (readonly, nonatomic) NSDictionary *clientPreviewOptions;

- (long long)preferredWhitePointAdaptivityStyle;
- (void)livePhotoView:(id)a0 didEndPlaybackWithStyle:(long long)a1;
- (void)livePhotoView:(id)a0 willBeginPlaybackWithStyle:(long long)a1;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (void)didZoom:(id)a0;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)a0;
- (void)didScroll:(id)a0;
- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (struct CGSize { double x0; double x1; })imageSize;
- (void)loadPreviewControllerWithContents:(id)a0 context:(id)a1 completionHandler:(id /* block */)a2;
- (BOOL)canEnterFullScreen;
- (void)setAppearance:(id)a0 animated:(BOOL)a1;
- (void)transitionDidFinish:(BOOL)a0 didComplete:(BOOL)a1;
- (void)transitionDidStart:(BOOL)a0;
- (void)previewWillAppear:(BOOL)a0;
- (void)previewDidAppear:(BOOL)a0;
- (void)previewDidDisappear:(BOOL)a0;
- (void)previewBecameFullScreen:(BOOL)a0 animated:(BOOL)a1;
- (BOOL)shouldAcceptTouch:(id)a0 ofGestureRecognizer:(id)a1;
- (void)buttonPressedWithIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)canToggleFullScreen;
- (void)previewWillFinishAppearing;
- (id)toolbarButtonsForTraitCollection:(id)a0;
- (BOOL)canPerformFirstTimeAppearanceActions:(unsigned long long)a0;
- (void)performFirstTimeAppearanceActions:(unsigned long long)a0;
- (void)_updateLivePhotoBadgeAnimated:(BOOL)a0;
- (void)_updateImageAnalysisInteractionAnimated:(BOOL)a0;
- (void)_setupAndStartImageAnalysis;
- (void)_updateAnalysisButtonsContainerConstraints;
- (BOOL)_wasJustPlaying;
- (void)adjustImageInteractionForScrollEvent:(id)a0;
- (void)imageAnalyzerWantsUpdateInfoButtonWithAnimation:(BOOL)a0;
- (void)imageAnalysisInteractionWillPresentVisualSearchController;
- (void)imageAnalysisInteractionDidDismissVisualSearchController;
- (void)didEndZoomingAtScale:(double)a0;
- (void)willBeginZooming;

@end
