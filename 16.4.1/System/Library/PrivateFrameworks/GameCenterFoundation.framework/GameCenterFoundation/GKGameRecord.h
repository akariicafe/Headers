@class NSString, GKPlayer, GKGameRecordInternal, NSDate;

@interface GKGameRecord : GKGame

@property (readonly, retain) GKGameRecordInternal *internal;
@property (retain, nonatomic) GKPlayer *player;
@property (readonly, nonatomic) BOOL played;
@property (readonly, nonatomic) NSDate *lastPlayedDate;
@property (readonly, nonatomic) NSDate *purchaseDate;
@property (readonly, nonatomic) BOOL supportsAchievements;
@property (readonly, nonatomic) unsigned long long numberOfAchievements;
@property (readonly, nonatomic) unsigned long long achievements;
@property (readonly, nonatomic) unsigned long long maxAchievements;
@property (readonly, nonatomic) unsigned long long achievementPoints;
@property (readonly, nonatomic) unsigned long long maxAchievementPoints;
@property (readonly, nonatomic) BOOL supportsLeaderboards;
@property (readonly, nonatomic) unsigned long long numberOfLeaderboards;
@property (readonly, nonatomic) unsigned long long numberOfCategories;
@property (readonly, nonatomic) unsigned long long rank;
@property (readonly, nonatomic) unsigned long long maxRank;
@property (readonly, nonatomic) unsigned long long friendRank;
@property (readonly, nonatomic) unsigned long long maxFriendRank;
@property (readonly, nonatomic) BOOL supportsLeaderboardSets;
@property (readonly, nonatomic) unsigned long long numberOfLeaderboardSets;
@property (readonly, nonatomic) NSString *defaultLeaderboardIdentifier;
@property (readonly, nonatomic) BOOL isArcadeGame;
@property (readonly, nonatomic) BOOL supportsChallenges;

+ (BOOL)supportsSecureCoding;
+ (void)invalidateCaches;
+ (id)gameRecordForPlayer:(id)a0 game:(id)a1;
+ (void)invalidateCacheForPlayer:(id)a0 game:(id)a1;
+ (id)cacheKeyForPlayer:(id)a0 bundleIdentifier:(id)a1;
+ (id)cacheKeyForPlayer:(id)a0 game:(id)a1;
+ (id)cacheKeyForPlayer:(id)a0 internal:(id)a1;
+ (id)internalRepresentationCache;
+ (id)internalRepresentationForPlayer:(id)a0 game:(id)a1;
+ (void)loadGameRecordForPlayer:(id)a0 game:(id)a1 withCompletionHandler:(id /* block */)a2;
+ (void)loadGameRecordsForPlayer:(id)a0 bundleIDs:(id)a1 withCompletionHandler:(id /* block */)a2;
+ (void)loadGameRecordsForPlayer:(id)a0 games:(id)a1 withCompletionHandler:(id /* block */)a2;
+ (void)partitionGameRecords:(id)a0 returniOS:(id *)a1 returnMac:(id *)a2;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)initWithInternalRepresentation:(id)a0;
- (id)initWithInternalRepresentation:(id)a0 player:(id)a1;

@end
