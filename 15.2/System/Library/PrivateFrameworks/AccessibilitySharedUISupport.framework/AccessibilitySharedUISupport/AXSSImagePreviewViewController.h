@class UISwipeGestureRecognizer, NSString, UIPinchGestureRecognizer, UIScrollView, UIView, UITapGestureRecognizer;
@protocol AXSSImagePreviewViewControllerDelegate;

@interface AXSSImagePreviewViewController : UIViewController <UIGestureRecognizerDelegate, UIScrollViewDelegate>

@property (retain, nonatomic) UIView *contentSnapshot;
@property (retain, nonatomic) UIScrollView *scrollView;
@property (retain, nonatomic) UIPinchGestureRecognizer *pinchGestureRecognizer;
@property (retain, nonatomic) UITapGestureRecognizer *doubleTapGestureRecognizer;
@property (retain, nonatomic) UISwipeGestureRecognizer *swipeGestureRecognizer;
@property BOOL isManualZoomActive;
@property (weak, nonatomic) id<AXSSImagePreviewViewControllerDelegate> delegate;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } edgeInsets;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)viewForZoomingInScrollView:(id)a0;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewWillLayoutSubviews;
- (void)viewWillDisappear:(BOOL)a0;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (void)scrollViewDidZoom:(id)a0;
- (BOOL)_canShowWhileLocked;
- (void)_addGestureRecognizers;
- (void).cxx_destruct;
- (void)scrollViewDidScroll:(id)a0;
- (void)_removeGestureRecognizers;
- (id)initWithContentSnapshot:(id)a0;
- (BOOL)_isSnapshotViewAttached;
- (void)_fitImageIfNeeded:(BOOL)a0;
- (void)_imagePreviewViewControllerSetupUI;
- (void)_centerImageIfNeeded;
- (void)_viewShouldExpand;
- (void)_toggleManualZoomMode;
- (void)_stopScrollViewAnimations;
- (void)_zoomImageToBestScaleIfNeeded:(BOOL)a0;
- (struct CGSize { double x0; double x1; })_scrollViewClippedSize;
- (void)_zoomImage:(double)a0 withContentOffset:(struct CGPoint { double x0; double x1; })a1 animated:(BOOL)a2;
- (void)_doubleTapGestureRecognized:(id)a0;
- (void)_pinchGestureRecognized:(id)a0;
- (void)_swipeGestureRecognized:(id)a0;

@end
