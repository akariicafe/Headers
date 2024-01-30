@interface PUBrowsingLayoutToLayoutTileTransitionCoordinator : PUDefaultLayoutToLayoutTileTransitionCoordinator

- (id)optionsForAnimatingTileController:(id)a0 toLayoutInfo:(id)a1 withAnimationType:(long long)a2;
- (id)finalLayoutInfoForDisappearingTileController:(id)a0 fromLayoutInfo:(id)a1;
- (id)newTileAnimationOptions;
- (BOOL)useDoubleSidedTransitionForUpdatedTileController:(id)a0 toLayoutInfo:(id)a1;

@end
