@class NSDate, GKTournamentParticipant, NSString, NSURL, GKTournamentDefinition, GKTournamentInternal, GKScore, GKPlayer, GKLeaderboard, NSObject;
@protocol GKCustomTournamentDelegate;

@interface GKTournament : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) GKTournamentInternal *internal;
@property (readonly, nonatomic) NSString *tournamentID;
@property (readonly, nonatomic) NSString *nextTournamentID;
@property (readonly, nonatomic) NSDate *nextTournamentBeginDate;
@property (retain, nonatomic) GKTournamentDefinition *tournamentDefinition;
@property (retain, nonatomic) GKScore *bestScore;
@property (retain, nonatomic) GKPlayer *winningPlayer;
@property (retain, nonatomic) GKTournamentParticipant *localParticipant;
@property (retain, nonatomic) GKLeaderboard *leaderboard;
@property (retain, nonatomic) NSObject<GKCustomTournamentDelegate> *customTournamentDelegate;
@property (retain, nonatomic) NSURL *inviteURLForMessages;
@property (readonly, nonatomic) NSString *tournamentName;
@property (readonly, nonatomic) BOOL registrationOpen;
@property (readonly, nonatomic) long long maxReplays;
@property (readonly, nonatomic) long long minPlayers;
@property (readonly, nonatomic) long long maxPlayers;
@property (readonly, nonatomic) long long scoringMethod;
@property (readonly, nonatomic) double duration;
@property (readonly, nonatomic) long long randomSeed;
@property (readonly, nonatomic) NSDate *registrationBeginDate;
@property (readonly, nonatomic) NSDate *registrationEndDate;
@property (readonly, nonatomic) NSDate *tournamentBeginDate;
@property (readonly, nonatomic) NSDate *tournamentEndDate;
@property (readonly, nonatomic) long long tournamentState;
@property (readonly, nonatomic) long long playerCount;
@property (readonly, nonatomic) long long tournamentError;

+ (id)defaultCustomTournamentForTournamentDefinition:(id)a0;
+ (void)loadTournamentWithID:(id)a0 completionHandler:(id /* block */)a1;
+ (void)resetTournamentDataForTournamentsWithTournamentDefinitionIdentifier:(id)a0 completionHandler:(id /* block */)a1;
+ (void)lookForAcceptedCustomTournament;
+ (void)notifyPlayerForTournament:(id)a0 completionHandler:(id /* block */)a1;

- (void)encodeWithCoder:(id)a0;
- (id)forwardingTargetForSelector:(SEL)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)initWithInternalRepresentation:(id)a0;
- (void)updateWithCompletionHandler:(id /* block */)a0;
- (void)addInvitees:(id)a0 completionHandler:(id /* block */)a1;
- (void)removeInvitees:(id)a0 completionHandler:(id /* block */)a1;
- (void)addCreator:(id)a0 completionHandler:(id /* block */)a1;
- (void)removeCreator:(id)a0 completionHandler:(id /* block */)a1;
- (void)acceptInvitationWithCompletionHandler:(id /* block */)a0;
- (void)declineInvitationWithCompletionHandler:(id /* block */)a0;
- (void)loadParticipantsWithRequest:(id)a0 completionHandler:(id /* block */)a1;
- (void)reportScore:(long long)a0 withTryToken:(id)a1 completionHandler:(id /* block */)a2;
- (void)reportProgressScore:(long long)a0 withTryToken:(id)a1 completionHandler:(id /* block */)a2;
- (void)registerPlayerInGroup:(long long)a0 completionHandler:(id /* block */)a1;
- (void)resignFromTournamentWithCompletionHandler:(id /* block */)a0;
- (void)beginPlayWithCompletionHandler:(id /* block */)a0;
- (void)resumePlayWithTryToken:(id)a0 completionHandler:(id /* block */)a1;
- (void)getTotalPlayerCountForGroup:(long long)a0 completionHandler:(id /* block */)a1;
- (void)getFriendCountForGroup:(long long)a0 completionHandler:(id /* block */)a1;
- (void)getLocalParticipantWithCompletionHandler:(id /* block */)a0;
- (void)getTournamentStateWithCompletionHandler:(id /* block */)a0;
- (void)loadScoresWithScope:(long long)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 completionHandler:(id /* block */)a2;
- (void)verifyPlayerForMatchmaking:(id)a0 completionHandler:(id /* block */)a1;
- (void)getShareURLWithCompletionHandler:(id /* block */)a0;

@end
