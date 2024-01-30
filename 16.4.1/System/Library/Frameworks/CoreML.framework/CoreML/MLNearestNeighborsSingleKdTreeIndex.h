@class _KDNode;

@interface MLNearestNeighborsSingleKdTreeIndex : NSObject <MLNearestNeighborsIndex, NSSecureCoding> {
    struct vector<float, std::allocator<float>> { float *__begin_; float *__end_; struct __compressed_pair<float *, std::allocator<float>> { float *__value_; } __end_cap_; } vData;
    struct vector<unsigned long, std::allocator<unsigned long>> { unsigned long long *__begin_; unsigned long long *__end_; struct __compressed_pair<unsigned long *, std::allocator<unsigned long>> { unsigned long long *__value_; } __end_cap_; } vIndices;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long numDimensions;
@property (nonatomic) unsigned long long leafSize;
@property (retain, nonatomic) _KDNode *root;

- (void)encodeWithCoder:(id)a0;
- (id).cxx_construct;
- (id)initWithCoder:(id)a0;
- (unsigned long long)dataPointCount;
- (void).cxx_destruct;
- (struct vector<std::pair<unsigned long, float>, std::allocator<std::pair<unsigned long, float>>> { void *x0; void *x1; struct __compressed_pair<std::pair<unsigned long, float> *, std::allocator<std::pair<unsigned long, float>>> { void *x0; } x2; })calculateDistancesForNodesBetweenLeft:(unsigned long long)a0 andRight:(unsigned long long)a1 toQueryPoint:(const void *)a2;
- (id)constructTree;
- (id)constructTreeForPointsBoundedBy:(void *)a0 startingIndex:(unsigned long long)a1 count:(unsigned long long)a2;
- (void)findK:(unsigned long long)a0 nearestNeighbors:(void *)a1 toQueryPoint:(const void *)a2 inTree:(id)a3;
- (struct vector<std::pair<unsigned long, float>, std::allocator<std::pair<unsigned long, float>>> { void *x0; void *x1; struct __compressed_pair<std::pair<unsigned long, float> *, std::allocator<std::pair<unsigned long, float>>> { void *x0; } x2; })findNearestNeighbors:(unsigned long long)a0 toIndex:(unsigned long long)a1;
- (struct vector<std::pair<unsigned long, float>, std::allocator<std::pair<unsigned long, float>>> { void *x0; void *x1; struct __compressed_pair<std::pair<unsigned long, float> *, std::allocator<std::pair<unsigned long, float>>> { void *x0; } x2; })findNearestNeighbors:(unsigned long long)a0 toQueryPoint:(const void *)a1;
- (id)initWithDataset:(void *)a0 numberOfDimensions:(unsigned long long)a1 leafSize:(unsigned long long)a2 error:(id *)a3;
- (BOOL)updateWithData:(const void *)a0 error:(id *)a1;

@end
