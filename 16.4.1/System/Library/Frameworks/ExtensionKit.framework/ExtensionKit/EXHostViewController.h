@class _EXHostSessionDriver, _EXHostViewControllerConfiguration, UIView, UIViewController;
@protocol EXHostViewControllerDelegate;

@interface EXHostViewController : UIViewController <_EXHostViewControllerProtocol>

@property (retain) _EXHostSessionDriver *sessionDriver;
@property (retain) UIViewController *embededViewController;
@property (copy, nonatomic) _EXHostViewControllerConfiguration *configuration;
@property (weak, nonatomic) id<EXHostViewControllerDelegate> delegate;
@property (retain, nonatomic) UIView *placeholderView;
@property (readonly) UIView *view;

- (id)makeXPCConnectionWithError:(id *)a0;
- (id)configuration;
- (void)viewDidLoad;
- (id)init;
- (id)initWithConfiguration:(id)a0;
- (void)setConfiguration:(id)a0;
- (void).cxx_destruct;
- (void)loadView;
- (void)viewWillAppear:(BOOL)a0;
- (void)embedViewController:(id)a0;

@end
