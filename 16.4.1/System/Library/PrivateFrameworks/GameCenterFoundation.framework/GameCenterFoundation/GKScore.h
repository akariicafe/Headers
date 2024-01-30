@class NSString, GKGame, GKPlayer, GKScoreInternal, NSDate;

@interface GKScore : NSObject <NSCopying, NSCoding, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *category;
@property (retain) GKScoreInternal *internal;
@property (readonly, retain) NSString *playerID;
@property (nonatomic) long long rank;
@property (copy, nonatomic) NSString *formattedValue;
@property (retain, nonatomic) NSString *groupLeaderboardIdentifier;
@property BOOL valueSet;
@property (retain, nonatomic) GKGame *game;
@property (nonatomic) long long value;
@property (copy, nonatomic) NSString *leaderboardIdentifier;
@property (nonatomic) unsigned long long context;
@property (readonly, retain, nonatomic) NSDate *date;
@property (readonly, retain, nonatomic) GKPlayer *player;
@property (nonatomic) BOOL shouldSetDefaultLeaderboard;

+ (BOOL)instancesRespondToSelector:(SEL)a0;
+ (id)instanceMethodSignatureForSelector:(SEL)a0;
+ (void)reportScores:(id)a0 whileScreeningChallenges:(BOOL)a1 withEligibleChallenges:(id)a2 withCompletionHandler:(id /* block */)a3;
+ (void)reportScores:(id)a0 withCompletionHandler:(id /* block */)a1;

- (void)setValue:(id)a0 forUndefinedKey:(id)a1;
- (void)encodeWithCoder:(id)a0;
- (id)playerID;
- (id)initWithCoder:(id)a0;
- (id)initWithCategory:(id)a0;
- (id)forwardingTargetForSelector:(SEL)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)respondsToSelector:(SEL)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)valueForUndefinedKey:(id)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)initWithInternalRepresentation:(id)a0;
- (id)initWithInternalRepresentation:(id)a0 playerID:(id)a1;
- (id)initWithInternalRepresentation:(id)a0 playerInternal:(id)a1;
- (id)initWithLeaderboardIdentifier:(id)a0;
- (id)initWithLeaderboardIdentifier:(id)a0 forPlayer:(id)a1;
- (id)initWithLeaderboardIdentifier:(id)a0 player:(id)a1;
- (void)reportScoreWithCompletionHandler:(id /* block */)a0;

@end
