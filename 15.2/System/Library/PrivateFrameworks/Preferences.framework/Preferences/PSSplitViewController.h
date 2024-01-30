@class PSRootController;
@protocol PSSplitViewControllerNavigationDelegate;

@interface PSSplitViewController : UISplitViewController

@property (retain, nonatomic) PSRootController *containerNavigationController;
@property (weak, nonatomic) id<PSSplitViewControllerNavigationDelegate> navigationDelegate;

- (id)childViewControllerForStatusBarStyle;
- (void)setViewControllers:(id)a0;
- (void)setupControllerForToolbar:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)supportedInterfaceOrientations;
- (void)showInitialViewController:(id)a0;
- (void)popRecursivelyToRootController;
- (id)categoryController;

@end
