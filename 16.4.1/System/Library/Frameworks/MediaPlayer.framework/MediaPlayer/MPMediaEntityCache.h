@class NSMutableArray, NSObject;
@protocol OS_dispatch_queue, MPMediaLibraryDataProviderPrivate;

@interface MPMediaEntityCache : NSObject {
    id<MPMediaLibraryDataProviderPrivate> _mediaLibraryDataProvider;
    BOOL _mediaLibraryDataProviderRespondsToSupportsEntityChangeTrackingMethod;
    struct os_unfair_recursive_lock_s { struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } ourl_lock; unsigned int ourl_count; } _rwlock;
    NSObject<OS_dispatch_queue> *_deallocLaterQueue;
    struct __CFDictionary { } *_concreteEntitiesByDataProviderEntityClass;
    NSMutableArray *_entityTemporaryReferences;
}

- (id)_entityWithIdentifier:(long long)a0 mediaEntityType:(long long)a1 collectionGroupingType:(long long)a2 loadEntityBlock:(id /* block */)a3;
- (id)initWithMediaLibraryDataProvider:(id)a0;
- (id)collectionWithIdentifier:(long long)a0 grouping:(long long)a1 loadEntityBlock:(id /* block */)a2;
- (void)updatePropertyValuesInEntityWithIdentifier:(long long)a0 dataProviderEntityClass:(Class)a1 deleted:(BOOL)a2;
- (void)removeEntityWithIdentifier:(long long)a0 dataProviderEntityClass:(Class)a1;
- (void)_performWithSharedAccessForDataProviderEntityClass:(Class)a0 block:(id /* block */)a1;
- (id)itemWithIdentifier:(long long)a0;
- (void)_clearSomeGlobalEntityTemporaryReferences;
- (void)_performWithExclusiveAccessForDataProviderEntityClass:(Class)a0 block:(id /* block */)a1;
- (id)itemWithIdentifier:(long long)a0 loadEntityBlock:(id /* block */)a1;
- (void *)_entityMapForDataProviderEntityClass:(Class)a0;
- (void).cxx_destruct;

@end
