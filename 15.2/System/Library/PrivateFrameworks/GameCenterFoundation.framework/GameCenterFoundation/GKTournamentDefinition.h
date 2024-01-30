@class NSString, GKTournamentDefinitionInternal, GKRecurrenceRule;

@interface GKTournamentDefinition : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) GKTournamentDefinitionInternal *internal;
@property (readonly, nonatomic) NSString *tournamentDefinitionID;
@property (readonly, nonatomic) NSString *tournamentName;
@property (readonly, nonatomic) long long tournamentNameFormat;
@property (readonly, nonatomic) NSString *tournamentDescription;
@property (readonly, nonatomic) NSString *tournamentIcon;
@property (readonly, nonatomic) NSString *customTournamentName;
@property (readonly, nonatomic) long long customTournamentNameFormat;
@property (readonly, nonatomic) NSString *customTournamentIcon;
@property (readonly, nonatomic) BOOL customTournamentAllowIcon;
@property (readonly, nonatomic) long long tournamentType;
@property (readonly, nonatomic) long long creationMethod;
@property (readonly, nonatomic) long long seedingMethod;
@property (readonly, nonatomic) long long customSeedingMethods;
@property (readonly, nonatomic) long long participationType;
@property (readonly, nonatomic) long long scoringMethod;
@property (readonly, nonatomic) long long customScoringMethods;
@property (readonly, nonatomic) long long maxPlayers;
@property (readonly, nonatomic) long long minPlayers;
@property (readonly, nonatomic) long long customMaxPlayers;
@property (readonly, nonatomic) long long customMinPlayers;
@property (readonly, nonatomic) long long maxPlayerShards;
@property (readonly, nonatomic) double typicalGameplayDuration;
@property (readonly, nonatomic) double tournamentDuration;
@property (readonly, nonatomic) double customTournamentDuration;
@property (readonly, nonatomic) double PreRegistrationTime;
@property (readonly, nonatomic) GKRecurrenceRule *recurrenceRule;
@property (readonly, nonatomic) long long maxReplays;
@property (readonly, nonatomic) long long customMaxReplays;

+ (void)loadTournamentDefinitionsWithCompletionHandler:(id /* block */)a0;
+ (void)loadTournamentDefinitionWithID:(id)a0 completionHandler:(id /* block */)a1;

- (void)encodeWithCoder:(id)a0;
- (id)forwardingTargetForSelector:(SEL)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)initWithInternalRepresentation:(id)a0;
- (void)loadTournamentsWithPredicate:(id)a0 completionHandler:(id /* block */)a1;
- (id)scoringMethodDescription;
- (id)seedingMethodDescription;
- (id)creationMethodDescription;
- (id)tournamentTypeDescription;
- (id)participationTypeDescription;
- (id)proposedNextCustomTournamentStartDate;
- (void)loadHistoricalDataForPlayer:(id)a0 completionHandler:(id /* block */)a1;

@end
