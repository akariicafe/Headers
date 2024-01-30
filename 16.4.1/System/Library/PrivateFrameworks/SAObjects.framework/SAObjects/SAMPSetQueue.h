@class NSString, NSArray, SAMPCollection, NSNumber;

@interface SAMPSetQueue : SADomainCommand

@property (copy, nonatomic) NSString *assetInfo;
@property (nonatomic) BOOL dryRun;
@property (copy, nonatomic) NSArray *filters;
@property (copy, nonatomic) NSArray *hashedRouteUIDs;
@property (retain, nonatomic) SAMPCollection *mediaItems;
@property (copy, nonatomic) NSString *recommendationId;
@property (copy, nonatomic) NSString *requesterSharedUserId;
@property (copy, nonatomic) NSString *sharedUserIdFromPlayableMusicAccount;
@property (nonatomic) BOOL shouldOverrideManuallyCuratedUpNext;
@property (nonatomic) BOOL shouldReloadQueue;
@property (nonatomic) BOOL shouldShuffle;
@property (copy, nonatomic) NSArray *sort;
@property (copy, nonatomic) NSNumber *startPlaying;

+ (id)setQueueWithDictionary:(id)a0 context:(id)a1;
+ (id)setQueue;

- (BOOL)requiresResponse;
- (id)groupIdentifier;
- (id)encodedClassName;
- (BOOL)mutatingCommand;

@end
