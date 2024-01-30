@class NSString, PXUIAssetBadgeView, PXImageRequester, UIView, PXAssetBadgeManager;

@interface PXOverlayBadgeUIViewTile : UIView <PXChangeObserver, PXReusableObject, PXOverlayBadgeTile, PXUIViewBasicTile> {
    struct { BOOL badgeView; } _needsUpdateFlags;
}

@property (nonatomic, setter=_setBadgeOptions:) unsigned long long _badgeOptions;
@property (readonly, nonatomic) PXUIAssetBadgeView *_badgeView;
@property (retain, nonatomic) PXImageRequester *imageRequester;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) PXAssetBadgeManager *badgeManager;
@property (readonly, nonatomic) UIView *view;

+ (void)preloadResources;

- (void)becomeReusable;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (void)_updateBadgeViewIfNeeded;
- (void)_invalidateBadgeView;
- (void)didApplyGeometry:(struct PXTileGeometry { struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x0; struct CGPoint { double x0; double x1; } x1; struct CGSize { double x0; double x1; } x2; struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } x3; double x4; double x5; BOOL x6; struct CGSize { double x0; double x1; } x7; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x8; void *x9; })a0 withUserData:(id)a1;

@end
