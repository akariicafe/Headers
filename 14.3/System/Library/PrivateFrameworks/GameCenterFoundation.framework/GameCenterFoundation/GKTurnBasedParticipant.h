@class NSString, GKPlayer, GKTurnBasedParticipantInternal, NSDate;

@interface GKTurnBasedParticipant : NSObject

@property (readonly) GKTurnBasedParticipantInternal *internal;
@property (copy, nonatomic) NSDate *lastTurnDate;
@property (copy, nonatomic) NSDate *timeoutDate;
@property (readonly, nonatomic) NSString *matchStatusString;
@property (readonly, nonatomic) BOOL isWinner;
@property (readonly, nonatomic) GKPlayer *invitedBy;
@property (readonly, nonatomic) NSString *inviteMessage;
@property (readonly, nonatomic) BOOL isLocalPlayer;
@property (readonly, nonatomic) GKPlayer *player;
@property (readonly, nonatomic) long long status;
@property (nonatomic) long long matchOutcome;

+ (id)instanceMethodSignatureForSelector:(SEL)a0;
+ (BOOL)instancesRespondToSelector:(SEL)a0;
+ (id)keyPathsForValuesAffectingStatus;
+ (id)stringForMatchOutcome:(long long)a0 totalParticipant:(long long)a1;
+ (id)keyPathsForValuesAffectingBasicMatchOutcomeString;
+ (id)keyPathsForValuesAffectingMatchOutcomeString;
+ (BOOL)matchOutcomeIsValidForDoneState:(long long)a0;

- (void)setValue:(id)a0 forUndefinedKey:(id)a1;
- (id)playerID;
- (id)init;
- (id)methodSignatureForSelector:(SEL)a0;
- (id)forwardingTargetForSelector:(SEL)a0;
- (void).cxx_destruct;
- (void)setStatus:(long long)a0;
- (id)player;
- (id)valueForUndefinedKey:(id)a0;
- (BOOL)respondsToSelector:(SEL)a0;
- (unsigned long long)hash;
- (id)invitedBy;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithInternalRepresentation:(id)a0;
- (id)lastTurnDate;
- (id)matchOutcomeStringForLocalPlayer:(long long)a0;
- (id)matchOutcomeString:(long long)a0;
- (id)basicMatchOutcomeString:(long long)a0;

@end
