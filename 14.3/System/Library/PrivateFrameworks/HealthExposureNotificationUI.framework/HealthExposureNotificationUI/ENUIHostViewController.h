@protocol ENUIRemoteViewControllerProtocol, ENUIHostViewControllerDelegate;

@interface ENUIHostViewController : _UIRemoteViewController <ENUIHostViewControllerProtocol>

@property (readonly, nonatomic) id<ENUIRemoteViewControllerProtocol> _remoteViewControllerProxy;
@property (weak, nonatomic) id<ENUIHostViewControllerDelegate> delegate;

+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;
+ (id)requestRemoteViewControllerWithConnectionHandler:(id /* block */)a0;

- (void)show;
- (void).cxx_destruct;
- (void)didFinishWithError:(id)a0;
- (void)viewServiceDidTerminateWithError:(id)a0;
- (void)viewDidLoad;
- (void)setPresentationRequest:(id)a0;

@end
