@class UINavigationItem, UIViewController;

@interface TSGutterViewController : UIViewController {
    void /* unknown type, empty encoding */ gutterViewController;
}

@property (nonatomic, readonly) UINavigationItem *navigationItem;
@property (nonatomic, readonly) UIViewController *childViewControllerForStatusBarHidden;
@property (nonatomic, readonly) UIViewController *childViewControllerForStatusBarStyle;
@property (nonatomic, readonly) UIViewController *childViewControllerForHomeIndicatorAutoHidden;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithChildViewController:(id)a0 childScrollViewProducer:(id /* block */)a1 gutterBreakpoints:(id)a2;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;

@end
