@class NSString, UIViewController, GKGame;

@interface GKServiceViewController : GKNavigationController <GKExtensionProtocol, GKDaemonProxyDataUpdateDelegate, GKDashboardServiceInterface>

@property (nonatomic) double statusBarHeight;
@property (retain, nonatomic) UIViewController *privateViewController;
@property (retain, nonatomic) GKGame *game;
@property (nonatomic) BOOL alwaysShowDoneButton;
@property (nonatomic) int hostPID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_exportedInterface;
+ (id)_remoteViewControllerInterface;

- (void)setViewControllers:(id)a0 animated:(BOOL)a1;
- (void)finish;
- (void)pushViewController:(id)a0 animated:(BOOL)a1;
- (void)viewWillAppear:(BOOL)a0;
- (void)nudge;
- (void)viewWillDisappear:(BOOL)a0;
- (void)didRotateFromInterfaceOrientation:(long long)a0;
- (double)_statusBarHeightForCurrentInterfaceOrientation;
- (void)viewDidDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (id)init;
- (void)refreshContentsForDataType:(unsigned int)a0 userInfo:(id)a1;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;
- (void)donePressed:(id)a0;
- (void)finishAndPlayChallenge:(id)a0;
- (id)observedKeyPaths;
- (void)setInitialState:(id)a0 withReply:(id /* block */)a1;
- (void)setValue:(id)a0 forKeyPath:(id)a1 withReply:(id /* block */)a2;
- (void)remoteViewControllerIsFinishing;
- (void)remoteViewControllerDidFinish;
- (void)remoteViewControllerIsCanceling;
- (void)remoteViewControllerDidCancel;
- (void)constructPrivateViewController;
- (BOOL)_useBackdropViewForWindowBackground;
- (BOOL)shouldAnimatePresentationForPrivateViewController:(id)a0;
- (void)requestImagesForLeaderboardsInSet:(id)a0 handler:(id /* block */)a1;
- (void)finishWithTurnBasedMatch:(id)a0;
- (void)quitTurnBasedMatch:(id)a0;
- (void)requestImagesForLeaderboardSetsWithHandler:(id /* block */)a0;
- (void)messageFromClient:(id)a0;
- (void)dashboardDidChangeToViewState:(long long)a0;
- (void)requestDashboardLogoImageWithHandler:(id /* block */)a0;
- (void)_startObservingChangesToProperties;
- (void)serviceViewControllerCreated:(id)a0;
- (void)_stopObservingChangesToProperties;
- (void)cancelServiceViewController;
- (void)presentInitialViewController:(id)a0;
- (void)performSelectorOnHostController:(SEL)a0 withObject:(id)a1;
- (void)performSelectorOnHostController:(SEL)a0 withObject:(id)a1 withObject:(id)a2;
- (void)_addDoneButtonToViewController:(id)a0;
- (void)dashboardDidChangeToLeaderboardTimeScope:(long long)a0;
- (void)dashboardDidChangeToLeaderboardPlayerScope:(long long)a0;
- (void)dashboardDidChangeToLeaderboardIdentifier:(id)a0;
- (void)resetPrivateViewController;
- (void)performSelectorOnHostController:(SEL)a0;

@end
