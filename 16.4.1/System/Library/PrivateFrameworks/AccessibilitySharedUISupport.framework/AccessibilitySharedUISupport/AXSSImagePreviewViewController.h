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

- (BOOL)_canShowWhileLocked;
- (id)viewForZoomingInScrollView:(id)a0;
- (void)scrollViewDidScroll:(id)a0;
- (void)_removeGestureRecognizers;
- (void)viewDidLoad;
- (void)viewWillDisappear:(BOOL)a0;
- (void)viewWillLayoutSubviews;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (void).cxx_destruct;
- (void)_addGestureRecognizers;
- (void)scrollViewDidZoom:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)_centerImageIfNeeded;
- (void)_doubleTapGestureRecognized:(id)a0;
- (void)_fitImageIfNeeded:(BOOL)a0;
- (void)_imagePreviewViewControllerSetupUI;
- (BOOL)_isSnapshotViewAttached;
- (void)_pinchGestureRecognized:(id)a0;
- (struct CGSize { double x0; double x1; })_scrollViewClippedSize;
- (void)_stopScrollViewAnimations;
- (void)_swipeGestureRecognized:(id)a0;
- (void)_toggleManualZoomMode;
- (void)_viewShouldExpand;
- (void)_zoomImage:(double)a0 withContentOffset:(struct CGPoint { double x0; double x1; })a1 animated:(BOOL)a2;
- (void)_zoomImageToBestScaleIfNeeded:(BOOL)a0;
- (id)initWithContentSnapshot:(id)a0;

@end
