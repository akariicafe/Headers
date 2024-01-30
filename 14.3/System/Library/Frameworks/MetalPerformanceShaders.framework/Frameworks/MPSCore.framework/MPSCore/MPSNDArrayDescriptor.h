@interface MPSNDArrayDescriptor : NSObject {
    void /* unknown type, empty encoding */ _dimensionLengths;
    void /* unknown type, empty encoding */ _sliceOffsets;
    void /* unknown type, empty encoding */ _sliceLengths;
    void /* unknown type, empty encoding */ _dimensionOrder;
    MPSNDArrayDescriptor *_child;
    MPSNDArrayDescriptor *_parent;
    int _transitionOp;
}

@property (nonatomic) BOOL preferPackedRows;
@property (nonatomic) unsigned int dataType;
@property (nonatomic) unsigned long long numberOfDimensions;

+ (id)descriptorWithDataType:(unsigned int)a0 shape:(id)a1;
+ (id)descriptorWithDataType:(unsigned int)a0 dimensionSizes:(unsigned long long)a1;
+ (id)descriptorWithDataType:(unsigned int)a0 dimensionCount:(unsigned long long)a1 dimensionSizes:(unsigned long long *)a2;

- (void)transposeDimension:(unsigned long long)a0 withDimension:(unsigned long long)a1;
- (void)dealloc;
- (void /* unknown type, empty encoding */)dimensionOrder;
- (id)getShape;
- (struct unique_ptr<const std::__1::vector<long, std::__1::allocator<long> >, std::__1::default_delete<const std::__1::vector<long, std::__1::allocator<long> > > > { struct __compressed_pair<const std::__1::vector<long, std::__1::allocator<long> > *, std::__1::default_delete<const std::__1::vector<long, std::__1::allocator<long> > > > { struct vector<long, std::__1::allocator<long> > *x0; } x0; })getShapeVector;
- (id)initWithDataType:(SEL)a0 dimensions:(unsigned int)a1 sizes:(unsigned long long)a2;
- (unsigned long long)lengthOfDimension:(unsigned long long)a0;
- (void)setLengthOfDimension:(unsigned long long)a0 atIndex:(unsigned long long)a1;
- (struct MPSDimensionSlice { unsigned long long x0; unsigned long long x1; })sliceRangeForDimension:(unsigned long long)a0;
- (void)sliceDimension:(unsigned long long)a0 withSubrange:(struct MPSDimensionSlice { unsigned long long x0; unsigned long long x1; })a1;
- (void)permuteWithDimensionOrder:(unsigned long long *)a0;
- (void)reshapeWithShape:(id)a0;
- (void)reshapeWithDimensionCount:(unsigned long long)a0 dimensionSizes:(unsigned long long *)a1;

@end
