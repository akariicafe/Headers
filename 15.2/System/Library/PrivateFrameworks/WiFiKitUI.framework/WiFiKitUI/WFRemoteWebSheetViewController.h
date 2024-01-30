@protocol WFRemoteWebSheetViewControllerDelegate;

@interface WFRemoteWebSheetViewController : _UIRemoteViewController

@property (weak, nonatomic) id<WFRemoteWebSheetViewControllerDelegate> delegate;

+ (id)serviceViewControllerInterface;
+ (id)requestViewControllerWithConnectionHandler:(id /* block */)a0;
+ (id)exportedInterface;

- (void)viewServiceDidTerminateWithError:(id)a0;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)_wheelChangedWithEvent:(id)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)webSheetViewControllerContentDidStartLoading;
- (void)webSheetViewControllerContentReadyForPresentation;
- (void)webSheetViewControllerContentDidFinishLoading;
- (void)_setupButtonListener;

@end
