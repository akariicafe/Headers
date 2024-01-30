@class _TtC17KnowledgeGraphKit20MAFloatVectorWrapper;

@interface MAFloatVector : NSObject <NSCopying, NSMutableCopying>

@property (class, readonly, nonatomic) Class wrapperClass;

@property (readonly, nonatomic) _TtC17KnowledgeGraphKit20MAFloatVectorWrapper *wrapper;
@property (readonly, nonatomic) long long count;

+ (id)vectorRepeatingFloat:(float)a0 count:(long long)a1;
+ (id)meanVectorWithFloatVectors:(id)a0;
+ (id)zerosOfCount:(long long)a0;
+ (id)onesOfCount:(long long)a0;

- (float)sum;
- (id)array;
- (float)mean;
- (id)init;
- (void).cxx_destruct;
- (float)standardDeviation;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)data;
- (id)initWithData:(id)a0;
- (unsigned long long)hash;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (BOOL)isApproximatelyEqualTo:(id)a0;
- (id)initWithArray:(id)a0;
- (float)floatAtIndex:(long long)a0;
- (id)debugDescription;
- (id)initWithWrapper:(id)a0;
- (id)vectorByAppendingVector:(id)a0;
- (id)sliceFromStart:(long long)a0 toEnd:(long long)a1;
- (id)initWithFloats:(const float *)a0 count:(long long)a1;
- (id)vectorByDividingByScalar:(float)a0;
- (id)vectorByElementwiseRaisingToExponent:(float)a0;
- (id)vectorByElementwiseNaturalLogarithmIfPositive;
- (id)vectorByMultiplyingByScalar:(float)a0;
- (id)vectorByAddingScalar:(float)a0;
- (BOOL)isApproximatelyEqualTo:(id)a0 epsilon:(float)a1;
- (id)vectorBySubtractingVector:(id)a0;
- (id)vectorByAddingVector:(id)a0;
- (id)vectorBySubtractingScalar:(float)a0;
- (float)sumOfSquares;
- (id)vectorByElementwiseMultiplyingByVector:(id)a0;
- (float)dotProductWithVector:(id)a0;
- (id)vectorByElementwiseNaturalLogarithm;
- (id)vectorByAppendingFloat:(float)a0;
- (id)vectorByAppendingFloats:(const float *)a0 count:(long long)a1;
- (id)vectorByAppendingDoubles:(const double *)a0 count:(long long)a1;
- (id)vectorByAppendingArray:(id)a0;
- (BOOL)_isArrayOfFloats:(id)a0;

@end
