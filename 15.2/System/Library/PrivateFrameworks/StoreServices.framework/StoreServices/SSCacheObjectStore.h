@class NSString, SSDatabaseCache, NSMutableSet, NSObject;
@protocol OS_dispatch_queue;

@interface SSCacheObjectStore : NSObject {
    SSDatabaseCache *_databaseCache;
    NSMutableSet *_factories;
    NSString *_sessionIdentifier;
    NSObject<OS_dispatch_queue> *_serialQueue;
}

- (id)description;
- (id)initWithSessionIdentifier:(id)a0;
- (id)_factoryForTypeIdentifier:(id)a0;
- (void)addCacheObjectFactory:(id)a0;
- (BOOL)addObject:(id)a0 withItemIdentifier:(id)a1;
- (BOOL)removeObjectWithItemIdentifier:(id)a0;
- (id)cacheObjectWithItemIdentifier:(id)a0;
- (void)removeCacheObjectFactory:(id)a0;
- (void)dealloc;
- (void)clearSession;

@end
