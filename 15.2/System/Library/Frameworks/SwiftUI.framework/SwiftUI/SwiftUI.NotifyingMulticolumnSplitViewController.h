@class UIViewController;

@interface SwiftUI.NotifyingMulticolumnSplitViewController : UISplitViewController

@property (nonatomic, readonly) UIViewController *childViewControllerForStatusBarHidden;

- (void)showDetailViewController:(id)a0 sender:(id)a1;
- (id)makeDetailNavigationControllerWithRoot:(id)a0;
- (id)initWithStyle:(long long)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;

@end
