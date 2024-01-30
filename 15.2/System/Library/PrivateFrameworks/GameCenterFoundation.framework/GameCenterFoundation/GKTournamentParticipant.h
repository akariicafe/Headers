@class GKTournamentParticipantInternal, GKPlayer;

@interface GKTournamentParticipant : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) GKTournamentParticipantInternal *internal;
@property (retain, nonatomic) GKPlayer *player;
@property (readonly, nonatomic) long long score;
@property (readonly, nonatomic) long long playerGroup;
@property (readonly, nonatomic) long long replayCount;
@property (readonly, nonatomic) long long participantState;
@property (readonly, nonatomic) BOOL cheatingIndicator;

- (void)encodeWithCoder:(id)a0;
- (id)forwardingTargetForSelector:(SEL)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)initWithInternalRepresentation:(id)a0;

@end
