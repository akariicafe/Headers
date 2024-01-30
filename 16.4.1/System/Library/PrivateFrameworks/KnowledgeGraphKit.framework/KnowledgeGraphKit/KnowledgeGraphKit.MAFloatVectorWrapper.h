@class NSString;

@interface KnowledgeGraphKit.MAFloatVectorWrapper : NSObject <NSCopying, NSMutableCopying> {
    void /* unknown type, empty encoding */ _floatVector;
}

@property (nonatomic, readonly) long long count;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) NSString *debugDescription;
@property (nonatomic, readonly) long long hash;

+ (id)onesOfCount:(long long)a0;
+ (id)repeatingFloat:(float)a0 count:(long long)a1;
+ (id)zerosOfCount:(long long)a0;

- (id)mutableCopyWithZone:(void *)a0;
- (id)array;
- (float)standardDeviation;
- (id)copyWithZone:(void *)a0;
- (id)data;
- (BOOL)isEqual:(id)a0;
- (float)mean;
- (float)sum;
- (float)floatAtIndex:(long long)a0;
- (id)initWithFloats:(const float *)a0 count:(long long)a1;
- (BOOL)isApproximatelyEqualTo:(id)a0 epsilon:(float)a1;
- (float)dotProductWithWrapper:(id)a0;
- (BOOL)isApproximatelyEqualTo:(id)a0;
- (id)naturalLogarithm;
- (id)naturalLogarithmIfPositive;
- (id)sliceFromStart:(long long)a0 toEnd:(long long)a1;
- (float)sumOfSquares;
- (id)vectorByAddingScalar:(float)a0;
- (id)vectorByAddingVector:(id)a0;
- (id)vectorByDividingByScalar:(float)a0;
- (id)vectorByElementwiseMultiplyingByWrapper:(id)a0;
- (id)vectorByElementwiseRaisingToExponent:(float)a0;
- (id)vectorByMultiplyingByScalar:(float)a0;
- (id)vectorBySubtractingScalar:(float)a0;
- (id)vectorBySubtractingVector:(id)a0;
- (id)initWithArray:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
