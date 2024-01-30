@class GKTurnBasedMatchmakerViewController, NSString, GKGame;

@interface GKTurnBasedMatchmakerHostViewController : GKExtensionRemoteViewController <GKTurnBasedMatchmakerHostProtocol, GKTurnBasedMatchmakerServiceProtocol>

@property (weak, nonatomic) GKTurnBasedMatchmakerViewController *delegate;
@property (retain, nonatomic) GKGame *game;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)dismissAutomaticallyAfterExtensionCompletion;
+ (id)turnBasedMatchmakerExtension;

- (void)setShowExistingMatches:(BOOL)a0;
- (void).cxx_destruct;
- (void)setShowPlay:(BOOL)a0;
- (void)extensionIsCanceling;
- (id)extensionObjectProxy;
- (void)setShowQuit:(BOOL)a0;
- (void)setMatchRequestInternal:(id)a0;
- (void)messageFromExtension:(id)a0;
- (void)refreshMatches;

@end
