@class HMSetupAccessoryDescription, _UIAsyncInvocation, NSString, _UIRemoteViewController, HMSetupRemoteViewController, HMHome;

@interface HMSetupViewController : UIViewController <HMSetupRemoteHost, _UIRemoteViewControllerContaining>

@property (retain, nonatomic) HMHome *home;
@property (retain, nonatomic) HMSetupAccessoryDescription *accessoryDescription;
@property (nonatomic) BOOL shouldPresentWhenLoaded;
@property (copy, nonatomic) id /* block */ loadHandler;
@property (retain, nonatomic) _UIAsyncInvocation *cancelServiceInvocation;
@property (retain, nonatomic) HMSetupRemoteViewController *remoteViewController;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (nonatomic, getter=isCancelling) BOOL cancelling;
@property (nonatomic, getter=isDisconnected) BOOL disconnected;
@property (readonly, nonatomic) _UIRemoteViewController *_containedRemoteViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)accessorySetupDidFinishWithError:(id)a0;
- (void)accessorySetupDidLoad;
- (void)accessorySetupDidFinishWithInfo:(id)a0 error:(id)a1;
- (void)accessorySetupDidBeginPairing;
- (void)accessorySetupDidFinishPairing;
- (void)setupFailedWithError:(id)a0;
- (void)setupInterruptedWithError:(id)a0;
- (id)initWithHome:(id)a0 accessoryDescription:(id)a1 loadHandler:(id /* block */)a2;
- (void)_requestRemoteViewController;
- (void)_finishSetupWithInfo:(id)a0 error:(id)a1;
- (void)_configureAndAddRemoteViewController;
- (void)_presentAsTopmostViewController;
- (void)presentWhenLoaded;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidLoad;

@end
