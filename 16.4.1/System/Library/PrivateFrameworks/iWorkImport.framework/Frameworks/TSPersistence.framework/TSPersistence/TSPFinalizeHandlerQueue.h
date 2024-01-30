@class TSPCancellationState, NSObject;
@protocol OS_dispatch_queue;

@interface TSPFinalizeHandlerQueue : NSObject {
    NSObject<OS_dispatch_queue> *_accessQueue;
    long long _rootObjectIdentifier;
    TSPCancellationState *_cancellationState;
    struct vector<TSP::FinalizeHandlerItem *, std::allocator<TSP::FinalizeHandlerItem *>> { struct FinalizeHandlerItem **__begin_; struct FinalizeHandlerItem **__end_; struct __compressed_pair<TSP::FinalizeHandlerItem **, std::allocator<TSP::FinalizeHandlerItem *>> { struct FinalizeHandlerItem **__value_; } __end_cap_; } _order;
    struct IdentifierMap<TSP::FinalizeHandlerItem> { struct __hash_table<std::__hash_value_type<const long long, TSP::FinalizeHandlerItem>, std::__unordered_map_hasher<const long long, std::__hash_value_type<const long long, TSP::FinalizeHandlerItem>, std::hash<long long>, std::equal_to<const long long>, true>, std::__unordered_map_equal<const long long, std::__hash_value_type<const long long, TSP::FinalizeHandlerItem>, std::equal_to<const long long>, std::hash<long long>, true>, std::allocator<std::__hash_value_type<const long long, TSP::FinalizeHandlerItem>>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, TSP::FinalizeHandlerItem>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, TSP::FinalizeHandlerItem>, void *> *> *>>> { struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, TSP::FinalizeHandlerItem>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, TSP::FinalizeHandlerItem>, void *> *> *>>> { void **__value_; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, TSP::FinalizeHandlerItem>, void *> *> *>> { struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, TSP::FinalizeHandlerItem>, void *> *> *>> { unsigned long long __value_; } __data_; } __value_; } __ptr_; } __bucket_list_; struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, TSP::FinalizeHandlerItem>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<const long long, TSP::FinalizeHandlerItem>, void *>>> { struct __hash_node_base<std::__hash_node<std::__hash_value_type<const long long, TSP::FinalizeHandlerItem>, void *> *> { void *__next_; } __value_; } __p1_; struct __compressed_pair<unsigned long, std::__unordered_map_hasher<const long long, std::__hash_value_type<const long long, TSP::FinalizeHandlerItem>, std::hash<long long>, std::equal_to<const long long>, true>> { unsigned long long __value_; } __p2_; struct __compressed_pair<float, std::__unordered_map_equal<const long long, std::__hash_value_type<const long long, TSP::FinalizeHandlerItem>, std::equal_to<const long long>, std::hash<long long>, true>> { float __value_; } __p3_; } __table_; } _map;
    void *_currentItem;
}

- (id).cxx_construct;
- (id)init;
- (void).cxx_destruct;
- (void)reset;
- (void)addFinalizeHandlers:(void *)a0 strongReferences:(void *)a1 forIdentifier:(long long)a2;
- (long long)currentObjectIdentifier;
- (id)initWithRootObjectIdentifier:(long long)a0;
- (id)initWithRootObjectIdentifier:(long long)a0 cancellationState:(id)a1;
- (void)runFinalizeHandlerForItem:(void *)a0;
- (BOOL)runFinalizeHandlers;
- (void)visitItemForCycleDetection:(void *)a0;

@end
