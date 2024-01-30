@class NSString, UIView;

@interface PXSelectionBadgeUIViewTile : UIView <PXReusableObject, PXUIViewBasicTile> {
    BOOL _needsUpdate;
    UIView *_selectedView;
    UIView *_unselectedView;
}

@property (nonatomic, setter=_setSelected:) BOOL _selected;
@property (readonly, nonatomic) UIView *view;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct CGSize { double x0; double x1; })preferredSize;

- (void).cxx_destruct;
- (void)_showSelectedView;
- (void)_showUnselectedView;
- (void)_updateBadgeViewIfNeeded;
- (void)prepareForReuse;
- (void)becomeReusable;
- (void)_invalidate;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)didApplyGeometry:(struct PXTileGeometry { struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x0; struct CGPoint { double x0; double x1; } x1; struct CGSize { double x0; double x1; } x2; struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } x3; double x4; double x5; BOOL x6; struct CGSize { double x0; double x1; } x7; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x8; void *x9; })a0 withUserData:(id)a1;

@end
