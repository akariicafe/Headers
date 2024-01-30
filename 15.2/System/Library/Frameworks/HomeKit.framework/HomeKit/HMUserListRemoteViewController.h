@protocol HMUserManagementRemoteHost;

@interface HMUserListRemoteViewController : _UIRemoteViewController <HMUserManagementRemoteHost>

@property (weak, nonatomic) id<HMUserManagementRemoteHost> delegate;

+ (id)serviceViewControllerInterface;
+ (id)requestViewControllerWithConnectionHandler:(id /* block */)a0;
+ (id)exportedInterface;

- (void)viewServiceDidTerminateWithError:(id)a0;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)userManagementDidLoad;
- (void)userManagementDidFinishWithError:(id)a0;

@end
