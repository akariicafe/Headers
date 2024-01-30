@class NSObject;
@protocol OS_dispatch_semaphore;

@interface TSCECellCoordinateVector : NSObject {
    struct vector<TSUCellCoord, std::__1::allocator<TSUCellCoord> > { struct TSUCellCoord *__begin_; struct TSUCellCoord *__end_; struct __compressed_pair<TSUCellCoord *, std::__1::allocator<TSUCellCoord> > { struct TSUCellCoord *__value_; } __end_cap_; } _cellCoordinates;
    NSObject<OS_dispatch_semaphore> *_sem;
}

- (id)init;
- (void).cxx_destruct;
- (id)initWithArchive:(const struct CellCoordinateVectorArchive { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct RepeatedPtrField<TSCE::CellCoordinateArchive> { struct Arena *x0; int x1; int x2; struct Rep *x3; } x4; } *)a0;
- (id).cxx_construct;
- (void)saveToArchive:(struct CellCoordinateVectorArchive { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct RepeatedPtrField<TSCE::CellCoordinateArchive> { struct Arena *x0; int x1; int x2; struct Rep *x3; } x4; } *)a0;
- (void)addCellCoordinate:(struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; })a0;
- (struct vector<TSUCellCoord, std::__1::allocator<TSUCellCoord> > { struct TSUCellCoord *x0; struct TSUCellCoord *x1; struct __compressed_pair<TSUCellCoord *, std::__1::allocator<TSUCellCoord> > { struct TSUCellCoord *x0; } x2; } *)cellCoordinates;
- (struct unordered_set<TSUCellCoord, std::__1::hash<TSUCellCoord>, std::__1::equal_to<TSUCellCoord>, std::__1::allocator<TSUCellCoord> > { struct __hash_table<TSUCellCoord, std::__1::hash<TSUCellCoord>, std::__1::equal_to<TSUCellCoord>, std::__1::allocator<TSUCellCoord> > { struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<TSUCellCoord, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<TSUCellCoord, void *> *> *> > > { struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<TSUCellCoord, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<TSUCellCoord, void *> *> *> > > { struct __hash_node_base<std::__1::__hash_node<TSUCellCoord, void *> *> **x0; struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<TSUCellCoord, void *> *> *> > { struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<TSUCellCoord, void *> *> *> > { unsigned long long x0; } x0; } x1; } x0; } x0; struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<TSUCellCoord, void *> *>, std::__1::allocator<std::__1::__hash_node<TSUCellCoord, void *> > > { struct __hash_node_base<std::__1::__hash_node<TSUCellCoord, void *> *> { struct __hash_node_base<std::__1::__hash_node<TSUCellCoord, void *> *> *x0; } x0; } x1; struct __compressed_pair<unsigned long, std::__1::hash<TSUCellCoord> > { unsigned long long x0; } x2; struct __compressed_pair<float, std::__1::equal_to<TSUCellCoord> > { float x0; } x3; } x0; })cellCoordinatesSet;
- (void)removeAllCellCoordinates;

@end
