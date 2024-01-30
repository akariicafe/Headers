@class NSArray, NSString, GKMatchRequestInternal;

@interface GKMatchRequest : NSObject <GKReportable>

@property (retain) GKMatchRequestInternal *internal;
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

+ (BOOL)instancesRespondToSelector:(SEL)a0;
+ (id)instanceMethodSignatureForSelector:(SEL)a0;
+ (unsigned long long)maxPlayersAllowedForMatchOfType:(unsigned long long)a0;
+ (id)reportableKeyPaths;

- (void)setValue:(id)a0 forUndefinedKey:(id)a1;
- (id)forwardingTargetForSelector:(SEL)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)respondsToSelector:(SEL)a0;
- (BOOL)isEqual:(id)a0;
- (void)setRecipients:(id)a0;
- (id)recipients;
- (unsigned long long)hash;
- (id)valueForUndefinedKey:(id)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)initWithInternalRepresentation:(id)a0;
- (BOOL)defaultNumberOfPlayersIsValid;
- (id)guestPlayers;
- (id)inviteMessage;
- (BOOL)isIncorrectlyInvitingPlayers;
- (BOOL)isTurnBasedValid;
- (BOOL)isValidForHosted:(BOOL)a0;
- (void)loadRecipientsWithCompletionHandler:(id /* block */)a0;
- (void)removeLocalPlayerFromPlayersToInvite;
- (void)setInviteMessage:(id)a0;
- (void)setPlayersToInvite:(id)a0;
- (BOOL)isValidWithMax:(unsigned long long)a0;
- (id)playersToInvite;
- (void)ensureValidityHosted:(BOOL)a0;
- (BOOL)isConfiguredForAutomatchOnly;
- (BOOL)isRecipientCountValid;

@end
