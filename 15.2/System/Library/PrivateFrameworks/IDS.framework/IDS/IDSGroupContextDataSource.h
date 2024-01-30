@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface IDSGroupContextDataSource : NSObject <ENGroupContextDataSource, ENGroupContextCacheMiddleware>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithQueue:(id)a0;
- (void).cxx_destruct;
- (void)participantsForCypher:(id)a0 completion:(id /* block */)a1;
- (void)validateCachedGroup:(id)a0 isParentOfGroup:(id)a1 completion:(id /* block */)a2;
- (id)_groupContextDataSource;
- (id)_groupContextCacheMiddleware;
- (void)groupContext:(id)a0 upsertGroupWithInfo:(id)a1 previousGroup:(id)a2 completion:(id /* block */)a3;
- (void)groupContext:(id)a0 fetchGroupWithID:(id)a1 completion:(id /* block */)a2;
- (void)publicDataRepresentationForGroup:(id)a0 inContext:(id)a1 completion:(id /* block */)a2;
- (void)groupContext:(id)a0 cacheGroup:(id)a1 completion:(id /* block */)a2;
- (void)groupFromPublicDataRepresentation:(id)a0 inContext:(id)a1 completion:(id /* block */)a2;
- (long long)middlewareCacheCostForContext:(id)a0;
- (void)groupContext:(id)a0 cachedGroupWithID:(id)a1 completion:(id /* block */)a2;
- (void)groupContext:(id)a0 latestCachedGroupWithStableID:(id)a1 completion:(id /* block */)a2;
- (void)groupContext:(id)a0 fetchAllKnownGroups:(id /* block */)a1;
- (void)deleteAllKnownGroupsForGroupContext:(id)a0 completion:(id /* block */)a1;
- (void)deleteCachedValueForForGroupContext:(id)a0 withGroupID:(id)a1 completion:(id /* block */)a2;

@end
