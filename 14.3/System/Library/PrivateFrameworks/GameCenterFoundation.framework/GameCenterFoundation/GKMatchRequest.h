@class NSArray, NSString, GKTournament, GKMatchRequestInternal;

@interface GKMatchRequest : NSObject

@property (retain) GKMatchRequestInternal *internal;
@property (retain) GKTournament *tournamentForInvitePool;
@property unsigned long long minPlayers;
@property unsigned long long maxPlayers;
@property unsigned long long playerGroup;
@property unsigned int playerAttributes;
@property (retain) NSArray *recipients;
@property (copy) NSString *inviteMessage;
@property unsigned long long defaultNumberOfPlayers;
@property BOOL restrictToAutomatch;
@property (copy) id /* block */ recipientResponseHandler;
@property (copy) id /* block */ inviteeResponseHandler;
@property (retain) NSArray *playersToInvite;

+ (id)instanceMethodSignatureForSelector:(SEL)a0;
+ (BOOL)instancesRespondToSelector:(SEL)a0;
+ (unsigned long long)maxPlayersAllowedForMatchOfType:(unsigned long long)a0;

- (void)setValue:(id)a0 forUndefinedKey:(id)a1;
- (id)recipients;
- (id)init;
- (BOOL)isIncorrectlyInvitingPlayers;
- (id)methodSignatureForSelector:(SEL)a0;
- (BOOL)isValidForHosted:(BOOL)a0;
- (id)forwardingTargetForSelector:(SEL)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)guestPlayers;
- (void)setRecipients:(id)a0;
- (id)valueForUndefinedKey:(id)a0;
- (BOOL)respondsToSelector:(SEL)a0;
- (unsigned long long)hash;
- (id)description;
- (void)removeLocalPlayerFromPlayersToInvite;
- (void)setPlayersToInvite:(id)a0;
- (void)loadRecipientsWithCompletionHandler:(id /* block */)a0;
- (void)setInviteMessage:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithInternalRepresentation:(id)a0;
- (BOOL)isTurnBasedValid;
- (id)inviteMessage;
- (BOOL)defaultNumberOfPlayersIsValid;
- (BOOL)isValidWithMax:(unsigned long long)a0;
- (BOOL)isConfiguredForAutomatchOnly;
- (void)ensureValidityHosted:(BOOL)a0;
- (BOOL)isRecipientCountValid;
- (id)playersToInvite;

@end
