@class NSString, QLPreviewScrollView, UIView, UITapGestureRecognizer;

@interface QLScrollableContentItemViewController : QLItemViewController <QLPreviewScrollViewZoomDelegate> {
    QLPreviewScrollView *_scrollView;
    UITapGestureRecognizer *_doubleTapGesture;
    BOOL _isVisible;
}

@property (retain, nonatomic) UIView *contentView;
@property (nonatomic) BOOL shouldFit;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (struct CGSize { double x0; double x1; })imageSize;
- (id)scrollView;
- (id)init;
- (void).cxx_destruct;
- (void)loadView;
- (void)didEndZoomingAtScale:(double)a0;
- (void)willBeginZooming;
- (id)parallaxView;
- (BOOL)supportsScrollingUpAndDownUsingKeyCommands;
- (BOOL)canPinchToDismiss;
- (BOOL)previewScrollViewShouldResizeContentBasedOnPeripheryInsets:(id)a0;
- (double)previewScrollView:(id)a0 extraMinimumZoomForMinimumZoomScale:(double)a1 maximumZoomScale:(double)a2;
- (void)previewScrollViewWillBeginZooming:(id)a0;
- (void)previewScrollView:(id)a0 didEndZoomingAtScale:(double)a1;
- (void)transitionWillFinish:(BOOL)a0 didComplete:(BOOL)a1;
- (void)setAppearance:(id)a0 animated:(BOOL)a1;
- (void)previewWillAppear:(BOOL)a0;
- (void)previewDidAppear:(BOOL)a0;
- (void)previewDidDisappear:(BOOL)a0;
- (void)_doubleTapRecognized:(id)a0;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)_updateScrollViewZoomUpdate:(struct CGSize { double x0; double x1; })a0;
- (BOOL)shouldLayoutContentBasedOnPeripheryInsets;

@end
