@interface BFFFinishSetupModalNavigationController : BFFNavigationController

@property (nonatomic) BOOL isPad;

- (long long)modalPresentationStyle;
- (struct CGSize { double x0; double x1; })preferredContentSize;
- (id)childViewControllerForStatusBarStyle;
- (BOOL)isModalInPresentation;

@end
