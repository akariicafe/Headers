@class NSString, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface ENGroupContextInMemoryCache : NSObject <ENGroupContextCacheMiddleware>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSMutableDictionary *groupIDtoGroup;
@property (retain, nonatomic) NSMutableDictionary *latestStableGroupIDToGroup;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithQueue:(id)a0;
- (void)deleteAllKnownGroupsForGroupContext:(id)a0 completion:(id /* block */)a1;
- (void)deleteCachedValueForForGroupContext:(id)a0 withGroupID:(id)a1 completion:(id /* block */)a2;
- (void)groupContext:(id)a0 cacheGroup:(id)a1 completion:(id /* block */)a2;
- (void)groupContext:(id)a0 cachedGroupWithID:(id)a1 completion:(id /* block */)a2;
- (void)groupContext:(id)a0 fetchAllKnownGroups:(id /* block */)a1;
- (void)groupContext:(id)a0 latestCachedGroupWithStableID:(id)a1 completion:(id /* block */)a2;
- (long long)middlewareCacheCostForContext:(id)a0;

@end
