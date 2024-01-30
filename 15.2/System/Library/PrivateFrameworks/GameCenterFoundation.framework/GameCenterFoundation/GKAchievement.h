@class NSString, GKAchievementInternal, GKGame, NSDate, GKPlayer;

@interface GKAchievement : NSObject <NSCopying, NSCoding, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *playerID;
@property (retain) GKAchievementInternal *internal;
@property (copy, nonatomic) NSDate *lastReportedDate;
@property (nonatomic, getter=isHidden) BOOL hidden;
@property (readonly, copy, nonatomic) NSString *groupIdentifier;
@property (retain, nonatomic) GKGame *game;
@property (copy, nonatomic) NSString *identifier;
@property (nonatomic) double percentComplete;
@property (readonly, nonatomic, getter=isCompleted) BOOL completed;
@property (nonatomic) BOOL showsCompletionBanner;
@property (readonly, nonatomic) GKPlayer *player;

+ (id)instanceMethodSignatureForSelector:(SEL)a0;
+ (BOOL)instancesRespondToSelector:(SEL)a0;
+ (void)loadAchievementsForGameV2:(id)a0 players:(id)a1 includeUnreported:(BOOL)a2 includeHidden:(BOOL)a3 withCompletionHandler:(id /* block */)a4;
+ (void)reportAchievements:(id)a0 whileScreeningChallenges:(BOOL)a1 withEligibleChallenges:(id)a2 withCompletionHandler:(id /* block */)a3;
+ (void)loadAchievementWithID:(id)a0 forGame:(id)a1 players:(id)a2 complete:(id /* block */)a3;
+ (void)loadAchievementsForGameV2:(id)a0 player:(id)a1 includeUnreported:(BOOL)a2 includeHidden:(BOOL)a3 withCompletionHandler:(id /* block */)a4;
+ (void)reportAchievements:(id)a0 withCompletionHandler:(id /* block */)a1;
+ (void)loadAchievementsWithCompletionHandler:(id /* block */)a0;
+ (void)resetAchievementsWithCompletionHandler:(id /* block */)a0;

- (id)valueForUndefinedKey:(id)a0;
- (id)initWithIdentifier:(id)a0;
- (id)playerID;
- (void)setValue:(id)a0 forUndefinedKey:(id)a1;
- (void)encodeWithCoder:(id)a0;
- (id)forwardingTargetForSelector:(SEL)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithInternalRepresentation:(id)a0;
- (unsigned long long)hash;
- (BOOL)respondsToSelector:(SEL)a0;
- (id)_achievementDescription;
- (id)initWithInternalRepresentation:(id)a0 playerID:(id)a1;
- (id)initWithIdentifier:(id)a0 player:(id)a1;
- (id)initWithIdentifier:(id)a0 forPlayer:(id)a1;
- (void)reportAchievementWithCompletionHandler:(id /* block */)a0;

@end
