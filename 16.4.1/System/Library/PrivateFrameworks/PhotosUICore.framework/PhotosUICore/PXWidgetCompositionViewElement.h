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

- (void).cxx_destruct;
- (struct CGPoint { double x0; double x1; })_anchorPoint;
- (void)_loadTilingController;
- (void)checkInTile:(void *)a0 withIdentifier:(struct PXTileIdentifier { unsigned long long x0; unsigned long long x1[10]; })a1;
- (void)checkInViewTile:(id)a0;
- (void *)checkOutTileForIdentifier:(struct PXTileIdentifier { unsigned long long x0; unsigned long long x1[10]; })a0 layout:(id)a1;
- (id)checkOutViewTile;
- (id)contentTilingController;
- (id)createTileAnimator;
- (void)saveAnchoring;
- (struct CGPoint { double x0; double x1; })tilingController:(id)a0 initialVisibleOriginForLayout:(id)a1;
- (void)tilingController:(id)a0 prepareForChange:(id)a1;
- (id)tilingController:(id)a0 tileIdentifierConverterForChange:(id)a1;

@end
