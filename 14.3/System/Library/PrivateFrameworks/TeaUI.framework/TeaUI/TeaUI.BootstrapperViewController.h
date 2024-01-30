@class UIViewController;

@interface TeaUI.BootstrapperViewController : UIViewController {
    void /* unknown type, empty encoding */ mainViewController;
    void /* unknown type, empty encoding */ onboardingViewController;
}

@property (nonatomic, readonly) UIViewController *childViewControllerForStatusBarStyle;
@property (nonatomic, readonly) UIViewController *childViewControllerForStatusBarHidden;

- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;

@end
