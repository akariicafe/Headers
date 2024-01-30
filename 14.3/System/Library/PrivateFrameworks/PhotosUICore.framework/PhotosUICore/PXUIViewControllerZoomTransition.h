@interface PXUIViewControllerZoomTransition : PXUIViewControllerTransition

+ (BOOL)isTransitionSupportedWithMasterViewController:(id)a0 detailViewController:(id)a1;
+ (id)_leafViewControllerForTransitionWithViewController:(id)a0;

- (void)animateTransition:(id)a0;
- (double)transitionDuration:(id)a0;
- (BOOL)supportsEdgeSwipeBackGesture;
- (long long)transitionIdentifierForTransitionMode:(unsigned long long)a0;
- (void)animateZoomTransition:(id)a0 withInitialVelocity:(struct PXDisplayVelocity { double x0; double x1; double x2; double x3; })a1 completionHandler:(id /* block */)a2;

@end
