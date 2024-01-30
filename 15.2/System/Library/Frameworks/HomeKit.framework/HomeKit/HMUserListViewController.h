@class HMHome, HMUserListRemoteViewController, _UIAsyncInvocation;

@interface HMUserListViewController : UIViewController <HMUserManagementRemoteHost>

@property (retain, nonatomic) HMHome *home;
@property (nonatomic) BOOL shouldPresentWhenLoaded;
@property (copy, nonatomic) id /* block */ loadHandler;
@property (retain, nonatomic) _UIAsyncInvocation *cancelServiceInvocation;
@property (retain, nonatomic) HMUserListRemoteViewController *remoteViewController;
@property (copy, nonatomic) id /* block */ completionHandler;

- (void)viewDidLoad;
- (void).cxx_destruct;
- (unsigned long long)supportedInterfaceOrientations;
- (BOOL)shouldAutorotate;
- (void)userManagementDidLoad;
- (void)userManagementDidFinishWithError:(id)a0;
- (id)initWithHome:(id)a0 loadHandler:(id /* block */)a1;
- (void)presentWhenLoaded;
- (void)_requestRemoteViewController;
- (void)_configureAndAddRemoteViewController;
- (void)_finishSetupWithError:(id)a0;
- (void)_presentAsTopmostViewController;

@end
