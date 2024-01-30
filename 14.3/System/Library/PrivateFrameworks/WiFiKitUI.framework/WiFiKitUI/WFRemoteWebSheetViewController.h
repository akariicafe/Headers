@protocol WFRemoteWebSheetViewControllerDelegate;

@interface WFRemoteWebSheetViewController : _UIRemoteViewController

@property (weak, nonatomic) id<WFRemoteWebSheetViewControllerDelegate> delegate;

+ (id)requestViewControllerWithConnectionHandler:(id /* block */)a0;
+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;

- (void)_wheelChangedWithEvent:(id)a0;
- (void).cxx_destruct;
- (void)viewServiceDidTerminateWithError:(id)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidLoad;
- (void)webSheetViewControllerContentDidStartLoading;
- (void)webSheetViewControllerContentReadyForPresentation;
- (void)webSheetViewControllerContentDidFinishLoading;
- (void)_setupButtonListener;

@end
