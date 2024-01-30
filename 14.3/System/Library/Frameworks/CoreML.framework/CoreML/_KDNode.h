@interface _KDNode : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long splitDimension;
@property (nonatomic) unsigned long long splitIndex;
@property (nonatomic) float splitValue;
@property (nonatomic) unsigned long long startingIndex;
@property (nonatomic) unsigned long long count;
@property (retain, nonatomic) _KDNode *leftChild;
@property (retain, nonatomic) _KDNode *rightChild;
@property (nonatomic) struct _KDBoundingBox { struct vector<_KDInterval, std::__1::allocator<_KDInterval> > { struct _KDInterval *__begin_; struct _KDInterval *__end_; struct __compressed_pair<_KDInterval *, std::__1::allocator<_KDInterval> > { struct _KDInterval *__value_; } __end_cap_; } _intervals; unsigned long long _numDimensions; } boundingBox;
@property (nonatomic) BOOL isLeaf;

- (void).cxx_destruct;
- (void)print;
- (id)initWithCoder:(id)a0;
- (id).cxx_construct;
- (void)findMin:(float *)a0 andMax:(float *)a1 alongDimension:(unsigned long long)a2 data:(const float *)a3 indices:(const unsigned long long *)a4 numDimensions:(unsigned long long)a5;
- (void)partitionDataPoints:(const float *)a0 indices:(unsigned long long *)a1 numDimensions:(unsigned long long)a2;
- (void)assignSplitsForData:(const float *)a0 indices:(unsigned long long *)a1 numDimensions:(unsigned long long)a2;
- (void)encodeWithCoder:(id)a0;

@end
