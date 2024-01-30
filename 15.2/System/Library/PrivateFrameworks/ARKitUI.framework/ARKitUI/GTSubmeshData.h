@interface GTSubmeshData : NSObject {
    struct vector<unsigned int, std::allocator<unsigned int>> { unsigned int *__begin_; unsigned int *__end_; struct __compressed_pair<unsigned int *, std::allocator<unsigned int>> { unsigned int *__value_; } __end_cap_; } _indexVector;
}

@property (readonly, nonatomic) unsigned int *indexData;
@property (readonly, nonatomic) unsigned long long indexCount;

- (void).cxx_destruct;
- (void)addIndex:(unsigned int)a0;
- (id).cxx_construct;

@end
