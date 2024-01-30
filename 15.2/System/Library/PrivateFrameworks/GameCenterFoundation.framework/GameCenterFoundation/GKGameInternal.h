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

- (void)setValid:(BOOL)a0;
- (void)setSupportsMultiplayer:(BOOL)a0;
- (id)description;
- (unsigned int)flags;
- (id)defaultCategory;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (BOOL)supportsMultiplayer;
- (unsigned short)numberOfCategories;
- (unsigned long long)hash;
- (void)setFlags:(unsigned int)a0;
- (BOOL)supportsLeaderboards;
- (BOOL)supportsAchievements;
- (BOOL)supportsChallenges;
- (BOOL)supportsLeaderboardSets;
- (BOOL)isArcadeGame;
- (id)serverRepresentation;
- (BOOL)supportsTurnBasedMultiplayer;
- (void)setSupportsChallenges:(BOOL)a0;
- (void)setPrerendered:(BOOL)a0;
- (void)setSupportsLeaderboards:(BOOL)a0;
- (void)setSupportsLeaderboardSets:(BOOL)a0;
- (void)setSupportsAchievements:(BOOL)a0;
- (void)setSupportsTurnBasedMultiplayer:(BOOL)a0;
- (void)setIsArcadeGame:(BOOL)a0;

@end
