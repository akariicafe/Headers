@class UIViewController;

@interface TeaUI.LazyViewController : UIViewController {
    void /* unknown type, empty encoding */ identifier;
    void /* unknown type, empty encoding */ loadedViewController;
    void /* unknown type, empty encoding */ eventManager;
}

@property (nonatomic, readonly) UIViewController *childViewControllerForStatusBarHidden;
@property (nonatomic, readonly) UIViewController *childViewControllerForStatusBarStyle;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;

@end
