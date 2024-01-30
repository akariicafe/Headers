@protocol HMUserManagementRemoteHost;

@interface HMUserListRemoteViewController : _UIRemoteViewController <HMUserManagementRemoteHost>

@property (weak, nonatomic) id<HMUserManagementRemoteHost> delegate;

+ (id)requestViewControllerWithConnectionHandler:(id /* block */)a0;
+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;

- (void).cxx_destruct;
- (void)userManagementDidFinishWithError:(id)a0;
- (void)userManagementDidLoad;
- (void)viewServiceDidTerminateWithError:(id)a0;
- (void)viewDidLoad;

@end
