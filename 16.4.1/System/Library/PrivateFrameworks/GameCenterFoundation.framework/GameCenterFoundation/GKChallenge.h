@class NSString, NSOrderedSet, GKGame, GKChallengeInternal, GKPlayer, NSDate;

@interface GKChallenge : NSObject <NSCoding, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) GKChallengeInternal *internal;
@property (readonly, copy, nonatomic) NSString *challengeID;
@property (readonly, copy, nonatomic) NSString *bundleID;
@property (readonly, copy, nonatomic) NSOrderedSet *compatibleBundleIDs;
@property (readonly, nonatomic) GKGame *game;
@property (readonly, nonatomic) BOOL detailsLoaded;
@property (readonly, copy, nonatomic) GKPlayer *issuingPlayer;
@property (readonly, copy, nonatomic) GKPlayer *receivingPlayer;
@property (readonly, nonatomic) long long state;
@property (readonly, retain, nonatomic) NSDate *issueDate;
@property (readonly, retain, nonatomic) NSDate *completionDate;
@property (readonly, copy, nonatomic) NSString *message;

+ (id)stringForState:(long long)a0;
+ (BOOL)instancesRespondToSelector:(SEL)a0;
+ (id)instanceMethodSignatureForSelector:(SEL)a0;
+ (id)challengeForGame:(id)a0 andPlayer:(id)a1 withAchievement:(id)a2;
+ (id)challengeForGame:(id)a0 andPlayer:(id)a1 withScore:(id)a2;
+ (id)challengeForInternalRepresentation:(id)a0;
+ (void)loadReceivedPendingChallengesWithCompletionHandler:(id /* block */)a0;
+ (void)getCountOfChallenges:(id /* block */)a0;
+ (void)loadChallengesForGame:(id)a0 receivingPlayer:(id)a1 withCompletionHandler:(id /* block */)a2;
+ (void)loadChallengesForReceivingPlayer:(id)a0 withCompletionHandler:(id /* block */)a1;
+ (void)loadReceivedChallengesWithCompletionHandler:(id /* block */)a0;

- (void)setValue:(id)a0 forUndefinedKey:(id)a1;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)forwardingTargetForSelector:(SEL)a0;
- (BOOL)respondsToSelector:(SEL)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)valueForUndefinedKey:(id)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (void).cxx_destruct;
- (id)initWithInternalRepresentation:(id)a0;
- (id)game;
- (void)decline;
- (void)issueToPlayers:(id)a0 message:(id)a1;
- (id)issuingPlayer;
- (void)loadDetailsWithCompletionHandler:(id /* block */)a0;
- (id)issuingPlayerID;
- (id)receivingPlayer;
- (void)declineWithCompletionHandler:(id /* block */)a0;
- (BOOL)hasLoadedUIDetails;
- (id)infoTextForIssuingPlayer:(id)a0;
- (void)loadUIDetailsWithHandler:(id /* block */)a0;
- (id)receivingPlayerID;

@end
