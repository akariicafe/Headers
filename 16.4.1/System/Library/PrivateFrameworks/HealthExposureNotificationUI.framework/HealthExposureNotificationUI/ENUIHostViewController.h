@protocol ENUIRemoteViewControllerProtocol, ENUIHostViewControllerDelegate;

@interface ENUIHostViewController : _UIRemoteViewController <ENUIHostViewControllerProtocol>

@property (readonly, nonatomic) id<ENUIRemoteViewControllerProtocol> _remoteViewControllerProxy;
@property (weak, nonatomic) id<ENUIHostViewControllerDelegate> delegate;

+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;
+ (id)requestRemoteViewControllerWithConnectionHandler:(id /* block */)a0;

- (void)didFinishWithError:(id)a0;
- (void)show;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)viewServiceDidTerminateWithError:(id)a0;
- (void)setPresentationRequest:(id)a0;

@end
