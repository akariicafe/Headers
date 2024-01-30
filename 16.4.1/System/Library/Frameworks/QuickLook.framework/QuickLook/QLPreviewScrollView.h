@class NSString;
@protocol QLPreviewScrollViewZoomDelegate;

@interface QLPreviewScrollView : UIScrollView <UIScrollViewDelegate> {
    BOOL _inSizeChange;
    struct CGSize { double width; double height; } _lastUpdatedSize;
    BOOL _readyToCancelPanGesture;
}

@property (nonatomic) BOOL needsZoomUpdate;
@property (nonatomic) struct CGSize { double width; double height; } contentViewSize;
@property (readonly) double minZoomScale;
@property (readonly) double maxZoomScale;
@property (readonly) double pinchMaxZoomScale;
@property (readonly) double fillZoomScale;
@property (readonly) double fitZoomScale;
@property (readonly) double contentIsSmallerThanView;
@property (weak) id<QLPreviewScrollViewZoomDelegate> zoomDelegate;
@property (nonatomic) BOOL preventZoomUpdate;
@property BOOL shouldFit;
@property struct UIEdgeInsets { double top; double left; double bottom; double right; } peripheryInsetsLandscape;
@property struct UIEdgeInsets { double top; double left; double bottom; double right; } peripheryInsetsPortrait;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)scrollViewDidEndZooming:(id)a0 withView:(id)a1 atScale:(double)a2;
- (id)viewForZoomingInScrollView:(id)a0;
- (void)scrollViewDidScroll:(id)a0;
- (void)scrollViewWillBeginZooming:(id)a0 withView:(id)a1;
- (void)layoutSubviews;
- (id)init;
- (void).cxx_destruct;
- (void)scrollViewDidZoom:(id)a0;
- (void)updateZoomScales;
- (void)resetZoomScale;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })zoomRectForScale:(double)a0 withCenter:(struct CGPoint { double x0; double x1; })a1;
- (double)_maxZoomScaleForContentSize:(struct CGSize { double x0; double x1; })a0;
- (void)_updateScrollViewZomming;
- (void)updateZoomScalesWithSize:(struct CGSize { double x0; double x1; })a0;

@end
