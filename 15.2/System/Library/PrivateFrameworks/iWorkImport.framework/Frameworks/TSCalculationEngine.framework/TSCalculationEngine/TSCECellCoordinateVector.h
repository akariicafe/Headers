@class NSObject;
@protocol OS_dispatch_semaphore;

@interface TSCECellCoordinateVector : NSObject {
    struct vector<TSUCellCoord, std::allocator<TSUCellCoord>> { struct TSUCellCoord *__begin_; struct TSUCellCoord *__end_; struct __compressed_pair<TSUCellCoord *, std::allocator<TSUCellCoord>> { struct TSUCellCoord *__value_; } __end_cap_; } _cellCoordinates;
    NSObject<OS_dispatch_semaphore> *_sem;
}

- (void).cxx_destruct;
- (id)init;
- (id)initWithArchive:(const void *)a0;
- (id).cxx_construct;
- (void)saveToArchive:(void *)a0;
- (void)addCellCoordinate:(struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; })a0;
- (void *)cellCoordinates;
- (struct unordered_set<TSUCellCoord, std::hash<TSUCellCoord>, std::equal_to<TSUCellCoord>, std::allocator<TSUCellCoord>> { struct __hash_table<TSUCellCoord, std::hash<TSUCellCoord>, std::equal_to<TSUCellCoord>, std::allocator<TSUCellCoord>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<TSUCellCoord, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<TSUCellCoord, void *> *> *>>> { struct __compressed_pair<std::__hash_node_base<std::__hash_node<TSUCellCoord, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<TSUCellCoord, void *> *> *>>> { void **x0; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<TSUCellCoord, void *> *> *>> { struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<TSUCellCoord, void *> *> *>> { unsigned long long x0; } x0; } x1; } x0; } x0; struct __compressed_pair<std::__hash_node_base<std::__hash_node<TSUCellCoord, void *> *>, std::allocator<std::__hash_node<TSUCellCoord, void *>>> { struct __hash_node_base<std::__hash_node<TSUCellCoord, void *> *> { void *x0; } x0; } x1; struct __compressed_pair<unsigned long, std::hash<TSUCellCoord>> { unsigned long long x0; } x2; struct __compressed_pair<float, std::equal_to<TSUCellCoord>> { float x0; } x3; } x0; })cellCoordinatesSet;
- (void)removeAllCellCoordinates;

@end
