@protocol WFRemoteWebSheetViewControllerDelegate;

@interface WFRemoteWebSheetViewController : _UIRemoteViewController

@property (weak, nonatomic) id<WFRemoteWebSheetViewControllerDelegate> delegate;

+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;
+ (id)requestViewControllerWithConnectionHandler:(id /* block */)a0;

- (void)_wheelChangedWithEvent:(id)a0;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void).cxx_destruct;
- (void)viewServiceDidTerminateWithError:(id)a0;
- (void)_setupButtonListener;
- (void)webSheetViewControllerContentDidFinishLoading;
- (void)webSheetViewControllerContentDidStartLoading;
- (void)webSheetViewControllerContentReadyForPresentation;

@end
