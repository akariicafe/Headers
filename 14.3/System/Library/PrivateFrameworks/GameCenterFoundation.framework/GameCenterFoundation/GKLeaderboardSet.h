@class NSString, NSArray, GKLeaderboardSetInternal;

@interface GKLeaderboardSet : NSObject <NSCoding, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *title;
@property (readonly, retain, nonatomic) NSArray *leaderboardIdentifiers;
@property (retain) GKLeaderboardSetInternal *internal;
@property (readonly, nonatomic) NSString *groupIdentifier;
@property (copy, nonatomic) NSString *identifier;

+ (id)instanceMethodSignatureForSelector:(SEL)a0;
+ (BOOL)instancesRespondToSelector:(SEL)a0;
+ (void)loadLeaderboardSetsForGame:(id)a0 withCompletionHandler:(id /* block */)a1;
+ (void)loadLeaderboardSetsWithCompletionHandler:(id /* block */)a0;

- (void)setValue:(id)a0 forUndefinedKey:(id)a1;
- (id)init;
- (id)methodSignatureForSelector:(SEL)a0;
- (id)forwardingTargetForSelector:(SEL)a0;
- (void).cxx_destruct;
- (id)valueForUndefinedKey:(id)a0;
- (BOOL)respondsToSelector:(SEL)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithInternalRepresentation:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void)loadLeaderboardsForGame:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)loadLeaderboardsWithCompletionHandler:(id /* block */)a0;
- (void)loadLeaderboardsForGame:(id)a0 forPlayer:(id)a1 withCompletionHandler:(id /* block */)a2;
- (void)loadLeaderboardsWithHandler:(id /* block */)a0;

@end
