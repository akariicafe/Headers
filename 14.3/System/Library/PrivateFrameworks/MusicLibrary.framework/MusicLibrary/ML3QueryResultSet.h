@class ML3Query, NSObject, NSMutableArray, ML3QueryResultSet_BackingStore;
@protocol OS_dispatch_queue;

@interface ML3QueryResultSet : NSObject <NSCopying> {
    ML3QueryResultSet_BackingStore *_backingStore;
    BOOL _supportsIncrementalUpdate;
    NSMutableArray *_updateToLibraryCurrentRevisionCompletionBlocks;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_fixedPriorityQueue;
}

@property (readonly, nonatomic) ML3Query *query;
@property (readonly, nonatomic) unsigned long long count;
@property (readonly, nonatomic) long long revision;
@property (readonly, nonatomic) long long localRevision;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)enumerateSectionsUsingBlock:(id /* block */)a0;
- (unsigned long long)entityLimit;
- (BOOL)updateToLibraryCurrentRevision;
- (void)enumeratePersistentIDsUsingBlock:(id /* block */)a0;
- (long long)persistentIDAtIndex:(unsigned long long)a0;
- (id)initWithQuery:(id)a0;
- (id)_initWithQuery:(id)a0 supportsIncrementalUpdate:(BOOL)a1;
- (void)_onQueueAddUpdateFinishedBlock:(id /* block */)a0;
- (BOOL)_updateToLibraryCurrentRevision;
- (void)_onQueueInvokeAndClearUpdateFinishedBlocksWithDidUpdateResult:(BOOL)a0;
- (void)_loadCurrentFullResults;
- (void)_mergeChangesWithFromNewPIDs:(const struct vector<long long, std::__1::allocator<long long> > { long long *x0; long long *x1; struct __compressed_pair<long long *, std::__1::allocator<long long> > { long long *x0; } x2; } *)a0 changedPIDs:(struct unordered_set<long long, std::__1::hash<long long>, std::__1::equal_to<long long>, std::__1::allocator<long long> > { struct __hash_table<long long, std::__1::hash<long long>, std::__1::equal_to<long long>, std::__1::allocator<long long> > { struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<long long, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<long long, void *> *> *> > > { struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<long long, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<long long, void *> *> *> > > { struct __hash_node_base<std::__1::__hash_node<long long, void *> *> **x0; struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<long long, void *> *> *> > { struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<long long, void *> *> *> > { unsigned long long x0; } x0; } x1; } x0; } x0; struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<long long, void *> *>, std::__1::allocator<std::__1::__hash_node<long long, void *> > > { struct __hash_node_base<std::__1::__hash_node<long long, void *> *> { struct __hash_node_base<std::__1::__hash_node<long long, void *> *> *x0; } x0; } x1; struct __compressed_pair<unsigned long, std::__1::hash<long long> > { unsigned long long x0; } x2; struct __compressed_pair<float, std::__1::equal_to<long long> > { float x0; } x3; } x0; } *)a1;

@end
