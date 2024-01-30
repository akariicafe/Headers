@class _KDNode;

@interface MLNearestNeighborsSingleKdTreeIndex : NSObject <MLNearestNeighborsIndex, NSSecureCoding> {
    struct vector<float, std::__1::allocator<float> > { float *__begin_; float *__end_; struct __compressed_pair<float *, std::__1::allocator<float> > { float *__value_; } __end_cap_; } vData;
    struct vector<unsigned long, std::__1::allocator<unsigned long> > { unsigned long long *__begin_; unsigned long long *__end_; struct __compressed_pair<unsigned long *, std::__1::allocator<unsigned long> > { unsigned long long *__value_; } __end_cap_; } vIndices;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long numDimensions;
@property (nonatomic) unsigned long long leafSize;
@property (retain, nonatomic) _KDNode *root;

- (void).cxx_destruct;
- (BOOL)updateWithData:(const struct vector<float, std::__1::allocator<float> > { float *x0; float *x1; struct __compressed_pair<float *, std::__1::allocator<float> > { float *x0; } x2; } *)a0 error:(id *)a1;
- (struct vector<std::__1::pair<unsigned long, float>, std::__1::allocator<std::__1::pair<unsigned long, float> > > { struct pair<unsigned long, float> *x0; struct pair<unsigned long, float> *x1; struct __compressed_pair<std::__1::pair<unsigned long, float> *, std::__1::allocator<std::__1::pair<unsigned long, float> > > { struct pair<unsigned long, float> *x0; } x2; })findNearestNeighbors:(unsigned long long)a0 toQueryPoint:(const struct vector<float, std::__1::allocator<float> > { float *x0; float *x1; struct __compressed_pair<float *, std::__1::allocator<float> > { float *x0; } x2; } *)a1;
- (unsigned long long)dataPointCount;
- (id)initWithCoder:(id)a0;
- (id).cxx_construct;
- (id)initWithDataset:(struct vector<float, std::__1::allocator<float> > { float *x0; float *x1; struct __compressed_pair<float *, std::__1::allocator<float> > { float *x0; } x2; } *)a0 numberOfDimensions:(unsigned long long)a1 leafSize:(unsigned long long)a2 error:(id *)a3;
- (id)constructTree;
- (id)constructTreeForPointsBoundedBy:(struct _KDBoundingBox { struct vector<_KDInterval, std::__1::allocator<_KDInterval> > { struct _KDInterval *x0; struct _KDInterval *x1; struct __compressed_pair<_KDInterval *, std::__1::allocator<_KDInterval> > { struct _KDInterval *x0; } x2; } x0; unsigned long long x1; } *)a0 startingIndex:(unsigned long long)a1 count:(unsigned long long)a2;
- (struct vector<std::__1::pair<unsigned long, float>, std::__1::allocator<std::__1::pair<unsigned long, float> > > { struct pair<unsigned long, float> *x0; struct pair<unsigned long, float> *x1; struct __compressed_pair<std::__1::pair<unsigned long, float> *, std::__1::allocator<std::__1::pair<unsigned long, float> > > { struct pair<unsigned long, float> *x0; } x2; })calculateDistancesForNodesBetweenLeft:(unsigned long long)a0 andRight:(unsigned long long)a1 toQueryPoint:(const struct vector<float, std::__1::allocator<float> > { float *x0; float *x1; struct __compressed_pair<float *, std::__1::allocator<float> > { float *x0; } x2; } *)a2;
- (void)findK:(unsigned long long)a0 nearestNeighbors:(struct _KDPriorityQueue { unsigned long long x0; struct priority_queue<_KDPriorityQueueElement, std::__1::vector<_KDPriorityQueueElement, std::__1::allocator<_KDPriorityQueueElement> >, _KDPriorityQueueComparator> { struct vector<_KDPriorityQueueElement, std::__1::allocator<_KDPriorityQueueElement> > { struct _KDPriorityQueueElement *x0; struct _KDPriorityQueueElement *x1; struct __compressed_pair<_KDPriorityQueueElement *, std::__1::allocator<_KDPriorityQueueElement> > { struct _KDPriorityQueueElement *x0; } x2; } x0; struct _KDPriorityQueueComparator { } x1; } x1; } *)a1 toQueryPoint:(const struct vector<float, std::__1::allocator<float> > { float *x0; float *x1; struct __compressed_pair<float *, std::__1::allocator<float> > { float *x0; } x2; } *)a2 inTree:(id)a3;
- (void)encodeWithCoder:(id)a0;

@end
