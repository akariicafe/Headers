@protocol HMUserManagementRemoteHost;

@interface HMUserListRemoteViewController : _UIRemoteViewController <HMUserManagementRemoteHost>

@property (weak, nonatomic) id<HMUserManagementRemoteHost> delegate;

+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;
+ (id)requestViewControllerWithConnectionHandler:(id /* block */)a0;

- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)viewServiceDidTerminateWithError:(id)a0;
- (void)userManagementDidFinishWithError:(id)a0;
- (void)userManagementDidLoad;

@end
