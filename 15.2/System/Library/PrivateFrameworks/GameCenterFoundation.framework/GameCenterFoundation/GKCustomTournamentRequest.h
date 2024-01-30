@class NSString, GKPlayer, GKCustomTournamentRequestInternal, GKTournamentDefinition, NSDate;

@interface GKCustomTournamentRequest : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) GKCustomTournamentRequestInternal *internal;
@property (readonly, nonatomic) GKTournamentDefinition *tournamentDefinition;
@property (readonly, nonatomic) GKPlayer *tournamentCreator;
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

- (void)encodeWithCoder:(id)a0;
- (id)forwardingTargetForSelector:(SEL)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithInternalRepresentation:(id)a0;
- (id)initWithTournamentDefinition:(id)a0 andCreator:(id)a1;
- (void)createTournamentWithCompletionHandler:(id /* block */)a0;

@end
