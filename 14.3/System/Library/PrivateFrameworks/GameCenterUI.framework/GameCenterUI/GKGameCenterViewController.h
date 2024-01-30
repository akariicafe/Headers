@class NSString, UIAlertController, GKLeaderboard, GKDashboardHostViewController;
@protocol GKGameCenterControllerDelegate;

@interface GKGameCenterViewController : UINavigationController <GKExtensionParentViewControllerProtocol, UIViewControllerAnimatedTransitioning, UIViewControllerTransitioningDelegate>

@property (retain, nonatomic) GKDashboardHostViewController *remoteViewController;
@property (retain, nonatomic) NSString *leaderboardIdentifier;
@property (retain, nonatomic) GKLeaderboard *leaderboard;
@property (retain, nonatomic) NSString *achievementIdentifier;
@property (retain, nonatomic) UIAlertController *alertController;
@property (retain, nonatomic) NSString *leaderboardCategory;
@property (nonatomic) long long leaderboardTimeScope;
@property (nonatomic) long long leaderboardPlayerScope;
@property (nonatomic) long long viewState;
@property (nonatomic) BOOL isArcade;
@property (nonatomic, getter=isPresenting) BOOL presenting;
@property (weak, nonatomic) id<GKGameCenterControllerDelegate> gameCenterDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)accessInstanceVariablesDirectly;
+ (BOOL)_preventsAppearanceProxyCustomization;

- (id)initWithState:(long long)a0;
- (void)animationEnded:(BOOL)a0;
- (BOOL)shouldShowPlayForTurnBasedMatch;
- (BOOL)shouldShowQuitForTurnBasedMatch;
- (BOOL)shouldAutorotateToInterfaceOrientation:(long long)a0;
- (BOOL)automaticallyForwardAppearanceAndRotationMethodsToChildViewControllers;
- (void)_setupRemoteViewController;
- (id)init;
- (void).cxx_destruct;
- (void)animateTransition:(id)a0;
- (BOOL)shouldAutomaticallyForwardAppearanceMethods;
- (double)transitionDuration:(id)a0;
- (void)dealloc;
- (void)checkArcadeStateWithCompletion:(id /* block */)a0;
- (BOOL)shouldShowPlayForChallenge;
- (BOOL)shouldAutomaticallyForwardRotationMethods;
- (id)initWithLeaderboardID:(id)a0 playerScope:(long long)a1 timeScope:(long long)a2;
- (id)initWithLeaderboard:(id)a0 playerScope:(long long)a1;
- (id)initWithAchievementID:(id)a0;
- (void)setViewStateFromExtension:(long long)a0;
- (void)setLeaderboardIdentifierFromExtension:(id)a0;
- (void)setLeaderboardTimeScopeFromExtension:(long long)a0;
- (void)setLeaderboardPlayerScopeFromExtension:(long long)a0;
- (void)loadView;
- (id)animationControllerForPresentedController:(id)a0 presentingController:(id)a1 sourceController:(id)a2;
- (void)notifyDelegateOnWillFinish;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (id)animationControllerForDismissedController:(id)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (unsigned long long)supportedInterfaceOrientations;
- (void)setLeaderboardCategory:(id)a0;
- (id)leaderboardCategory;
- (void)_setupChildViewController;
- (void)extensionDidFinishWithError:(id)a0;

@end
