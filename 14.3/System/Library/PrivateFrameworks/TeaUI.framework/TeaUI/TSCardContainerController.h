@class UIViewController;

@interface TSCardContainerController : UIViewController {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ transitionManager;
    void /* unknown type, empty encoding */ cardViewLayoutOptions;
    void /* unknown type, empty encoding */ rootViewController;
    void /* unknown type, empty encoding */ dimmingColor;
    void /* unknown type, empty encoding */ dimmingAlpha;
    void /* unknown type, empty encoding */ cardItemStack;
    void /* unknown type, empty encoding */ dimmingView;
    void /* unknown type, empty encoding */ eventManager;
}

@property (nonatomic, readonly) BOOL shouldAutomaticallyForwardAppearanceMethods;
@property (nonatomic, readonly) UIViewController *childViewControllerForStatusBarStyle;
@property (nonatomic, readonly) UIViewController *childViewControllerForStatusBarHidden;

- (void)popCards;
- (void)viewDidLayoutSubviews;
- (void)viewWillDisappear:(BOOL)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)collapseCards:(id /* block */)a0;
- (void)expandCards:(id /* block */)a0;
- (void)pushCardWithViewController:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewSafeAreaInsetsDidChange;
- (BOOL)accessibilityPerformEscape;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewLayoutMarginsDidChange;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;

@end
