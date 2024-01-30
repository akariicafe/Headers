@class NSString;

@interface KnowledgeGraphKit.MAFloatVectorWrapper : NSObject <NSCopying, NSMutableCopying> {
    void /* unknown type, empty encoding */ _floatVector;
}

@property (nonatomic, readonly) long long count;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) NSString *debugDescription;
@property (nonatomic, readonly) long long hash;

+ (id)zerosOfCount:(long long)a0;
+ (id)onesOfCount:(long long)a0;
+ (id)repeatingFloat:(float)a0 count:(long long)a1;

- (float)sum;
- (float)mean;
- (BOOL)isApproximatelyEqualTo:(id)a0;
- (float)standardDeviation;
- (id)mutableCopyWithZone:(void *)a0;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(void *)a0;
- (id)array;
- (id)data;
- (id)vectorByDividingByScalar:(float)a0;
- (id)vectorByMultiplyingByScalar:(float)a0;
- (id)vectorByAddingVector:(id)a0;
- (id)sliceFromStart:(long long)a0 toEnd:(long long)a1;
- (id)initWithFloats:(const float *)a0 count:(long long)a1;
- (id)vectorByElementwiseRaisingToExponent:(float)a0;
- (float)floatAtIndex:(long long)a0;
- (id)vectorByAddingScalar:(float)a0;
- (BOOL)isApproximatelyEqualTo:(id)a0 epsilon:(float)a1;
- (id)vectorBySubtractingVector:(id)a0;
- (id)vectorBySubtractingScalar:(float)a0;
- (id)vectorByElementwiseMultiplyingByWrapper:(id)a0;
- (float)dotProductWithWrapper:(id)a0;
- (float)sumOfSquares;
- (id)naturalLogarithm;
- (id)naturalLogarithmIfPositive;
- (id)initWithArray:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
