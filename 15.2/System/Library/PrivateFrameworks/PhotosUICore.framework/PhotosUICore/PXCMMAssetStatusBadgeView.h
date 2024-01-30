@class NSString, UIView;

@interface PXCMMAssetStatusBadgeView : UIView <PXUIViewBasicTile, PXReusableObject> {
    struct { BOOL imageView; } _needsUpdateFlags;
}

@property (nonatomic) long long status;
@property (retain, nonatomic) UIView *glyphView;
@property (readonly, nonatomic) UIView *view;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct CGSize { double x0; double x1; })preferredSize;

- (void)_updateImageViewIfNeeded;
- (void)_invalidateImageView;
- (void)becomeReusable;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)didApplyGeometry:(struct PXTileGeometry { struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x0; struct CGPoint { double x0; double x1; } x1; struct CGSize { double x0; double x1; } x2; struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } x3; double x4; double x5; BOOL x6; struct CGSize { double x0; double x1; } x7; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x8; void *x9; })a0 withUserData:(id)a1;

@end
