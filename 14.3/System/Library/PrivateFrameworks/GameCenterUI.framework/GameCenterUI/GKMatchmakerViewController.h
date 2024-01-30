@class NSString, GKMatchmakerHostViewController, GKMatch, NSMutableArray, UIAlertController, NSObject, GKInvite, GKMatchRequest;
@protocol OS_dispatch_queue, GKMatchmakerViewControllerDelegate;

@interface GKMatchmakerViewController : UINavigationController <GKMatchDelegate, GKMatchDelegatePrivate, GKExtensionParentViewControllerProtocol>

@property (retain, nonatomic) GKMatchmakerHostViewController *remoteViewController;
@property (retain, nonatomic) GKInvite *acceptedInvite;
@property (retain, nonatomic) GKMatch *match;
@property (retain, nonatomic) NSMutableArray *hostedPlayers;
@property (retain, nonatomic) UIAlertController *alertController;
@property (retain, nonatomic) GKMatchRequest *matchRequest;
@property (nonatomic) BOOL userCancelledMatching;
@property (readonly) NSObject<OS_dispatch_queue> *cancellingQueue;
@property (weak, nonatomic) id<GKMatchmakerViewControllerDelegate> matchmakerDelegate;
@property (nonatomic, getter=isHosted) BOOL hosted;
@property (nonatomic) long long matchmakingMode;
@property (copy, nonatomic) NSString *defaultInvitationMessage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)_preventsAppearanceProxyCustomization;

- (void)cancel;
- (void)applicationWillEnterForeground:(id)a0;
- (BOOL)shouldAutorotateToInterfaceOrientation:(long long)a0;
- (void)_setupRemoteViewController;
- (void)finishWithError:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)initWithMatchRequest:(id)a0;
- (void)dealloc;
- (void)sendData:(id)a0;
- (void)setupNotifications;
- (void)inviterCancelledNotification:(id)a0;
- (void)createMatchForAcceptedInvite;
- (void)setConnectingStateForPlayer:(id)a0;
- (void)setHostedPlayer:(id)a0 connected:(BOOL)a1;
- (void)finishWithMatch;
- (void)finishWithPlayers;
- (void)invitedPlayer:(id)a0 responded:(long long)a1;
- (void)localPlayerAcceptedGameInvite:(id)a0;
- (void)cancelPendingInviteToPlayer:(id)a0;
- (void)playersToInvite:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)match:(id)a0 didReceiveData:(id)a1 fromRemotePlayer:(id)a2;
- (void)match:(id)a0 player:(id)a1 didChangeConnectionState:(long long)a2;
- (void)match:(id)a0 didFailWithError:(id)a1;
- (id)initWithInvite:(id)a0;
- (void)setHostedPlayer:(id)a0 didConnect:(BOOL)a1;
- (void)addPlayersToMatch:(id)a0;
- (void)setHostedPlayerReady:(id)a0;
- (void)cancelMatching;
- (void)shareMatchWithRequest:(id)a0 handler:(id /* block */)a1;
- (void)setShareInvitees:(id)a0;
- (void)startMatchingWithRequest:(id)a0;
- (void)setBrowsingForNearbyPlayers:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidLoad;
- (void)_setupChildViewController;
- (void)authenticationChanged:(id)a0;
- (void)extensionDidFinishWithError:(id)a0;

@end
