@class NSMutableDictionary, GKTurnBasedMatch;
@protocol GKTurnBasedInviteViewControllerDelegate;

@interface GKTurnBasedInviteViewController : GKMultiplayerViewController

@property (retain, nonatomic) NSMutableDictionary *inviteMessageDictionary;
@property (nonatomic) long long mode;
@property (retain, nonatomic) GKTurnBasedMatch *match;
@property (nonatomic) BOOL deletePreloadedMatch;
@property (readonly, nonatomic, getter=isLoadingOrRemovingPreloadedMatch) BOOL loadingOrRemovingPreloadedMatch;
@property (weak, nonatomic) id<GKTurnBasedInviteViewControllerDelegate> delegate;

- (void)finishWithError:(id)a0;
- (void)viewDidLoad;
- (void)viewWillDisappear:(BOOL)a0;
- (void)playNow;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (BOOL)isInSetupMode;
- (void)cancel;
- (void)startGameButtonPressed;
- (BOOL)canStartForcedAutomatch;
- (void)updateStartGameButtonTitle;
- (void)sendInvitesToContactPlayers:(id)a0 legacyPlayers:(id)a1;
- (void)performActionsForButtonCancelCurrentMatching;
- (void)didInviteContactPlayers;
- (void)didClickCancelForServiceUnavailableAlert;
- (void)handleNewParticipantCount:(long long)a0;
- (long long)automatchParticipantStatus;
- (void)setInvitesFailedWithError:(id)a0;
- (void)invitePlayers:(id)a0;
- (void)removeCurrentMatchAndSetFlagIfNotLoaded:(BOOL)a0 withHandler:(id /* block */)a1;
- (void)cleanupStateForCancelOrErrorWithHandler:(id /* block */)a0;
- (void)finishWithMatchID:(id)a0;
- (void)createGameWithPlayersToInvite:(id)a0 forSharing:(BOOL)a1 handler:(id /* block */)a2;

@end
