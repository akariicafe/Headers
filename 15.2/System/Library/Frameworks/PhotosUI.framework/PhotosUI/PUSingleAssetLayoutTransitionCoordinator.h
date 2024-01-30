@protocol PUTilingCoordinateSystem;

@interface PUSingleAssetLayoutTransitionCoordinator : PUTileTransitionCoordinator

@property (retain, nonatomic) id<PUTilingCoordinateSystem> fixedCoordinateSystem;

- (id)initialLayoutInfoForAppearingTileController:(id)a0 toLayoutInfo:(id)a1;
- (id)finalLayoutInfoForDisappearingTileController:(id)a0 fromLayoutInfo:(id)a1;
- (void).cxx_destruct;
- (id)_layoutInfoWithDefaultDisappearance:(id)a0;

@end
