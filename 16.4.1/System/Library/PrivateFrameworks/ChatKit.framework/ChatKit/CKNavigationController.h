@interface CKNavigationController : UINavigationController

- (BOOL)shouldAutorotate;
- (id)childViewControllerForStatusBarStyle;
- (id)preferredFocusEnvironments;
- (void)viewDidLayoutSubviews;

@end
