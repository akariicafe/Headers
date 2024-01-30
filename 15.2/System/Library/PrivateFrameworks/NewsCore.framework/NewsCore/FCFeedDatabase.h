@class NSPersistentStore, NSString, NSURL, NSManagedObjectContext, NSMutableDictionary, NSObject, NSMutableSet, NSEntityDescription;
@protocol OS_dispatch_queue, FCOperationThrottler;

@interface FCFeedDatabase : NSObject <FCOperationThrottlerDelegate, FCFeedDatabaseProtocol> {
    unsigned short _version;
    int _nextFeedLookupID;
    long long _usage;
    NSObject<OS_dispatch_queue> *_initQueue;
    NSManagedObjectContext *_managedObjectContext;
    NSPersistentStore *_persistentStore;
    NSEntityDescription *_feedEntity;
    NSEntityDescription *_feedSegmentEntity;
    NSEntityDescription *_feedItemIndexEntity;
    NSEntityDescription *_feedItemEntity;
    NSMutableDictionary *_cachedFeedsByID;
    NSMutableSet *_modifiedFeedIDs;
    id<FCOperationThrottler> _saveThrottler;
}

@property (readonly, copy, nonatomic) NSURL *parentDirectoryURL;
@property (readonly, nonatomic) long long usage;
@property (readonly, nonatomic) long long endpoint;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;
+ (id)temporaryFeedDatabaseWithEndpoint:(long long)a0;
+ (unsigned short)currentFeedDatabaseVersion;

- (void)prewarm;
- (void)teardown;
- (void)saveWithCompletionHandler:(id /* block */)a0;
- (id)initWithParentDirectoryURL:(id)a0 usage:(long long)a1 endpoint:(long long)a2;
- (void)t_insertSegmentForFeedID:(id)a0 range:(id)a1 items:(id)a2;
- (void).cxx_destruct;
- (id)t_lookupFeedID:(id)a0 range:(id)a1 maxCount:(unsigned long long)a2;
- (void)operationThrottlerPerformOperation:(id)a0;

@end
