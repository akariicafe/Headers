@class NSPersistentStore, NSManagedObjectContext, NSURL, NSString, NSMutableDictionary, NSMutableSet, NSObject, NSEntityDescription;
@protocol OS_dispatch_queue, FCOperationThrottler;

@interface FCFeedDatabase : NSObject <FCOperationThrottlerDelegate>

@property (nonatomic) long long usage;
@property (nonatomic) unsigned short version;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *initQueue;
@property (retain, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (retain, nonatomic) NSPersistentStore *persistentStore;
@property (retain, nonatomic) NSEntityDescription *feedEntity;
@property (retain, nonatomic) NSEntityDescription *feedSegmentEntity;
@property (retain, nonatomic) NSEntityDescription *feedItemIndexEntity;
@property (retain, nonatomic) NSEntityDescription *feedItemEntity;
@property (retain, nonatomic) NSMutableDictionary *cachedFeedsByID;
@property (nonatomic) int nextFeedLookupID;
@property (retain, nonatomic) NSMutableSet *modifiedFeedIDs;
@property (retain, nonatomic) id<FCOperationThrottler> saveThrottler;
@property (readonly, copy, nonatomic) NSURL *parentDirectoryURL;
@property (readonly, nonatomic) long long endpoint;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;
+ (unsigned short)currentFeedDatabaseVersion;
+ (id)temporaryFeedDatabaseWithEndpoint:(long long)a0;

- (id)_shortCircuitLookup:(id)a0 withFeed:(id)a1;
- (void)teardown;
- (void).cxx_destruct;
- (void)_synchronizedInitMOC;
- (void)operationThrottlerPerformOperation:(id)a0;
- (id)performDatabaseLookups:(id)a0;
- (id)initWithParentDirectoryURL:(id)a0 usage:(long long)a1 endpoint:(long long)a2;
- (void)d_sanityCheckFeed:(id)a0;
- (void)_performWithMOCAndWait:(id /* block */)a0;
- (void)saveFeedItems:(id)a0 forFeedID:(id)a1 insertionToken:(id)a2 requestDate:(id)a3 followingCKCursor:(id)a4 reachedToOrder:(BOOL)a5 extent:(unsigned long long)a6 reachedEnd:(BOOL)a7;
- (void)prewarm;
- (id)_feedsForLookups:(id)a0;
- (void)_initMOC;
- (id)_serviceLookup:(id)a0 withFeed:(id)a1 feedItems:(id)a2;
- (id)performDatabaseLookups:(id)a0 boundedByCount:(unsigned long long)a1;
- (id)_feedItemsForLookups:(id)a0 withFeedsByID:(id)a1;
- (id)_feedItemsForLookups:(id)a0 withFeedsByID:(id)a1 boundedByCount:(unsigned long long)a2;

@end
