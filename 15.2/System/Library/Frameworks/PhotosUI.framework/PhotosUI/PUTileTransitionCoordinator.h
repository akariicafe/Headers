@interface PUTileTransitionCoordinator : NSObject

+ (id)browsingTileTransitionCoordinatorForTransitionFromLayout:(id)a0 toLayout:(id)a1 withTilingView:(id)a2 anchorAssetReference:(id)a3 context:(id)a4;
+ (id)defaultTileTransitionCoordinatorForTransitionFromLayout:(id)a0 toLayout:(id)a1 withTilingView:(id)a2 anchorAssetReference:(id)a3 context:(id)a4;
+ (id)defaultTileTransitionCoordinatorForFrameChangeWithTileCrossFade:(BOOL)a0 tilingView:(id)a1;
+ (id)defaultTileTransitionCoordinatorForReattachedTileControllers:(id)a0 context:(id)a1;
+ (id)defaultTileTransitionCoordinatorForLayoutInvalidationContext:(id)a0 layout:(id)a1 viewModel:(id)a2;
+ (id)defaultTileTransitionCoordinatorForUpdates;

- (id)newTileAnimationOptions;
- (id)initialLayoutInfoForAppearingTileController:(id)a0 toLayoutInfo:(id)a1;
- (id)finalLayoutInfoForDisappearingTileController:(id)a0 fromLayoutInfo:(id)a1;
- (BOOL)useDoubleSidedTransitionForUpdatedTileController:(id)a0 toLayoutInfo:(id)a1;
- (id)optionsForAnimatingTileController:(id)a0 toLayoutInfo:(id)a1 withAnimationType:(long long)a2;

@end
