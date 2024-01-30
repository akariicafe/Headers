@class GKPlayerInternal, NSString, NSDate, NSURL, GKTournamentParticipantInternal, GKLeaderboardInternal, GKTournamentDefinitionInternal, GKScoreInternal;

@interface GKTournamentInternal : GKInternalRepresentation

@property (retain, nonatomic) NSString *tournamentID;
@property (retain, nonatomic) GKTournamentDefinitionInternal *tournamentDefinition;
@property (retain, nonatomic) NSString *tournamentName;
@property (nonatomic) long long maxReplays;
@property (nonatomic) long long minPlayers;
@property (nonatomic) long long maxPlayers;
@property (nonatomic) long long scoringMethod;
@property (nonatomic) double duration;
@property (nonatomic) long long randomSeed;
@property (retain, nonatomic) NSDate *registrationBeginDate;
@property (retain, nonatomic) NSDate *registrationEndDate;
@property (retain, nonatomic) NSDate *tournamentBeginDate;
@property (retain, nonatomic) NSDate *tournamentEndDate;
@property (nonatomic) long long tournamentState;
@property (retain, nonatomic) GKScoreInternal *bestScore;
@property (retain, nonatomic) GKPlayerInternal *winningPlayer;
@property (nonatomic) long long playerCount;
@property (retain, nonatomic) GKTournamentParticipantInternal *localParticipant;
@property (retain, nonatomic) GKLeaderboardInternal *leaderboard;
@property (nonatomic) long long tournamentError;
@property (retain, nonatomic) NSURL *inviteURLForMessages;
@property (nonatomic) long long tournamentNumber;
@property (nonatomic) long long seedingMethod;
@property (retain, nonatomic) GKPlayerInternal *customTournamentCreator;
@property (retain, nonatomic) NSString *nextTournamentID;
@property (retain, nonatomic) NSDate *nextTournamentBeginDate;

+ (id)secureCodedPropertyKeys;
+ (id)defaultCustomTournamentForTournamentDefinition:(id)a0;

- (void).cxx_destruct;

@end
