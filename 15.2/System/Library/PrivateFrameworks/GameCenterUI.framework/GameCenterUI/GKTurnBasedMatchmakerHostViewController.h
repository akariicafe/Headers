@class GKTurnBasedMatchmakerViewController, NSString, GKGame;

@interface GKTurnBasedMatchmakerHostViewController : GKExtensionRemoteViewController <GKTurnBasedMatchmakerHostProtocol, GKTurnBasedMatchmakerServiceProtocol>

@property (weak, nonatomic) GKTurnBasedMatchmakerViewController *delegate;
@property (retain, nonatomic) GKGame *game;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)turnBasedMatchmakerExtension;
+ (BOOL)dismissAutomaticallyAfterExtensionCompletion;

- (void).cxx_destruct;
- (void)messageFromExtension:(id)a0;
- (void)refreshMatches;
- (void)setShowExistingMatches:(BOOL)a0;
- (void)extensionIsCanceling;
- (id)extensionObjectProxy;
- (void)setMatchRequestInternal:(id)a0;
- (void)setShowPlay:(BOOL)a0;
- (void)setShowQuit:(BOOL)a0;

@end
