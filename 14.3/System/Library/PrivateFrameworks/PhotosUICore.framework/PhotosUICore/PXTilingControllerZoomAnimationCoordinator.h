@class PXTilingController;
@protocol PXTilingControllerZoomAnimationCoordinatorDelegate;

@interface PXTilingControllerZoomAnimationCoordinator : PXZoomAnimationCoordinator

@property (readonly, nonatomic) PXTilingController *tilingController;
@property (readonly, nonatomic) id context;
@property (weak, nonatomic) id<PXTilingControllerZoomAnimationCoordinatorDelegate> delegate;

- (id)init;
- (void).cxx_destruct;
- (void)moveTile:(id)a0 toView:(id)a1 restorationBlock:(out id /* block */ *)a2;
- (id)initWithTilingController:(id)a0 context:(id)a1;
- (void)_animateTilesPassingTest:(id /* block */)a0 forEndPointType:(long long)a1 withZoomTransitionContext:(id)a2 tileGeometryTransformer:(id /* block */)a3;
- (void)_animateTilesPassingTest:(id /* block */)a0 fromEndPointType:(long long)a1 toEndPointType:(long long)a2 alpha:(double)a3 transform:(id)a4 withOptions:(id)a5 tileGeometryTransformer:(id /* block */)a6 completionHandler:(id /* block */)a7;
- (void)animateContentForEndPointType:(long long)a0 inView:(id)a1 withLayerType:(long long)a2 zoomAnimationContext:(id)a3;
- (void)animateContentForEndPointType:(long long)a0 withZoomAnimationContext:(id)a1;

@end
