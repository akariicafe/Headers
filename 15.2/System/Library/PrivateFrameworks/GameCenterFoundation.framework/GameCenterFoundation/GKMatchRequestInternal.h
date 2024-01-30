@class NSArray, NSString, NSDictionary, NSData, GKTournamentInternal;

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
@property (retain, nonatomic) GKTournamentInternal *tournamentForInvitePool;
@property (nonatomic) unsigned long long matchType;
@property (retain, nonatomic) NSData *sessionToken;
@property (retain, nonatomic) NSString *rid;
@property (nonatomic) unsigned int version;
@property (nonatomic, getter=isPreloadedMatch) BOOL preloadedMatch;

+ (id)secureCodedPropertyKeys;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (unsigned long long)hash;
- (BOOL)hasGuestPlayers;

@end
