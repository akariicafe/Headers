@class UIViewController;

@interface _PHUIViewControllerDefaultZoomAnimationCoordinator : PXZoomAnimationCoordinator

@property (retain, nonatomic) UIViewController *viewController;

- (id)initWithViewController:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)animateContentForEndPointType:(long long)a0 inView:(id)a1 withLayerType:(long long)a2 zoomAnimationContext:(id)a3;
- (void)animateContentForEndPointType:(long long)a0 withZoomAnimationContext:(id)a1;

@end
