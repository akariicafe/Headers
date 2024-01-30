@interface MPSNDArrayDescriptor : NSObject {
    void /* unknown type, empty encoding */ _dimensionLengths;
    void /* unknown type, empty encoding */ _sliceOffsets;
    void /* unknown type, empty encoding */ _sliceLengths;
    void /* unknown type, empty encoding */ _dimensionOrder;
    MPSNDArrayDescriptor *_child;
    MPSNDArrayDescriptor *_parent;
    int _transitionOp;
}

@property (nonatomic) unsigned long long rowBytes;
@property (nonatomic) BOOL preferPackedRows;
@property (nonatomic) unsigned int dataType;
@property (nonatomic) unsigned long long numberOfDimensions;

+ (id)descriptorWithDataType:(unsigned int)a0 dimensionCount:(unsigned long long)a1 dimensionSizes:(unsigned long long *)a2;
+ (id)descriptorWithDataType:(unsigned int)a0 dimensionSizes:(unsigned long long)a1;
+ (id)descriptorWithDataType:(unsigned int)a0 shape:(id)a1;

- (void)dealloc;
- (id)getShape;
- (struct unique_ptr<const std::vector<long>, std::default_delete<const std::vector<long>>> { struct __compressed_pair<const std::vector<long> *, std::default_delete<const std::vector<long>>> { void *x0; } x0; })getShapeVector;
- (void)permuteWithDimensionOrder:(unsigned long long *)a0;
- (void)reshapeWithDimensionCount:(unsigned long long)a0 dimensionSizes:(unsigned long long *)a1;
- (void)reshapeWithShape:(id)a0;
- (void)setLengthOfDimension:(unsigned long long)a0 atIndex:(unsigned long long)a1;
- (void)sliceDimension:(unsigned long long)a0 withSubrange:(struct MPSDimensionSlice { unsigned long long x0; unsigned long long x1; })a1;
- (struct MPSDimensionSlice { unsigned long long x0; unsigned long long x1; })sliceRangeForDimension:(unsigned long long)a0;
- (void)transposeDimension:(unsigned long long)a0 withDimension:(unsigned long long)a1;
- (void /* unknown type, empty encoding */)dimensionOrder;
- (id)initWithDataType:(SEL)a0 dimensions:(unsigned int)a1 sizes:(unsigned long long)a2;
- (unsigned long long)lengthOfDimension:(unsigned long long)a0;

@end
