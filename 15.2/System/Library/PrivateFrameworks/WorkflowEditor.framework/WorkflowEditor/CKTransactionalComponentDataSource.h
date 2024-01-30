@class NSMutableArray, NSString, CKTransactionalComponentDataSourceState, NSThread, NSObject, CKTransactionalComponentDataSourceListenerAnnouncer;
@protocol OS_dispatch_queue;

@interface CKTransactionalComponentDataSource : NSObject <CKComponentStateListener, CKComponentDebugReflowListener> {
    CKTransactionalComponentDataSourceState *_state;
    CKTransactionalComponentDataSourceListenerAnnouncer *_announcer;
    struct unordered_map<int, std::unordered_multimap<int, id (^)(id)>, std::hash<int>, std::equal_to<int>, std::allocator<std::pair<const int, std::unordered_multimap<int, id (^)(id)>>>> { struct __hash_table<std::__hash_value_type<int, std::unordered_multimap<int, id (^)(id)>>, std::__unordered_map_hasher<int, std::__hash_value_type<int, std::unordered_multimap<int, id (^)(id)>>, std::hash<int>, std::equal_to<int>, true>, std::__unordered_map_equal<int, std::__hash_value_type<int, std::unordered_multimap<int, id (^)(id)>>, std::equal_to<int>, std::hash<int>, true>, std::allocator<std::__hash_value_type<int, std::unordered_multimap<int, id (^)(id)>>>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<int, std::unordered_multimap<int, id (^)(id)>>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<int, std::unordered_multimap<int, id (^)(id)>>, void *> *> *>>> { struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<int, std::unordered_multimap<int, id (^)(id)>>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<int, std::unordered_multimap<int, id (^)(id)>>, void *> *> *>>> { void **__value_; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<int, std::unordered_multimap<int, id (^)(id)>>, void *> *> *>> { struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<int, std::unordered_multimap<int, id (^)(id)>>, void *> *> *>> { unsigned long long __value_; } __data_; } __value_; } __ptr_; } __bucket_list_; struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<int, std::unordered_multimap<int, id (^)(id)>>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<int, std::unordered_multimap<int, id (^)(id)>>, void *>>> { struct __hash_node_base<std::__hash_node<std::__hash_value_type<int, std::unordered_multimap<int, id (^)(id)>>, void *> *> { void *__next_; } __value_; } __p1_; struct __compressed_pair<unsigned long, std::__unordered_map_hasher<int, std::__hash_value_type<int, std::unordered_multimap<int, id (^)(id)>>, std::hash<int>, std::equal_to<int>, true>> { unsigned long long __value_; } __p2_; struct __compressed_pair<float, std::__unordered_map_equal<int, std::__hash_value_type<int, std::unordered_multimap<int, id (^)(id)>>, std::equal_to<int>, std::hash<int>, true>> { float __value_; } __p3_; } __table_; } _pendingAsynchronousStateUpdates;
    struct unordered_map<int, std::unordered_multimap<int, id (^)(id)>, std::hash<int>, std::equal_to<int>, std::allocator<std::pair<const int, std::unordered_multimap<int, id (^)(id)>>>> { struct __hash_table<std::__hash_value_type<int, std::unordered_multimap<int, id (^)(id)>>, std::__unordered_map_hasher<int, std::__hash_value_type<int, std::unordered_multimap<int, id (^)(id)>>, std::hash<int>, std::equal_to<int>, true>, std::__unordered_map_equal<int, std::__hash_value_type<int, std::unordered_multimap<int, id (^)(id)>>, std::equal_to<int>, std::hash<int>, true>, std::allocator<std::__hash_value_type<int, std::unordered_multimap<int, id (^)(id)>>>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<int, std::unordered_multimap<int, id (^)(id)>>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<int, std::unordered_multimap<int, id (^)(id)>>, void *> *> *>>> { struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<int, std::unordered_multimap<int, id (^)(id)>>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<int, std::unordered_multimap<int, id (^)(id)>>, void *> *> *>>> { void **__value_; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<int, std::unordered_multimap<int, id (^)(id)>>, void *> *> *>> { struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<int, std::unordered_multimap<int, id (^)(id)>>, void *> *> *>> { unsigned long long __value_; } __data_; } __value_; } __ptr_; } __bucket_list_; struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<int, std::unordered_multimap<int, id (^)(id)>>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<int, std::unordered_multimap<int, id (^)(id)>>, void *>>> { struct __hash_node_base<std::__hash_node<std::__hash_value_type<int, std::unordered_multimap<int, id (^)(id)>>, void *> *> { void *__next_; } __value_; } __p1_; struct __compressed_pair<unsigned long, std::__unordered_map_hasher<int, std::__hash_value_type<int, std::unordered_multimap<int, id (^)(id)>>, std::hash<int>, std::equal_to<int>, true>> { unsigned long long __value_; } __p2_; struct __compressed_pair<float, std::__unordered_map_equal<int, std::__hash_value_type<int, std::unordered_multimap<int, id (^)(id)>>, std::equal_to<int>, std::hash<int>, true>> { float __value_; } __p3_; } __table_; } _pendingSynchronousStateUpdates;
    NSMutableArray *_pendingAsynchronousModifications;
    NSThread *_workThreadOverride;
}

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)removeListener:(id)a0;
- (id)state;
- (id)initWithConfiguration:(id)a0;
- (void)addListener:(id)a0;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)componentScopeHandleWithIdentifier:(int)a0 rootIdentifier:(int)a1 didReceiveStateUpdate:(id /* block */)a2 mode:(unsigned long long)a3;
- (void)applyChangeset:(id)a0 mode:(unsigned long long)a1 userInfo:(id)a2;
- (void)reloadWithMode:(unsigned long long)a0 userInfo:(id)a1;
- (void)updateConfiguration:(id)a0 mode:(unsigned long long)a1 userInfo:(id)a2;
- (void)didReceiveReflowComponentsRequest;
- (void)_enqueueModification:(id)a0;
- (void)_startFirstAsynchronousModification;
- (id)_cancelEnqueuedModificationsOfType:(Class)a0;
- (void)_synchronouslyApplyChange:(id)a0;
- (void)_processStateUpdates;
- (void)_applyModificationPair:(id)a0;

@end
