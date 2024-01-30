@class PSRootController;
@protocol PSSplitViewControllerNavigationDelegate;

@interface PSSplitViewController : UISplitViewController

@property (retain, nonatomic) PSRootController *containerNavigationController;
@property (weak, nonatomic) id<PSSplitViewControllerNavigationDelegate> navigationDelegate;

- (void)setViewControllers:(id)a0;
- (id)childViewControllerForStatusBarStyle;
- (id)categoryController;
- (void)showInitialViewController:(id)a0;
- (void)setupControllerForToolbar:(id)a0;
- (unsigned long long)supportedInterfaceOrientations;
- (void)popRecursivelyToRootController;
- (void).cxx_destruct;

@end
