@class UIViewController;

@interface WrappedViewController : AMSUICommonViewController

@property (copy, nonatomic) id /* block */ dismissBlock;
@property (retain, nonatomic) UIViewController *viewController;

- (void).cxx_destruct;
- (void)dealloc;
- (void)loadView;
- (void)presentationControllerDidDismiss:(id)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (id)initWithViewController:(id)a0;
- (void)viewWillLayoutSubviews;

@end
