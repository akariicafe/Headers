@interface PUBrowsingLayoutToLayoutTileTransitionCoordinator : PUDefaultLayoutToLayoutTileTransitionCoordinator

- (id)newTileAnimationOptions;
- (id)finalLayoutInfoForDisappearingTileController:(id)a0 fromLayoutInfo:(id)a1;
- (BOOL)useDoubleSidedTransitionForUpdatedTileController:(id)a0 toLayoutInfo:(id)a1;
- (id)optionsForAnimatingTileController:(id)a0 toLayoutInfo:(id)a1 withAnimationType:(long long)a2;

@end
