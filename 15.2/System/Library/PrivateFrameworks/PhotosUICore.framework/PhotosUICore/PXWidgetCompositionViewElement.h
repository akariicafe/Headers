@class PXWidgetCompositionViewElementLayout, PXTilingController, NSMutableSet, NSString, PXBasicTileAnimator;

@interface PXWidgetCompositionViewElement : PXWidgetCompositionElement <PXTileSource, PXTilingControllerTransitionDelegate, PXTilingControllerScrollDelegate>

@property (readonly, nonatomic) PXBasicTileAnimator *_tileAnimator;
@property (readonly, nonatomic) PXWidgetCompositionViewElementLayout *_layout;
@property (readonly, nonatomic) NSMutableSet *_tilesInUse;
@property (readonly, nonatomic) PXTilingController *_tilingController;
@property (nonatomic, setter=_setAnchorOffset:) struct CGPoint { double x; double y; } _anchorOffset;
@property (nonatomic) BOOL isCheckingInTile;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (struct CGPoint { double x0; double x1; })_anchorPoint;
- (void).cxx_destruct;
- (id)contentTilingController;
- (id)createTileAnimator;
- (void *)checkOutTileForIdentifier:(struct PXTileIdentifier { unsigned long long x0; unsigned long long x1[10]; })a0 layout:(id)a1;
- (void)checkInTile:(void *)a0 withIdentifier:(struct PXTileIdentifier { unsigned long long x0; unsigned long long x1[10]; })a1;
- (void)tilingController:(id)a0 prepareForChange:(id)a1;
- (id)tilingController:(id)a0 tileIdentifierConverterForChange:(id)a1;
- (struct CGPoint { double x0; double x1; })tilingController:(id)a0 initialVisibleOriginForLayout:(id)a1;
- (void)saveAnchoring;
- (void)_loadTilingController;
- (id)checkOutViewTile;
- (void)checkInViewTile:(id)a0;

@end
