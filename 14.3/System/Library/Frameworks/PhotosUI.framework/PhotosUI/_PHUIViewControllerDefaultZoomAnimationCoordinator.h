@class UIViewController;

@interface _PHUIViewControllerDefaultZoomAnimationCoordinator : PXZoomAnimationCoordinator

@property (retain, nonatomic) UIViewController *viewController;

- (id)init;
- (void).cxx_destruct;
- (void)animateContentForEndPointType:(long long)a0 inView:(id)a1 withLayerType:(long long)a2 zoomAnimationContext:(id)a3;
- (void)animateContentForEndPointType:(long long)a0 withZoomAnimationContext:(id)a1;
- (id)initWithViewController:(id)a0;

@end
