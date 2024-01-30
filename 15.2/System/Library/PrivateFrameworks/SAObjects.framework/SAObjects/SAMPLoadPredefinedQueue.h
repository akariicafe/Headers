@class NSArray, NSString, NSNumber;

@interface SAMPLoadPredefinedQueue : SADomainCommand

@property (nonatomic) BOOL dryRun;
@property (copy, nonatomic) NSArray *hashedRouteUIDs;
@property (nonatomic) int mediaItemType;
@property (copy, nonatomic) NSString *requesterSharedUserId;
@property (copy, nonatomic) NSString *sharedUserIdFromPlayableMusicAccount;
@property (nonatomic) BOOL shouldShuffle;
@property (copy, nonatomic) NSNumber *startPlaying;

+ (id)loadPredefinedQueue;
+ (id)loadPredefinedQueueWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (BOOL)mutatingCommand;

@end
