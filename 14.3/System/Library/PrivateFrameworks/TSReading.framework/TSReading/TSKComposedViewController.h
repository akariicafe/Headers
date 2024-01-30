@class UIViewController;

@interface TSKComposedViewController : TSKPopoverBasedViewController

@property (readonly, nonatomic) UIViewController *composedViewController;

- (void)dealloc;
- (void)viewWillDisappear:(BOOL)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (id)title;
- (id)initWithViewController:(id)a0;
- (void)viewDidLoad;
- (id)i_contentViewController;
- (void)p_loadChildView;
- (void)p_unloadChildView;

@end
