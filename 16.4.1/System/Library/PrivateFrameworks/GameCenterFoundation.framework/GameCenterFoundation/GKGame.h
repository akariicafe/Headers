@class GKGameInternal, NSString, NSDictionary, GKStoreItemInternal, NSNumber, GKGameDescriptor;

@interface GKGame : NSObject <NSCoding, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) GKGameInternal *internal;
@property long long environment;
@property (nonatomic, getter=isPrerendered) BOOL prerendered;
@property (readonly, nonatomic) NSDictionary *gameDescriptorDictionary;
@property (readonly, nonatomic) GKGameDescriptor *gameDescriptor;
@property (readonly, nonatomic) NSNumber *adamID;
@property (readonly, nonatomic) NSNumber *externalVersion;
@property (readonly, nonatomic) NSString *bundleIdentifier;
@property (readonly, nonatomic) NSString *bundleVersion;
@property (readonly, nonatomic) NSString *shortBundleVersion;
@property (readonly, nonatomic) NSString *cacheKey;
@property (nonatomic) long long platform;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *defaultCategory;
@property (retain, nonatomic) GKStoreItemInternal *storeItem;
@property (readonly, nonatomic) struct GKGameInfo { BOOL x0; BOOL x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; BOOL x6; BOOL x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; unsigned long long x11; } gameInfo;
@property (readonly, nonatomic) BOOL supportsMultiplayer;
@property (readonly, nonatomic) BOOL supportsTurnBasedMultiplayer;
@property (readonly, nonatomic, getter=isInstalled) BOOL installedGame;

+ (BOOL)isFirstParty;
+ (BOOL)instancesRespondToSelector:(SEL)a0;
+ (id)instanceMethodSignatureForSelector:(SEL)a0;
+ (id)currentGame;
+ (BOOL)isAppStore;
+ (BOOL)isContacts;
+ (BOOL)isGameCenter;
+ (BOOL)isPreferences;
+ (BOOL)isRemoteAlert;
+ (void)loadGamesWithBundleIDs:(id)a0 withCompletionHandler:(id /* block */)a1;
+ (void)setCurrentGameFromInternal:(id)a0 serverEnvironment:(long long)a1;
+ (id)currentGameIncludingGameCenter:(BOOL)a0;
+ (id)createNonStaticCurrentGame;
+ (void)loadTopGamesWithCompletionHandler:(id /* block */)a0;
+ (void)updateGames:(id)a0 withCompletionHandler:(id /* block */)a1;

- (void)setValue:(id)a0 forUndefinedKey:(id)a1;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)forwardingTargetForSelector:(SEL)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isDaemon;
- (BOOL)respondsToSelector:(SEL)a0;
- (BOOL)isSpringBoard;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)valueForUndefinedKey:(id)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)initWithInternalRepresentation:(id)a0;
- (void)getFriendPlayersForAchievement:(id)a0 handler:(id /* block */)a1;
- (BOOL)isAppStore;
- (BOOL)isContacts;
- (BOOL)isGameCenter;
- (BOOL)isGameControllerDaemon;
- (BOOL)isInternalTestApp;
- (void)getFriendPlayersForLeaderboard:(id)a0 handler:(id /* block */)a1;
- (void)getFriendPlayersIncludingCompatibleGames:(BOOL)a0 handler:(id /* block */)a1;
- (BOOL)isStoreItemUnexpired;
- (void)loadGameRatingWithCompletionHandler:(id /* block */)a0;
- (void)submitRating:(float)a0 withCompletionHandler:(id /* block */)a1;

@end
