@class GKRemoteUIController;

@interface GKRemoteUINavigationController : UINavigationController

@property (readonly, nonatomic) GKRemoteUIController *remoteUIController;

- (void)loadView;
- (void).cxx_destruct;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidAppear:(BOOL)a0;
- (id)initWithRemoteUIController:(id)a0;

@end
