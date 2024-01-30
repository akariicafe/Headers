@interface CNKEffectsLayoutController : NSObject {
    void /* unknown type, empty encoding */ containingViewController;
}

- (void).cxx_destruct;
- (id)init;
- (void)effectBrowserViewController:(id)a0 presentExpandedAppViewController:(id)a1 animated:(BOOL)a2 completion:(id /* block */)a3;
- (void)effectBrowserViewController:(id)a0 dismissExpandedAppViewController:(id)a1 animated:(BOOL)a2 completion:(id /* block */)a3;
- (id)initWithContainingViewController:(id)a0;
- (BOOL)shouldAlwaysPresentExpandedAppsFor:(id)a0;
- (struct CGSize { double x0; double x1; })expandedAppViewControllerSizeFor:(id)a0;

@end
