@class NSString, UIViewController;

@interface GKServiceViewController : GKNavigationController <GKExtensionProtocol, GKDaemonProxyDataUpdateDelegate, GKDashboardServiceInterface>

@property (nonatomic) double statusBarHeight;
@property (retain, nonatomic) UIViewController *privateViewController;
@property (nonatomic) BOOL alwaysShowDoneButton;
@property (nonatomic) int hostPID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_exportedInterface;
+ (id)_remoteViewControllerInterface;

- (void)finish;
- (void)setViewControllers:(id)a0 animated:(BOOL)a1;
- (void)didRotateFromInterfaceOrientation:(long long)a0;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)pushViewController:(id)a0 animated:(BOOL)a1;
- (void)viewWillDisappear:(BOOL)a0;
- (id)init;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)refreshContentsForDataType:(unsigned int)a0 userInfo:(id)a1;
- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)a0;
- (double)_statusBarHeightForCurrentInterfaceOrientation;
- (void)_addDoneButtonToViewController:(id)a0;
- (void)remoteViewControllerIsCanceling;
- (void)remoteViewControllerIsFinishing;
- (void)_startObservingChangesToProperties;
- (void)_stopObservingChangesToProperties;
- (BOOL)_useBackdropViewForWindowBackground;
- (void)cancelServiceViewController;
- (void)constructPrivateViewController;
- (void)dashboardDidChangeToLeaderboardIdentifier:(id)a0;
- (void)dashboardDidChangeToLeaderboardPlayerScope:(long long)a0;
- (void)dashboardDidChangeToLeaderboardTimeScope:(long long)a0;
- (void)dashboardDidChangeToViewState:(long long)a0;
- (void)donePressed:(id)a0;
- (void)finishAndPlayChallenge:(id)a0;
- (void)finishWithTurnBasedMatch:(id)a0;
- (void)messageFromClient:(id)a0;
- (void)nudge;
- (id)observedKeyPaths;
- (void)performSelectorOnHostController:(SEL)a0;
- (void)performSelectorOnHostController:(SEL)a0 withObject:(id)a1;
- (void)performSelectorOnHostController:(SEL)a0 withObject:(id)a1 withObject:(id)a2;
- (void)presentInitialViewController:(id)a0;
- (void)quitTurnBasedMatch:(id)a0;
- (void)remoteViewControllerDidCancel;
- (void)remoteViewControllerDidFinish;
- (void)requestDashboardLogoImageWithHandler:(id /* block */)a0;
- (void)requestImagesForLeaderboardSetsWithHandler:(id /* block */)a0;
- (void)requestImagesForLeaderboardsInSet:(id)a0 handler:(id /* block */)a1;
- (void)resetPrivateViewController;
- (void)serviceViewControllerCreated:(id)a0;
- (void)setInitialState:(id)a0 withReply:(id /* block */)a1;
- (void)setValue:(id)a0 forKeyPath:(id)a1 withReply:(id /* block */)a2;
- (BOOL)shouldAnimatePresentationForPrivateViewController:(id)a0;

@end
