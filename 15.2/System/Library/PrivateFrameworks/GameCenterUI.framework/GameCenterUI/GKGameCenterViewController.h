@class NSString, UIAlertController, GKGame, GKLeaderboard, GKDashboardHostViewController;
@protocol GKGameCenterControllerDelegate;

@interface GKGameCenterViewController : UINavigationController <GKExtensionParentViewControllerProtocol, UIViewControllerAnimatedTransitioning, UIViewControllerTransitioningDelegate>

@property (retain, nonatomic) GKDashboardHostViewController *remoteViewController;
@property (retain, nonatomic) NSString *leaderboardIdentifier;
@property (retain, nonatomic) GKLeaderboard *leaderboard;
@property (retain, nonatomic) NSString *achievementIdentifier;
@property (retain, nonatomic) NSString *playerIdentifier;
@property (retain, nonatomic) UIAlertController *alertController;
@property (retain, nonatomic) NSString *leaderboardCategory;
@property (nonatomic) long long leaderboardTimeScope;
@property (nonatomic) long long leaderboardPlayerScope;
@property (nonatomic) long long viewState;
@property (nonatomic) BOOL isArcade;
@property (nonatomic, getter=isPresenting) BOOL presenting;
@property (retain, nonatomic) GKGame *actualGame;
@property (nonatomic) int actualHostPID;
@property (weak, nonatomic) id<GKGameCenterControllerDelegate> gameCenterDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)accessInstanceVariablesDirectly;
+ (BOOL)_preventsAppearanceProxyCustomization;

- (id)animationControllerForDismissedController:(id)a0;
- (id)initWithState:(long long)a0;
- (id)animationControllerForPresentedController:(id)a0 presentingController:(id)a1 sourceController:(id)a2;
- (void)animateTransition:(id)a0;
- (BOOL)automaticallyForwardAppearanceAndRotationMethodsToChildViewControllers;
- (void)viewWillAppear:(BOOL)a0;
- (BOOL)shouldAutorotateToInterfaceOrientation:(long long)a0;
- (BOOL)shouldAutomaticallyForwardRotationMethods;
- (double)transitionDuration:(id)a0;
- (void)loadView;
- (void)viewDidDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (unsigned long long)supportedInterfaceOrientations;
- (id)init;
- (BOOL)shouldAutomaticallyForwardAppearanceMethods;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;
- (void)animationEnded:(BOOL)a0;
- (void)notifyDelegateOnWillFinish;
- (void)_setupChildViewController;
- (void)_setupRemoteViewController;
- (void)extensionDidFinishWithError:(id)a0;
- (BOOL)shouldShowPlayForTurnBasedMatch;
- (BOOL)shouldShowQuitForTurnBasedMatch;
- (void)checkArcadeStateWithCompletion:(id /* block */)a0;
- (BOOL)shouldShowPlayForChallenge;
- (id)initWithLeaderboardID:(id)a0 playerScope:(long long)a1 timeScope:(long long)a2;
- (id)initWithLeaderboard:(id)a0 playerScope:(long long)a1;
- (id)initWithAchievementID:(id)a0;
- (id)initWithPlayerID:(id)a0 withFriendsList:(BOOL)a1;
- (id)leaderboardCategory;
- (void)setLeaderboardCategory:(id)a0;
- (id)initWithGame:(id)a0 hostPID:(int)a1;
- (void)setViewStateFromExtension:(long long)a0;
- (void)setLeaderboardIdentifierFromExtension:(id)a0;
- (void)setLeaderboardTimeScopeFromExtension:(long long)a0;
- (void)setLeaderboardPlayerScopeFromExtension:(long long)a0;

@end
