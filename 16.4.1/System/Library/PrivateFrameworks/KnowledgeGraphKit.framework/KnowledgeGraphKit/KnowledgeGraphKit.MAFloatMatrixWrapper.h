@class NSString;

@interface KnowledgeGraphKit.MAFloatMatrixWrapper : NSObject <NSCopying, NSMutableCopying> {
    void /* unknown type, empty encoding */ _floatMatrix;
}

@property (nonatomic, readonly) long long count;
@property (nonatomic, readonly) long long rows;
@property (nonatomic, readonly) long long columns;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) long long hash;

+ (id)onesWithRows:(long long)a0 columns:(long long)a1;
+ (id)repeatingWithElement:(float)a0 rows:(long long)a1 columns:(long long)a2;
+ (id)wrapperWithData:(id)a0 rows:(long long)a1 columns:(long long)a2;
+ (id)zerosWithRows:(long long)a0 columns:(long long)a1;

- (id)mutableCopyWithZone:(void *)a0;
- (id)array;
- (id)copyWithZone:(void *)a0;
- (id)data;
- (BOOL)isEqual:(id)a0;
- (float)mean;
- (float)sum;
- (id)row:(long long)a0;
- (BOOL)isApproximatelyEqualTo:(id)a0 epsilon:(float)a1;
- (float)floatAtRow:(long long)a0 column:(long long)a1;
- (id)initWithFloats:(const float *)a0 rows:(long long)a1 columns:(long long)a2;
- (BOOL)isApproximatelyEqualTo:(id)a0;
- (id)matrixByAddingScalar:(float)a0;
- (id)matrixByAppendingColumnVector:(id)a0;
- (id)matrixByAppendingColumnsOfMatrix:(id)a0;
- (id)matrixBySubtractingMatrix:(id)a0;
- (id)matrixBySubtractingScalar:(float)a0;
- (id)meanAlongAxis:(unsigned long long)a0;
- (id)sumAlongAxis:(unsigned long long)a0;
- (float)sumOfSquares;
- (id)init;
- (void).cxx_destruct;
- (id)initWithRows:(id)a0;

@end
