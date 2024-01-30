@class NSString, UIView;
@protocol NTKCCenteringScrollViewDelegate;

@interface NTKCCenteringScrollView : UIScrollView <UIScrollViewDelegate> {
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _originalCrop;
    struct UIEdgeInsets { double top; double left; double bottom; double right; } _minimumDisplayInsets;
}

@property (weak, nonatomic) id<NTKCCenteringScrollViewDelegate> ntk_delegate;
@property (retain, nonatomic) UIView *centeredView;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } cropRect;
@property (readonly, nonatomic) double cropRectCushion;
@property (nonatomic) struct CGSize { double width; double height; } minimumDisplaySize;
@property (nonatomic) double maximumZoomRatio;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)scrollViewDidEndDecelerating:(id)a0;
- (void)scrollViewDidEndZooming:(id)a0 withView:(id)a1 atScale:(double)a2;
- (id)viewForZoomingInScrollView:(id)a0;
- (void)safeAreaInsetsDidChange;
- (void)scrollViewDidScroll:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)scrollViewWillBeginZooming:(id)a0 withView:(id)a1;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void).cxx_destruct;
- (void)_updateInsets;
- (void)_centerOnCrop;
- (void)_updateCrop;
- (void)_updateZoomScales;
- (void)setMinimumDisplaySize:(struct CGSize { double x0; double x1; })a0 withCropRectCushion:(double)a1;

@end
