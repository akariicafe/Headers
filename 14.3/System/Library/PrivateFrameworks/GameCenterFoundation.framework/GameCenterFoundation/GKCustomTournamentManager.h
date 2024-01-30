@class GKTournament, GKPlayer;

@interface GKCustomTournamentManager : NSObject <GKCustomTournamentDelegate>

@property (weak, nonatomic) GKTournament *tournament;
@property (retain, nonatomic) GKPlayer *creator;

- (void).cxx_destruct;
- (void)addInvitees:(id)a0 completionHandler:(id /* block */)a1;
- (void)removeInvitees:(id)a0 completionHandler:(id /* block */)a1;
- (void)addCreator:(id)a0 completionHandler:(id /* block */)a1;
- (void)removeCreator:(id)a0 completionHandler:(id /* block */)a1;
- (void)acceptInvitationWithCompletionHandler:(id /* block */)a0;
- (void)declineInvitationWithCompletionHandler:(id /* block */)a0;

@end
