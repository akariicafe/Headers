@class UIImageView, PKAnimatedNavigationBarTitleView, _PKAccountSavingsDetailsViewController;

@interface PKSavingsAccountDetailsViewController : UIViewController {
    _PKAccountSavingsDetailsViewController *_viewController;
    PKAnimatedNavigationBarTitleView *_titleIconView;
    UIImageView *_titleIcon;
}

- (id)initWithConfiguration:(id)a0;
- (void)viewWillLayoutSubviews;
- (void).cxx_destruct;
- (void)loadView;
- (void)viewWillAppear:(BOOL)a0;

@end
