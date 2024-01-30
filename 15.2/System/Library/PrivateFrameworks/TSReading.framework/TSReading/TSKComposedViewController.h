@class UIViewController;

@interface TSKComposedViewController : TSKPopoverBasedViewController

@property (readonly, nonatomic) UIViewController *composedViewController;

- (id)initWithViewController:(id)a0;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (id)title;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (id)i_contentViewController;
- (void)p_loadChildView;
- (void)p_unloadChildView;

@end
