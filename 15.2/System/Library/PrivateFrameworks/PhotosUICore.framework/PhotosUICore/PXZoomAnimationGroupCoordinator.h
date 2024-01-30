@class NSArray;

@interface PXZoomAnimationGroupCoordinator : PXZoomAnimationCoordinator

@property (readonly, copy, nonatomic) NSArray *zoomAnimationCoordinators;

- (void).cxx_destruct;
- (id)init;
- (void)animateContentForEndPointType:(long long)a0 inView:(id)a1 withLayerType:(long long)a2 zoomAnimationContext:(id)a3;
- (void)animateContentForEndPointType:(long long)a0 withZoomAnimationContext:(id)a1;
- (id)initWithZoomAnimationCoordinators:(id)a0;

@end
