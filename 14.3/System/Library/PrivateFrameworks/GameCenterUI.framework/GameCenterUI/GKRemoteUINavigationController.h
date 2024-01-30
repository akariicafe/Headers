@class GKRemoteUIController;

@interface GKRemoteUINavigationController : UINavigationController

@property (readonly, nonatomic) GKRemoteUIController *remoteUIController;

- (void).cxx_destruct;
- (void)loadView;
- (id)initWithRemoteUIController:(id)a0;
- (unsigned long long)supportedInterfaceOrientations;

@end
