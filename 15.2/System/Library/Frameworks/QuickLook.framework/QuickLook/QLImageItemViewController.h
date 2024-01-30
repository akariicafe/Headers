@class UIView, NSString, UIImage, UIImageView, NSDictionary, QLAnimatedImage, NSLayoutConstraint, QLImageAnalysisManager, NSNumber;

@interface QLImageItemViewController : QLScrollableContentItemViewController <QLAnimationTimerObserver, UIAdaptivePresentationControllerDelegate, QLImageAnalysisManagerDelegate> {
    UIImageView *_imageView;
    QLAnimatedImage *_animatedImage;
    QLImageAnalysisManager *_imageAnalysisManager;
    double _initialTimeStamp;
    double _currentPlaybackTime;
    struct CGSize { double width; double height; } _imageSize;
    BOOL _imageIsAnimated;
    BOOL _isFullScreen;
    NSNumber *_savedFullScreenState;
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
- (void)presentationControllerDidDismiss:(id)a0;
- (id)draggableView;
- (void)didZoom:(id)a0;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)a0;
- (void)didScroll:(id)a0;
- (void)animationTimerFired:(double)a0;
- (struct CGSize { double x0; double x1; })imageSize;
- (void)loadPreviewControllerWithContents:(id)a0 context:(id)a1 completionHandler:(id /* block */)a2;
- (void)setAppearance:(id)a0 animated:(BOOL)a1;
- (void)previewDidAppear:(BOOL)a0;
- (void)previewDidDisappear:(BOOL)a0;
- (void)previewBecameFullScreen:(BOOL)a0 animated:(BOOL)a1;
- (BOOL)shouldAcceptTouch:(id)a0 ofGestureRecognizer:(id)a1;
- (void)buttonPressedWithIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (id)toolbarButtonsForTraitCollection:(id)a0;
- (BOOL)canPerformFirstTimeAppearanceActions:(unsigned long long)a0;
- (void)performFirstTimeAppearanceActions:(unsigned long long)a0;
- (BOOL)draggableViewShouldStartDragSession:(id)a0;
- (void)_setupAndStartImageAnalysis;
- (void)_updateAnalysisButtonsContainerConstraints;
- (void)adjustImageInteractionForScrollEvent:(id)a0;
- (void)imageAnalyzerWantsUpdateInfoButtonWithAnimation:(BOOL)a0;
- (void)imageAnalysisInteractionWillPresentVisualSearchController;
- (void)imageAnalysisInteractionDidDismissVisualSearchController;

@end
