@class HMHome, HMUserListRemoteViewController, _UIAsyncInvocation;

@interface HMUserListViewController : UIViewController <HMUserManagementRemoteHost>

@property (retain, nonatomic) HMHome *home;
@property (nonatomic) BOOL shouldPresentWhenLoaded;
@property (copy, nonatomic) id /* block */ loadHandler;
@property (retain, nonatomic) _UIAsyncInvocation *cancelServiceInvocation;
@property (retain, nonatomic) HMUserListRemoteViewController *remoteViewController;
@property (copy, nonatomic) id /* block */ completionHandler;

- (void).cxx_destruct;
- (void)userManagementDidFinishWithError:(id)a0;
- (void)userManagementDidLoad;
- (BOOL)shouldAutorotate;
- (void)_requestRemoteViewController;
- (void)_configureAndAddRemoteViewController;
- (void)_presentAsTopmostViewController;
- (void)presentWhenLoaded;
- (void)_finishSetupWithError:(id)a0;
- (id)initWithHome:(id)a0 loadHandler:(id /* block */)a1;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidLoad;

@end
