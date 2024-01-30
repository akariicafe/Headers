@class NSArray, NSString, NSDictionary, NSData;

@interface GKMatchRequestInternal : GKInternalRepresentation

@property (nonatomic) unsigned char minPlayers;
@property (nonatomic) unsigned char maxPlayers;
@property (nonatomic) unsigned char defaultNumberOfPlayers;
@property (nonatomic) unsigned long long playerGroup;
@property (nonatomic) unsigned int playerAttributes;
@property (retain, nonatomic) NSArray *recipients;
@property (retain, nonatomic) NSArray *recipientPlayerIDs;
@property (copy, nonatomic) NSString *inviteMessage;
@property (retain, nonatomic) NSDictionary *localizableInviteMessage;
@property (nonatomic) BOOL restrictToAutomatch;
@property (nonatomic) unsigned long long matchType;
@property (retain, nonatomic) NSData *sessionToken;
@property (retain, nonatomic) NSString *rid;
@property (nonatomic) unsigned int version;
@property (nonatomic, getter=isPreloadedMatch) BOOL preloadedMatch;
@property (retain, nonatomic) NSData *archivedSharePlayInviteeTokensFromProgrammaticInvite;
@property (nonatomic) BOOL isLateJoin;

+ (id)secureCodedPropertyKeys;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (void).cxx_destruct;
- (BOOL)hasGuestPlayers;

@end
