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
@property (readonly, nonatomic) UIImage *imageForAnalysis;
@property (readonly, nonatomic) NSDictionary *clientPreviewOptions;

- (struct CGSize { double x0; double x1; })imageSize;
- (BOOL)livePhotoView:(id)a0 canBeginPlaybackWithStyle:(long long)a1;
- (double)livePhotoView:(id)a0 extraMinimumTouchDurationForTouch:(id)a1 withStyle:(long long)a2;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)livePhotoView:(id)a0 willBeginPlaybackWithStyle:(long long)a1;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (long long)preferredWhitePointAdaptivityStyle;
- (id)presentingViewControllerForImageAnalysisInteraction:(id)a0;
- (void)livePhotoView:(id)a0 didEndPlaybackWithStyle:(long long)a1;
- (void)traitCollectionDidChange:(id)a0;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (void).cxx_destruct;
- (void)didScroll:(id)a0;
- (void)didZoom:(id)a0;
- (void)buttonPressedWithIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)canEnterFullScreen;
- (BOOL)canPerformFirstTimeAppearanceActions:(unsigned long long)a0;
- (BOOL)canToggleFullScreen;
- (void)loadPreviewControllerWithContents:(id)a0 context:(id)a1 completionHandler:(id /* block */)a2;
- (void)performFirstTimeAppearanceActions:(unsigned long long)a0;
- (void)previewBecameFullScreen:(BOOL)a0 animated:(BOOL)a1;
- (void)previewDidAppear:(BOOL)a0;
- (void)previewDidDisappear:(BOOL)a0;
- (void)previewWillAppear:(BOOL)a0;
- (void)previewWillDisappear:(BOOL)a0;
- (void)previewWillFinishAppearing;
- (void)setAppearance:(id)a0 animated:(BOOL)a1;
- (BOOL)shouldAcceptTouch:(id)a0 ofGestureRecognizer:(id)a1;
- (id)toolbarButtonsForTraitCollection:(id)a0;
- (void)transitionDidFinish:(BOOL)a0 didComplete:(BOOL)a1;
- (void)transitionDidStart:(BOOL)a0;
- (BOOL)_isPointInNonImageSubjectItems:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)_wasJustPlaying;
- (void)_setupAndStartImageAnalysisIfNeeded;
- (void)_updateAnalysisButtonsContainerConstraints;
- (void)_updateImageAnalysisInteractionAnimated:(BOOL)a0;
- (void)_updateLivePhotoBadgeAnimated:(BOOL)a0;
- (void)adjustImageInteractionForScrollEvent:(id)a0;
- (void)didEndZoomingAtScale:(double)a0;
- (void)imageAnalysisInteractionDidDismissVisualSearchController;
- (void)imageAnalysisInteractionWillPresentVisualSearchController;
- (void)imageAnalyzerWantsUpdateInfoButtonWithAnimation:(BOOL)a0;
- (void)imageAnalyzerWantsUpdateOverlayViews;
- (void)willBeginZooming;

@end
