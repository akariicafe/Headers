@class NSString, PXUIFloatingContentView, UIView, UIViewController;
@protocol PXUISlideshowViewTileDelegate;

@interface PXUISlideshowViewTile : PXUIImageTile <PXUIViewBasicTile> {
    UIView *_containerView;
    PXUIFloatingContentView *_floatingView;
}

@property (retain, nonatomic, setter=_setContentView:) UIView *_contentView;
@property (retain, nonatomic, setter=_setSlideshowSnapshotView:) UIView *_slideshowSnapshotView;
@property (retain, nonatomic) UIViewController *slideshowViewController;
@property (nonatomic, getter=isSlideshowViewHidden) BOOL slideshowViewHidden;
@property (weak, nonatomic) id<PXUISlideshowViewTileDelegate> delegate;
@property (readonly, nonatomic) UIView *view;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_updateSubviewOrdering;
- (void)becomeReusable;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)willAnimateToGeometry:(struct PXTileGeometry { struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x0; struct CGPoint { double x0; double x1; } x1; struct CGSize { double x0; double x1; } x2; struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } x3; double x4; double x5; BOOL x6; struct CGSize { double x0; double x1; } x7; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x8; void *x9; })a0 toUserData:(id)a1 withOptions:(id)a2;
- (void)didAnimateToGeometry:(struct PXTileGeometry { struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x0; struct CGPoint { double x0; double x1; } x1; struct CGSize { double x0; double x1; } x2; struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } x3; double x4; double x5; BOOL x6; struct CGSize { double x0; double x1; } x7; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x8; void *x9; })a0 toUserData:(id)a1 withOptions:(id)a2;
- (void)didApplyGeometry:(struct PXTileGeometry { struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x0; struct CGPoint { double x0; double x1; } x1; struct CGSize { double x0; double x1; } x2; struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } x3; double x4; double x5; BOOL x6; struct CGSize { double x0; double x1; } x7; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x8; void *x9; })a0 withUserData:(id)a1;
- (void)_updateContentViewFrame;
- (void)_updateContentViewVisibility;

@end
