@interface GKTournamentPlayerStandingsInternal : GKInternalRepresentation

@property (nonatomic) long long score;
@property (nonatomic) long long topScore;
@property (nonatomic) long long friendRank;
@property (nonatomic) long long friendCount;
@property (nonatomic) long long globalRank;
@property (nonatomic) long long globalPlayerCount;
@property (nonatomic) long long replayCount;
@property (nonatomic) long long participantState;

+ (id)secureCodedPropertyKeys;

@end
