@class PXUIScrollViewController, NSString, NSMutableSet, NSMapTable, PXUIMediaProvider;

@interface PXUIAssetsScene : PXAssetsScene <PXTilingControllerPreheatHandler> {
    NSMutableSet *_tilesInUse;
    NSMapTable *_imageRequesterByAssetReference;
    struct { BOOL preheating; } _needsUpdateFlags;
}

@property (nonatomic, setter=_setSupressingColorSettings:) BOOL _supressingColorSettings;
@property (nonatomic) struct CGSize { double width; double height; } maximumImageSize;
@property (nonatomic) double contentTileCornerRadius;
@property (readonly, nonatomic) PXUIMediaProvider *mediaProvider;
@property (readonly, nonatomic) PXUIScrollViewController *scrollViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)preloadResources;

- (void)updateIfNeeded;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (BOOL)needsUpdate;
- (void)dealloc;
- (void).cxx_destruct;
- (void)stopPreheatingTilesForIdentifiers:(const struct PXTileIdentifier { unsigned long long x0; unsigned long long x1[10]; } *)a0 withGeometries:(const struct PXTileGeometry { struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x0; struct CGPoint { double x0; double x1; } x1; struct CGSize { double x0; double x1; } x2; struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } x3; double x4; double x5; BOOL x6; struct CGSize { double x0; double x1; } x7; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x8; void *x9; } *)a1 count:(unsigned long long)a2 context:(void *)a3;
- (id)_assetsBySizeWithTileIdentifiers:(const struct PXTileIdentifier { unsigned long long x0; unsigned long long x1[10]; } *)a0 withGeometries:(const struct PXTileGeometry { struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x0; struct CGPoint { double x0; double x1; } x1; struct CGSize { double x0; double x1; } x2; struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } x3; double x4; double x5; BOOL x6; struct CGSize { double x0; double x1; } x7; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x8; void *x9; } *)a1 count:(unsigned long long)a2;
- (id)_imageRequesterForAssetReference:(id)a0;
- (id)_imageRequesterForIndexPath:(struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })a0 inDataSource:(id)a1;
- (void)_invalidatePreheating;
- (void)_registerDefaultTiles;
- (void)_transitionImageRequestersToDataSource:(id)a0;
- (void)_updatePreheatingIfNeeded;
- (void)checkInTile:(void *)a0 withIdentifier:(struct PXTileIdentifier { unsigned long long x0; unsigned long long x1[10]; })a1;
- (void *)checkOutTileForIdentifier:(struct PXTileIdentifier { unsigned long long x0; unsigned long long x1[10]; })a0 layout:(id)a1;
- (id)initWithTilingController:(id)a0 mediaProvider:(id)a1 dataSourceManager:(id)a2 selectionManager:(id)a3 delegate:(id)a4;
- (void)reusableObjectPool:(id)a0 didCreateReusableObject:(id)a1;
- (void)reusableObjectPool:(id)a0 didEvictReusableObject:(id)a1;
- (void)startPreheatingTilesForIdentifiers:(const struct PXTileIdentifier { unsigned long long x0; unsigned long long x1[10]; } *)a0 withGeometries:(const struct PXTileGeometry { struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x0; struct CGPoint { double x0; double x1; } x1; struct CGSize { double x0; double x1; } x2; struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } x3; double x4; double x5; BOOL x6; struct CGSize { double x0; double x1; } x7; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x8; void *x9; } *)a1 count:(unsigned long long)a2 context:(void *)a3;
- (void)willTransitionToDataSource:(id)a0;

@end
