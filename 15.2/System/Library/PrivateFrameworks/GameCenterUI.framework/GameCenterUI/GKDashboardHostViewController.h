@class GKGame, NSString, NSObject, GKGameCenterViewController;

@interface GKDashboardHostViewController : GKExtensionRemoteViewController <GKGameCenterDashboardServiceProtocol>

@property (retain, nonatomic) NSObject *dashboardAssetController;
@property (weak, nonatomic) GKGameCenterViewController *delegate;
@property (retain, nonatomic) GKGame *game;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)dashboardExtension;
+ (BOOL)dismissAutomaticallyAfterExtensionCompletion;

- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)messageFromExtension:(id)a0;
- (void)finishWithMatch:(id)a0;
- (void)playerQuitMatch:(id)a0;
- (void)hostDidChangeViewState:(id)a0;
- (void)hostDidChangeLeaderboardIdentifier:(id)a0;
- (void)hostDidChangeLeaderboardTimeScope:(id)a0;
- (void)hostDidChangeLeaderboardPlayerScope:(id)a0;
- (void)extensionIsCanceling;
- (id)extensionObjectProxy;
- (void)extensionIsFinishing;
- (void)playPressedForChallenge:(id)a0;
- (void)hostSupportsShowingPlayForChallenge:(BOOL)a0;
- (void)hostSupportsShowingPlayForTurnBasedMatch:(BOOL)a0;
- (void)hostSupportsShowingQuitForTurnBasedMatch:(BOOL)a0;

@end
