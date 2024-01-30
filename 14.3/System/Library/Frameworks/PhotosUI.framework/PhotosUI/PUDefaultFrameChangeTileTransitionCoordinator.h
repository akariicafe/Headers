@class NSSet, PUTilingView;

@interface PUDefaultFrameChangeTileTransitionCoordinator : PUDefaultTileTransitionCoordinator

@property (copy, nonatomic, setter=_setInvisibleTileControllers:) NSSet *_invisibleTileControllers;
@property (nonatomic) BOOL shouldCrossFadeTiles;
@property (weak, nonatomic) PUTilingView *tilingView;

- (void)prepare;
- (void).cxx_destruct;
- (id)initialLayoutInfoForAppearingTileController:(id)a0 toLayoutInfo:(id)a1;
- (id)_layoutInfoForDisappearedInvisibleTile:(id)a0;
- (BOOL)_isLayoutInfoVisible:(id)a0;
- (id)finalLayoutInfoForDisappearingTileController:(id)a0 fromLayoutInfo:(id)a1;
- (BOOL)useDoubleSidedTransitionForUpdatedTileController:(id)a0 toLayoutInfo:(id)a1;

@end
