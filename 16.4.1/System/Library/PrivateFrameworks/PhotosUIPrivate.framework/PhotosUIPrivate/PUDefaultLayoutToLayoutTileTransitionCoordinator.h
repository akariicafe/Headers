@class PUAssetReference, PUTilingLayoutTransitionContext, PUTilingLayout;
@protocol PUTilingCoordinateSystem;

@interface PUDefaultLayoutToLayoutTileTransitionCoordinator : PUDefaultTileTransitionCoordinator

@property (nonatomic, setter=_setZoomingIn:) BOOL _isZoomingIn;
@property (nonatomic, setter=_setNeedsUpdateZoomingIn:) BOOL _needsUpdateZoomingIn;
@property (retain, nonatomic) PUTilingLayout *fromLayout;
@property (retain, nonatomic) PUTilingLayout *toLayout;
@property (retain, nonatomic) PUAssetReference *anchorAssetReference;
@property (retain, nonatomic) PUTilingLayoutTransitionContext *context;
@property (retain, nonatomic) id<PUTilingCoordinateSystem> fixedCoordinateSystem;

- (id)description;
- (void).cxx_destruct;
- (id)_centerTileLayoutInfoWithDefaultDisappearance:(id)a0 layoutWhereCenterTileExists:(id)a1 layoutWhereCenterTileDisappeared:(id)a2;
- (void)_invalidateIsZoomingIn;
- (BOOL)_isCenterTileLayoutInfo:(id)a0;
- (void)_updateIsZoomingInIfNeeded;
- (long long)_zoomLevelForLayout:(id)a0;
- (id)finalLayoutInfoForDisappearingTileController:(id)a0 fromLayoutInfo:(id)a1;
- (id)initialLayoutInfoForAppearingTileController:(id)a0 toLayoutInfo:(id)a1;
- (id)optionsForAnimatingTileController:(id)a0 toLayoutInfo:(id)a1 withAnimationType:(long long)a2;
- (BOOL)useDoubleSidedTransitionForUpdatedTileController:(id)a0 toLayoutInfo:(id)a1;

@end
