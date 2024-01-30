@class PSRootController;
@protocol PSSplitViewControllerNavigationDelegate;

@interface PSSplitViewController : UISplitViewController

@property (retain, nonatomic) PSRootController *containerNavigationController;
@property (weak, nonatomic) id<PSSplitViewControllerNavigationDelegate> navigationDelegate;

- (void)setViewControllers:(id)a0;
- (id)childViewControllerForStatusBarStyle;
- (void).cxx_destruct;
- (id)categoryController;
- (void)showInitialViewController:(id)a0;
- (void)popRecursivelyToRootController;
- (void)setupControllerForToolbar:(id)a0;
- (unsigned long long)supportedInterfaceOrientations;

@end
