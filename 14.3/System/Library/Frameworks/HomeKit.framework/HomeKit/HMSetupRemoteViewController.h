@protocol HMSetupRemoteHost;

@interface HMSetupRemoteViewController : _UIRemoteViewController <HMSetupRemoteHost>

@property (weak, nonatomic) id<HMSetupRemoteHost> delegate;

+ (id)requestViewControllerWithConnectionHandler:(id /* block */)a0;
+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;

- (void).cxx_destruct;
- (void)accessorySetupDidFinishWithError:(id)a0;
- (void)accessorySetupDidLoad;
- (void)accessorySetupDidFinishWithInfo:(id)a0 error:(id)a1;
- (void)accessorySetupDidBeginPairing;
- (void)accessorySetupDidFinishPairing;
- (void)viewServiceDidTerminateWithError:(id)a0;
- (void)viewDidLoad;

@end
