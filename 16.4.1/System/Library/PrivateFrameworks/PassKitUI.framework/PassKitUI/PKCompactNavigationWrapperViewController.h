@class PKCompactNavigationContainedNavigationController;

@interface PKCompactNavigationWrapperViewController : PKWrapperViewController {
    PKCompactNavigationContainedNavigationController *_parentNavigationController;
    double _navigationBarHeight;
}

@property (readonly, nonatomic) BOOL needsInitialLayout;
@property (readonly, nonatomic) BOOL hasExplicitTargetNavigationHeight;
@property (nonatomic) double targetNavigationHeight;

- (void)didMoveToParentViewController:(id)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_edgeInsetsForChildViewController:(id)a0 insetsAreAbsolute:(BOOL *)a1;
- (BOOL)_canShowWhileLocked;
- (void)viewWillLayoutSubviews;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (void)loadView;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_wrappedViewControllerFrameForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 navigationBarHeight:(double)a1;
- (id)initWithWrappedViewController:(id)a0 parentNavigationController:(id)a1;
- (id)initWithWrappedViewController:(id)a0 type:(long long)a1;

@end
