@class NSString, NSDate, GKPlayerInternal;

@interface GKTurnBasedParticipantInternal : GKInternalRepresentation

@property (readonly, nonatomic) NSString *playerID;
@property (retain, nonatomic) NSString *sessionID;
@property (retain, nonatomic) GKPlayerInternal *player;
@property (retain, nonatomic) GKPlayerInternal *invitedBy;
@property (retain, nonatomic) NSString *inviteMessage;
@property (retain, nonatomic) NSString *status;
@property (retain, nonatomic) NSDate *lastTurnDate;
@property (retain, nonatomic) NSDate *timeoutDate;
@property (nonatomic) unsigned int matchOutcome;
@property (nonatomic) unsigned char slot;
@property (readonly, nonatomic) BOOL isAutomatchParticipant;

+ (id)secureCodedPropertyKeys;

- (void)dealloc;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (BOOL)isAutomatchParticipant;
- (id)serverRepresentation;
- (id)descriptionSubstitutionMap;

@end
