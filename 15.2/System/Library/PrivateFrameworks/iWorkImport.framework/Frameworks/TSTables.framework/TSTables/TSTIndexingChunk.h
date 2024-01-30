@interface TSTIndexingChunk : NSObject {
    struct vector<std::vector<NSString *>, std::allocator<std::vector<NSString *>>> { void *__begin_; void *__end_; struct __compressed_pair<std::vector<NSString *> *, std::allocator<std::vector<NSString *>>> { void *__value_; } __end_cap_; } _wordFragmentsList;
    struct vector<TSKUIDStructCoord, std::allocator<TSKUIDStructCoord>> { struct TSKUIDStructCoord *__begin_; struct TSKUIDStructCoord *__end_; struct __compressed_pair<TSKUIDStructCoord *, std::allocator<TSKUIDStructCoord>> { struct TSKUIDStructCoord *__value_; } __end_cap_; } _headerCoords;
}

@property (readonly, nonatomic) struct TSKUIDStruct { unsigned long long _lower; unsigned long long _upper; } tableUID;
@property (readonly, nonatomic) unsigned long long size;

- (void).cxx_destruct;
- (id).cxx_construct;
- (id)initWithTableUID:(const struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } *)a0;
- (const void *)wordFragmentsList;
- (const void *)headerCoords;
- (void)addHeaderWordFragments:(const void *)a0 atCoord:(const struct TSKUIDStructCoord { struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } x0; struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } x1; } *)a1;

@end
