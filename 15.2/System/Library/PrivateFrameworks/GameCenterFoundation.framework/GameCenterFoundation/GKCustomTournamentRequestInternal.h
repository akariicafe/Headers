@class NSString, GKTournamentDefinitionInternal, GKPlayerInternal, NSDate;

@interface GKCustomTournamentRequestInternal : GKInternalRepresentation

@property (retain, nonatomic) GKTournamentDefinitionInternal *tournamentDefinition;
@property (retain, nonatomic) GKPlayerInternal *tournamentCreator;
@property (retain, nonatomic) NSString *tournamentName;
@property (retain, nonatomic) NSString *icon;
@property (nonatomic) long long seedingMethod;
@property (nonatomic) long long scoringMethod;
@property (nonatomic) long long maxPlayers;
@property (nonatomic) long long minPlayers;
@property (nonatomic) double duration;
@property (retain, nonatomic) NSDate *startTime;
@property (nonatomic) long long maxReplays;
@property (nonatomic) BOOL isCreatorInTournament;

+ (id)secureCodedPropertyKeys;
+ (id)customTournamentRequestWithTournamentDefinition:(id)a0 player:(id)a1;

- (void).cxx_destruct;

@end
