@class UIViewController;

@interface TeaUI.PromiseViewController : UIViewController {
    void /* unknown type, empty encoding */ identifier;
    void /* unknown type, empty encoding */ promise;
    void /* unknown type, empty encoding */ contentViewController;
    void /* unknown type, empty encoding */ coverViewManager;
    void /* unknown type, empty encoding */ navigationItemStyle;
}

@property (nonatomic, readonly) UIViewController *childViewControllerForHomeIndicatorAutoHidden;
@property (nonatomic, readonly) UIViewController *childViewControllerForStatusBarStyle;
@property (nonatomic, readonly) UIViewController *childViewControllerForStatusBarHidden;

- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;

@end
