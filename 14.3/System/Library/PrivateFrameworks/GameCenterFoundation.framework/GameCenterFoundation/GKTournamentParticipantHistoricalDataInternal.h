@class NSString, NSMutableArray, GKPlayerInternal;

@interface GKTournamentParticipantHistoricalDataInternal : GKInternalRepresentation

@property (retain, nonatomic) NSString *tournamentDefinitionID;
@property (retain, nonatomic) GKPlayerInternal *player;
@property (nonatomic) long long tournamentsPlayed;
@property (nonatomic) long long highestRank;
@property (nonatomic) long long latestRank;
@property (nonatomic) long long averageRank;
@property (nonatomic) long long bestScore;
@property (nonatomic) long long latestScore;
@property (nonatomic) long long averageScore;
@property (retain, nonatomic) NSMutableArray *historicalRanks;

+ (id)secureCodedPropertyKeys;

- (void).cxx_destruct;

@end
