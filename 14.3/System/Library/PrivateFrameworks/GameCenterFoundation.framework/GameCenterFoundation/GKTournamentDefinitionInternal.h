@class NSString, GKRecurrenceRule;

@interface GKTournamentDefinitionInternal : GKInternalRepresentation

@property (retain, nonatomic) NSString *tournamentDefinitionID;
@property (retain, nonatomic) NSString *tournamentName;
@property (nonatomic) long long tournamentNameFormat;
@property (retain, nonatomic) NSString *tournamentDescription;
@property (retain, nonatomic) NSString *tournamentIcon;
@property (nonatomic) long long tournamentType;
@property (nonatomic) long long creationMethod;
@property (nonatomic) long long seedingMethod;
@property (nonatomic) long long participationType;
@property (nonatomic) long long scoringMethod;
@property (nonatomic) long long maxPlayers;
@property (nonatomic) long long minPlayers;
@property (nonatomic) long long maxPlayerShards;
@property (nonatomic) double typicalGameplayDuration;
@property (nonatomic) double tournamentDuration;
@property (nonatomic) double PreRegistrationTime;
@property (retain, nonatomic) GKRecurrenceRule *recurrenceRule;
@property (nonatomic) long long maxReplays;
@property (nonatomic) long long autoTournamentIndex;
@property (retain, nonatomic) NSString *customTournamentName;
@property (nonatomic) long long customTournamentNameFormat;
@property (retain, nonatomic) NSString *customTournamentIcon;
@property (nonatomic) BOOL customTournamentAllowIcon;
@property (nonatomic) long long customSeedingMethods;
@property (nonatomic) long long customScoringMethods;
@property (nonatomic) long long customMaxPlayers;
@property (nonatomic) long long customMinPlayers;
@property (nonatomic) double customTournamentDuration;
@property (nonatomic) long long customMaxReplays;

+ (id)secureCodedPropertyKeys;

- (void).cxx_destruct;

@end
