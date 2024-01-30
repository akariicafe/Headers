@class GKStoreItemInternal, NSString, NSDictionary, NSSet, GKGameDescriptor;

@interface GKGameInternal : GKGameDescriptor {
    union { struct { unsigned char _platform_unused : 8; unsigned char _prerendered : 1; unsigned char _supportsLeaderboards : 1; unsigned char _supportsLeaderboardSets : 1; unsigned char _hasAggregateLeaderboard : 1; unsigned char _supportsAchievements : 1; unsigned char _supportsMultiplayer : 1; unsigned char _valid : 1; unsigned char _unused : 1; unsigned char _supportsTurnBasedMultiplayer : 1; unsigned char _isArcadeGame : 1; unsigned char _supportsChallenges : 1; unsigned short _reserved : 13; } ; unsigned int _value; } _flags;
}

@property (nonatomic) unsigned int flags;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSDictionary *icons;
@property (nonatomic, getter=isPrerendered) BOOL prerendered;
@property (nonatomic) BOOL supportsLeaderboards;
@property (nonatomic) BOOL hasAggregateLeaderboard;
@property (nonatomic) unsigned short numberOfLeaderboards;
@property (retain, nonatomic) NSString *defaultLeaderboardIdentifier;
@property (nonatomic) BOOL supportsLeaderboardSets;
@property (nonatomic) unsigned short numberOfLeaderboardSets;
@property (nonatomic) BOOL supportsAchievements;
@property (nonatomic) unsigned short numberOfAchievements;
@property (nonatomic) unsigned short maxAchievementPoints;
@property (nonatomic) BOOL supportsMultiplayer;
@property (nonatomic) BOOL supportsTurnBasedMultiplayer;
@property (retain, nonatomic) NSSet *compatiblePlatforms;
@property (readonly, nonatomic) BOOL canBeIndexed;
@property (nonatomic, getter=isValid) BOOL valid;
@property (retain, nonatomic) GKStoreItemInternal *storeItem;
@property (readonly, nonatomic) GKGameDescriptor *gameDescriptor;
@property (nonatomic) BOOL isArcadeGame;
@property (nonatomic) BOOL supportsChallenges;

+ (id)secureCodedPropertyKeys;
+ (id)createGameControllerDaemonGameInternal;
+ (id)createGamedGameInternal;

- (void)setSupportsMultiplayer:(BOOL)a0;
- (BOOL)supportsMultiplayer;
- (void)setValid:(BOOL)a0;
- (void)setFlags:(unsigned int)a0;
- (id)defaultCategory;
- (unsigned int)flags;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (unsigned short)numberOfCategories;
- (BOOL)isArcadeGame;
- (BOOL)supportsAchievements;
- (BOOL)supportsChallenges;
- (BOOL)supportsLeaderboardSets;
- (BOOL)supportsLeaderboards;
- (void)setPrerendered:(BOOL)a0;
- (id)serverRepresentation;
- (void)setIsArcadeGame:(BOOL)a0;
- (void)setSupportsAchievements:(BOOL)a0;
- (void)setSupportsChallenges:(BOOL)a0;
- (void)setSupportsLeaderboardSets:(BOOL)a0;
- (void)setSupportsLeaderboards:(BOOL)a0;
- (void)setSupportsTurnBasedMultiplayer:(BOOL)a0;
- (BOOL)supportsTurnBasedMultiplayer;

@end
