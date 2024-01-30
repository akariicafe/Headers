@class UIViewController, AMSBinaryPromise;

@interface SUNavigationContainerViewController : SUViewController

@property (nonatomic) BOOL shouldRunPopHandler;
@property (retain, nonatomic) AMSBinaryPromise *appearancePromise;
@property (nonatomic) BOOL bridgedNavigation;
@property (readonly, nonatomic) UIViewController *embeddedViewController;
@property (copy, nonatomic) id /* block */ popHandler;

- (void).cxx_destruct;
- (BOOL)shouldAutomaticallyForwardAppearanceMethods;
- (void)viewWillDisappear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (id)initWithChildViewController:(id)a0;
- (void)setEmbeddedViewController:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;

@end
