@class GKTournamentPlayerStandingsInternal;

@interface GKTournamentPlayerStandings : NSObject

@property (retain) GKTournamentPlayerStandingsInternal *internal;
@property (readonly, nonatomic) long long score;
@property (readonly, nonatomic) long long topScore;
@property (readonly, nonatomic) long long friendRank;
@property (readonly, nonatomic) long long friendCount;
@property (readonly, nonatomic) long long globalRank;
@property (readonly, nonatomic) long long globalPlayerCount;
@property (readonly, nonatomic) long long replayCount;

- (id)init;
- (id)forwardingTargetForSelector:(SEL)a0;
- (void).cxx_destruct;
- (id)initWithInternalRepresentation:(id)a0;

@end
