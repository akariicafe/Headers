@class NSMutableDictionary, NSPersistentStoreCoordinator, NSString, NSSQLitePrefetchRequestCache, NSObject;
@protocol OS_os_transaction;

@interface NSXPCStoreServerPerConnectionCache : NSObject {
    NSSQLitePrefetchRequestCache *_prefetchRequestCache;
    NSMutableDictionary *_generationTokenMap;
    NSObject<OS_os_transaction> *_transaction;
    long long _connections;
    NSString *_clientIdentifier;
}

@property (readonly, nonatomic) NSPersistentStoreCoordinator *coordinator;

- (id)manyToOnePrefetchRequestForRelationshipNamed:(id)a0 onEntity:(id)a1;
- (id)manyToManyPrefetchRequestsForRelationshipNamed:(id)a0 onEntity:(id)a1;
- (id)inverseIsToOnePrefetchRequestForRelationshipNamed:(id)a0 onEntity:(id)a1;
- (void)dealloc;
- (id)initWithCoordinator:(id)a0;

@end
