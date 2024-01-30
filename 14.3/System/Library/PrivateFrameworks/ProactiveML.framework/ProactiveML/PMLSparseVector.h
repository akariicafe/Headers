@interface PMLSparseVector : NSObject

@property (nonatomic) unsigned long long numberOfNonZeroValues;
@property (nonatomic) long long *sparseIndices;
@property (nonatomic) float *sparseValues;
@property (readonly, nonatomic) unsigned long long length;

+ (id)sparseVectorFromDense:(const float *)a0 length:(unsigned long long)a1;
+ (id)sparseVectorFromDense:(id)a0;
+ (id)sparseVectorEmptyWithLength:(unsigned long long)a0;
+ (id)sparseVectorFromNumbers:(id)a0;
+ (id)sparseVectorFromNumbers:(id)a0 indices:(id)a1 length:(unsigned long long)a2;

- (float)valueAtIndex:(unsigned long long)a0;
- (id)init;
- (void)dealloc;
- (float)maxValue;
- (float)l2norm;
- (float)minValue;
- (id)vectorWithConstantColumn;
- (void)scaleInPlaceWithInversedFactor:(float)a0;
- (void)enumerateNonZeroValuesWithBlock:(id /* block */)a0;
- (id)initWithLength:(unsigned long long)a0 numberOfNonZeroValues:(unsigned long long)a1 indicesData:(id)a2 valuesData:(id)a3;
- (id)initWithLength:(unsigned long long)a0 numberOfNonZeroValues:(unsigned long long)a1 indices:(long long *)a2 values:(float *)a3;
- (id)indicesData;
- (id)valuesData;
- (id)indicesAsUInt16Data;
- (id)quantizedValuesAsUInt8DataWithMin:(float)a0 max:(float)a1;
- (float)maxAbsValue;
- (void)processNonZeroValuesInPlaceWithBlock:(id /* block */)a0;

@end
