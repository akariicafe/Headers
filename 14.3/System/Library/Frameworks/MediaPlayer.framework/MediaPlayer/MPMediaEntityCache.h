@class NSMutableArray, NSObject;
@protocol OS_dispatch_queue, MPMediaLibraryDataProviderPrivate;

@interface MPMediaEntityCache : NSObject {
    id<MPMediaLibraryDataProviderPrivate> _mediaLibraryDataProvider;
    BOOL _mediaLibraryDataProviderRespondsToSupportsEntityChangeTrackingMethod;
    struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } _rwlock;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _entityCacheMapLock;
    NSObject<OS_dispatch_queue> *_deallocLaterQueue;
    struct __CFDictionary { } *_concreteEntitiesByDataProviderEntityClass;
    NSMutableArray *_entityTemporaryReferences;
}

- (void)_clearSomeGlobalEntityTemporaryReferences;
- (struct map<long long, MPMediaEntity<MPCacheableConcreteMediaEntity> *__weak, std::__1::less<long long>, std::__1::allocator<std::__1::pair<const long long, MPMediaEntity<MPCacheableConcreteMediaEntity> *__weak> > > { struct __tree<std::__1::__value_type<long long, MPMediaEntity<MPCacheableConcreteMediaEntity> *__weak>, std::__1::__map_value_compare<long long, std::__1::__value_type<long long, MPMediaEntity<MPCacheableConcreteMediaEntity> *__weak>, std::__1::less<long long>, true>, std::__1::allocator<std::__1::__value_type<long long, MPMediaEntity<MPCacheableConcreteMediaEntity> *__weak> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> *x0; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<long long, MPMediaEntity<MPCacheableConcreteMediaEntity> *__weak>, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> *x0; } x0; } x1; struct __compressed_pair<unsigned long, std::__1::__map_value_compare<long long, std::__1::__value_type<long long, MPMediaEntity<MPCacheableConcreteMediaEntity> *__weak>, std::__1::less<long long>, true> > { unsigned long long x0; } x2; } x0; } *)_entityMapForDataProviderEntityClass:(Class)a0;
- (id)_entityWithIdentifier:(long long)a0 mediaEntityType:(long long)a1 collectionGroupingType:(long long)a2 loadEntityBlock:(id /* block */)a3;
- (void).cxx_destruct;
- (id)initWithMediaLibraryDataProvider:(id)a0;
- (void)updatePropertyValuesInEntityWithIdentifier:(long long)a0 dataProviderEntityClass:(Class)a1 deleted:(BOOL)a2;
- (id)collectionWithIdentifier:(long long)a0 grouping:(long long)a1 loadEntityBlock:(id /* block */)a2;
- (id)itemWithIdentifier:(long long)a0;
- (void)removeEntityWithIdentifier:(long long)a0 dataProviderEntityClass:(Class)a1;
- (void)_performWithSharedAccessForDataProviderEntityClass:(Class)a0 block:(id /* block */)a1;
- (id)itemWithIdentifier:(long long)a0 loadEntityBlock:(id /* block */)a1;
- (void)_performWithExclusiveAccessForDataProviderEntityClass:(Class)a0 block:(id /* block */)a1;

@end
