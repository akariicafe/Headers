@class NSMutableDictionary, NSPersistentStoreCoordinator, NSSQLitePrefetchRequestCache, NSObject;
@protocol OS_os_transaction;

@interface NSXPCStoreServerPerConnectionCache : NSObject {
    NSSQLitePrefetchRequestCache *_prefetchRequestCache;
    NSMutableDictionary *_generationTokenMap;
    NSObject<OS_os_transaction> *_transaction;
}

@property (readonly, nonatomic) NSPersistentStoreCoordinator *coordinator;

- (id)localGenerationForRemoteGeneration:(id)a0;
- (id)manyToManyPrefetchRequestsForRelationshipNamed:(id)a0 onEntity:(id)a1;
- (void)registerQueryGeneration:(id)a0 forRemoteGeneration:(id)a1;
- (void)dealloc;
- (id)manyToOnePrefetchRequestForRelationshipNamed:(id)a0 onEntity:(id)a1;
- (id)initWithCoordinator:(id)a0;
- (id)inverseIsToOnePrefetchRequestForRelationshipNamed:(id)a0 onEntity:(id)a1;
- (void)releaseQueryGenerationForRemoteGeneration:(id)a0;

@end
