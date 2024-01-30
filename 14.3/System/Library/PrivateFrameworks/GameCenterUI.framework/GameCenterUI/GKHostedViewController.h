@class GKGame, GKRemoteViewServiceController;

@interface GKHostedViewController : UIViewController

@property (retain, nonatomic) GKRemoteViewServiceController *remoteViewController;
@property (nonatomic) BOOL isRequestingRemoteViewController;
@property (nonatomic) BOOL gkIsDisappearing;
@property (retain, nonatomic) GKGame *game;
@property (nonatomic) BOOL shouldPresentRemoteViewController;
@property (nonatomic) BOOL presentingRemoteViewController;
@property (copy, nonatomic) id /* block */ remoteViewReadyHandler;

- (BOOL)shouldAutorotateToInterfaceOrientation:(long long)a0;
- (BOOL)automaticallyForwardAppearanceAndRotationMethodsToChildViewControllers;
- (id)init;
- (void)dismissViewControllerAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (BOOL)shouldAutomaticallyForwardAppearanceMethods;
- (void)dealloc;
- (BOOL)shouldAutomaticallyForwardRotationMethods;
- (void)viewWillDisappear:(BOOL)a0;
- (void)requestRemoteViewControllerIfNeeded;
- (void)presentRemoteViewControllerIfNeeded;
- (id)hostSideViewControllerClassName;
- (id)serviceSideViewControllerClassName;
- (void)didGetRemoteViewController;
- (void)dismissModalViewControllerAnimated:(BOOL)a0;
- (void)viewWillAppear:(BOOL)a0;
- (id)_presentingViewController;
- (void)didReceiveMemoryWarning;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)donePressed:(id)a0;
- (void)resetRemoteViewController;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidLoad;

@end
