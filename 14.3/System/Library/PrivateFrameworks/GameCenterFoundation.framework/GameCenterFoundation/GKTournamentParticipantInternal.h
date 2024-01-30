@class NSString, GKPlayerInternal;

@interface GKTournamentParticipantInternal : GKInternalRepresentation

@property (retain, nonatomic) NSString *tournamentID;
@property (retain, nonatomic) GKPlayerInternal *player;
@property (nonatomic) long long score;
@property (nonatomic) long long playerGroup;
@property (nonatomic) long long replayCount;
@property (nonatomic) long long participantState;
@property (nonatomic) BOOL cheatingIndicator;

+ (id)secureCodedPropertyKeys;

- (void).cxx_destruct;

@end
