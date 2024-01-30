@class GKInvite;
@protocol GKMultiplayerP2PViewControllerDelegate;

@interface GKMultiplayerP2PViewController : GKMultiplayerViewController

@property (nonatomic) long long mode;
@property (retain, nonatomic) GKInvite *acceptedInvite;
@property (nonatomic) double inviteeConnectionTimeStamp;
@property BOOL userCancelledMatching;
@property BOOL datasourceConfigured;
@property (nonatomic, getter=isHosted) BOOL hosted;
@property (weak, nonatomic) id<GKMultiplayerP2PViewControllerDelegate> delegate;

- (void)applicationWillEnterForeground;
- (void)finishWithError:(id)a0;
- (void)viewDidLoad;
- (void)playNow;
- (void).cxx_destruct;
- (void)configureDataSource;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;
- (BOOL)isInSetupMode;
- (void)cancel;
- (void)updateMode;
- (void)startGameButtonPressed;
- (BOOL)canStartForcedAutomatch;
- (void)setAutomatchPlayerCount:(long long)a0;
- (void)updateStartGameButtonTitle;
- (void)removedPlayer:(id)a0;
- (void)willPresentPlayerPicker:(id)a0;
- (void)sendInvitesToContactPlayers:(id)a0 legacyPlayers:(id)a1;
- (void)setShareInvitees;
- (void)loadShareURLWithCompletion:(id /* block */)a0;
- (void)performActionsForButtonCancelCurrentMatching;
- (long long)automatchParticipantStatus;
- (BOOL)isCanceling;
- (void)setInvitesFailedWithError:(id)a0;
- (void)invitePlayers:(id)a0;
- (BOOL)havePendingPlayers;
- (void)cancelAlertWithoutDelegateCallback;
- (void)showParentalControlsRestrictionAlert;
- (void)cancelPendingInvites;
- (void)updateForNewMode;
- (void)startGame;
- (void)sendStatusUpdate;
- (void)playerConnected:(id)a0;
- (void)playerDisconnected:(id)a0;
- (void)showInviterDisconnectedAlert;
- (void)showAutomatchingErrorAlert;
- (BOOL)haveInvitedPlayers;
- (void)displayCancelConfirmationDialog;
- (void)resetInviteesStatus;
- (void)showMatchDisconnectedAlertForPlayer:(id)a0;
- (id)initWithAcceptedInvite:(id)a0;
- (void)setExistingPlayers:(id)a0;
- (void)setPlayer:(id)a0 responded:(long long)a1;
- (void)setConnectingStateForPlayer:(id)a0;
- (void)setPlayer:(id)a0 connected:(BOOL)a1;
- (void)setPlayer:(id)a0 sentData:(id)a1;
- (void)setAutomatchFailedWithError:(id)a0;
- (void)setFailedWithError:(id)a0;
- (void)inviterCancelled;
- (BOOL)shouldChangeModeFromOldMode:(long long)a0 toNewMode:(long long)a1;
- (void)updateFooterButtonStates;
- (void)incrementOneAutoMatchPlayerCountIfPossible;
- (void)processStatusUpdateMessageFromPlayer:(id)a0 bytes:(const char *)a1 withLength:(unsigned int)a2;
- (void)didUpdateAutoMatchPlayerCount;

@end
