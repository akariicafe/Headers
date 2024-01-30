@class GKGame, NSString, GKMatchmakerViewController;

@interface GKMatchmakerHostViewController : GKExtensionRemoteViewController <GKMatchmakerHostProtocol, GKMatchmakerServiceProtocol>

@property (weak, nonatomic) GKMatchmakerViewController *delegate;
@property (retain, nonatomic) GKGame *game;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)dismissAutomaticallyAfterExtensionCompletion;
+ (id)matchmakerExtension;

- (void).cxx_destruct;
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
- (void)setAcceptedInviteInternal:(id)a0;
- (void)extensionIsCanceling;
- (id)extensionObjectProxy;
- (void)setNearbyPlayer:(id)a0 reachable:(BOOL)a1;
- (void)shareMatchWithRequest:(id)a0 handler:(id /* block */)a1;
- (void)setMatchmakingMode:(long long)a0;
- (void)setDefaultInvitationMessage:(id)a0;
- (void)setMatchRequestInternal:(id)a0;
- (void)applicationWillEnterForeground;
- (void)messageFromExtension:(id)a0;
- (void)setHosted:(BOOL)a0;

@end
