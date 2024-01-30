@class GKInvite;
@protocol GKMultiplayerP2PViewControllerDelegate;

@interface GKMultiplayerP2PViewController : GKMultiplayerViewController

@property (nonatomic) long long mode;
@property (retain, nonatomic) GKInvite *acceptedInvite;
@property (nonatomic) double inviteeConnectionTimeStamp;
@property BOOL userCancelledMatching;
@property (nonatomic, getter=isHosted) BOOL hosted;
@property (weak, nonatomic) id<GKMultiplayerP2PViewControllerDelegate> delegate;

- (void)cancel;
- (void)finishWithError:(id)a0;
- (void)showParentalControlsRestrictionAlert;
- (void)cancelPendingInvites;
- (void)updateForNewMode;
- (void).cxx_destruct;
- (void)updateStartGameButtonTitle;
- (BOOL)havePendingPlayers;
- (void)dealloc;
- (void)sendStatusUpdate;
- (void)playerConnected:(id)a0;
- (void)playerDisconnected:(id)a0;
- (void)processStatusUpdateMessageFromBytes:(const char *)a0 withLength:(unsigned int)a1;
- (void)showInviterDisconnectedAlert;
- (void)showAutomatchingErrorAlert;
- (BOOL)haveInvitedPlayers;
- (void)displayCancelConfirmationDialog;
- (void)resetInviteesStatus;
- (void)performActionsForButtonCancelCurrentMatching;
- (void)invitePlayers:(id)a0;
- (void)showMatchDisconnectedAlertForPlayer:(id)a0;
- (void)startGameButtonPressed;
- (id)initWithAcceptedInvite:(id)a0;
- (BOOL)isCanceling;
- (long long)automatchParticipantStatus;
- (void)setExistingPlayers:(id)a0;
- (void)setAutomatchPlayerCount:(long long)a0;
- (void)setPlayer:(id)a0 responded:(long long)a1;
- (void)setConnectingStateForPlayer:(id)a0;
- (void)setPlayer:(id)a0 connected:(BOOL)a1;
- (void)setPlayer:(id)a0 sentData:(id)a1;
- (void)setInvitesFailedWithError:(id)a0;
- (void)setAutomatchFailedWithError:(id)a0;
- (void)setFailedWithError:(id)a0;
- (void)inviterCancelled;
- (BOOL)canStartForcedAutomatch;
- (void)setShareInvitees;
- (void)willPresentPlayerPicker:(id)a0;
- (void)loadShareURLWithCompletion:(id /* block */)a0;
- (void)sendInvitesToContactPlayers:(id)a0 legacyPlayers:(id)a1;
- (void)removedPlayer:(id)a0;
- (void)configureDataSource;
- (void)playNow;
- (void)startGame;
- (void)viewDidAppear:(BOOL)a0;
- (void)applicationWillEnterForeground;
- (void)cancelAlertWithoutDelegateCallback;
- (void)viewDidLoad;
- (BOOL)isInSetupMode;

@end
