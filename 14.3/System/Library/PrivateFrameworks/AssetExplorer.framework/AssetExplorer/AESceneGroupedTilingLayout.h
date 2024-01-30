@class AEProgressViewModelSnapshot;
@protocol AEBrowserLayoutDelegate, AETileLayoutInfo;

@interface AESceneGroupedTilingLayout : PXAssetsTilingLayout {
    struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *_sectionBounds;
    struct CGSize { double width; double height; } _cachedGradientOverlaySize;
}

@property (readonly, nonatomic) id<AETileLayoutInfo> _gradientTileLayoutInfo;
@property (retain, nonatomic) AEProgressViewModelSnapshot *progressSnapshot;
@property (weak, nonatomic) id<AEBrowserLayoutDelegate> delegate;
@property (readonly, nonatomic) long long layoutStyle;
@property (nonatomic, getter=isPortraitOrientation) BOOL portraitOrientation;

- (void)prepareLayout;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })contentBounds;
- (void)enumerateTilesInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 withOptions:(id)a1 usingBlock:(id /* block */)a2;
- (BOOL)getGeometry:(out struct PXTileGeometry { struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x0; struct CGPoint { double x0; double x1; } x1; struct CGSize { double x0; double x1; } x2; struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } x3; double x4; double x5; BOOL x6; struct CGSize { double x0; double x1; } x7; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x8; void *x9; } *)a0 group:(out unsigned long long *)a1 userData:(out id *)a2 forTileWithIdentifier:(struct PXTileIdentifier { unsigned long long x0; unsigned long long x1[10]; })a3;
- (void).cxx_destruct;
- (void)dealloc;
- (void)setContentInset:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (void)setReferenceSize:(struct CGSize { double x0; double x1; })a0;
- (void)setVisibleOrigin:(struct CGPoint { double x0; double x1; })a0;
- (void)setSelectedIndexPaths:(id)a0;
- (id)initWithDataSource:(id)a0 layoutStyle:(long long)a1 gradientTileInfo:(id)a2 orientation:(long long)a3;
- (long long)_thumbnailRowsForCurrentLayoutStyle;
- (struct CGSize { double x0; double x1; })_safeReferenceSize;
- (void)_invalidateBadgeDecorations;
- (struct PXTileGeometry { struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x0; struct CGPoint { double x0; double x1; } x1; struct CGSize { double x0; double x1; } x2; struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } x3; double x4; double x5; BOOL x6; struct CGSize { double x0; double x1; } x7; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x8; void *x9; })_geometryWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 alpha:(double)a1 zPosition:(double)a2;
- (struct CGPoint { double x0; double x1; })_boundedVisibleOrigin;
- (double)_zPositionForDecorativeTileSubitem:(unsigned long long)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_gradientShadowFrameForItemFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_frameForGridTile:(long long)a0 inSection:(long long)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_progressFrameForGridTileFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithDataSource:(id)a0 layoutStyle:(long long)a1 orientation:(long long)a2;

@end
