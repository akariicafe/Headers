@class NSMutableArray, GKPlayer, GKTournamentParticipantHistoricalDataInternal;

@interface GKTournamentParticipantHistoricalData : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) GKTournamentParticipantHistoricalDataInternal *internal;
@property (readonly, nonatomic) GKPlayer *player;
@property (readonly, nonatomic) long long tournamentsPlayed;
@property (readonly, nonatomic) long long highestRank;
@property (readonly, nonatomic) long long latestRank;
@property (readonly, nonatomic) long long averageRank;
@property (readonly, nonatomic) long long bestScore;
@property (readonly, nonatomic) long long latestScore;
@property (readonly, nonatomic) long long averageScore;
@property (readonly, nonatomic) NSMutableArray *historicalRanks;

- (id)init;
- (id)forwardingTargetForSelector:(SEL)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithInternalRepresentation:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
