@class GKGame, GKRemoteViewServiceController;

@interface GKHostedViewController : UIViewController

@property (retain, nonatomic) GKRemoteViewServiceController *remoteViewController;
@property (nonatomic) BOOL isRequestingRemoteViewController;
@property (nonatomic) BOOL gkIsDisappearing;
@property (retain, nonatomic) GKGame *game;
@property (nonatomic) BOOL shouldPresentRemoteViewController;
@property (nonatomic) BOOL presentingRemoteViewController;
@property (copy, nonatomic) id /* block */ remoteViewReadyHandler;

- (void)didReceiveMemoryWarning;
- (BOOL)automaticallyForwardAppearanceAndRotationMethodsToChildViewControllers;
- (void)dismissViewControllerAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (BOOL)shouldAutorotateToInterfaceOrientation:(long long)a0;
- (BOOL)shouldAutomaticallyForwardRotationMethods;
- (void)viewWillDisappear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (unsigned long long)supportedInterfaceOrientations;
- (id)_presentingViewController;
- (id)init;
- (BOOL)shouldAutomaticallyForwardAppearanceMethods;
- (void)dismissModalViewControllerAnimated:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)donePressed:(id)a0;
- (void)resetRemoteViewController;
- (void)requestRemoteViewControllerIfNeeded;
- (void)presentRemoteViewControllerIfNeeded;
- (id)hostSideViewControllerClassName;
- (id)serviceSideViewControllerClassName;
- (void)didGetRemoteViewController;

@end
