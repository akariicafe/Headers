@class _TtC17KnowledgeGraphKit20MAFloatMatrixWrapper;

@interface MAFloatMatrix : NSObject

@property (class, readonly, nonatomic) Class wrapperClass;

@property (readonly, nonatomic) _TtC17KnowledgeGraphKit20MAFloatMatrixWrapper *wrapper;
@property (readonly, nonatomic) long long rows;
@property (readonly, nonatomic) long long columns;
@property (readonly, nonatomic) long long count;

+ (id)zerosWithRows:(long long)a0 columns:(long long)a1;
+ (id)onesWithRows:(long long)a0 columns:(long long)a1;

- (float)sum;
- (float)mean;
- (id)row:(long long)a0;
- (id)initWithArray:(id)a0;
- (BOOL)isApproximatelyEqualTo:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)array;
- (unsigned long long)hash;
- (id)data;
- (id)initWithWrapper:(id)a0;
- (BOOL)isApproximatelyEqualTo:(id)a0 epsilon:(float)a1;
- (float)sumOfSquares;
- (id)initWithFloats:(const float *)a0 rows:(long long)a1 columns:(long long)a2;
- (float)floatAtRow:(long long)a0 column:(long long)a1;
- (id)matrixBySubtractingMatrix:(id)a0;
- (id)matrixBySubtractingScalar:(float)a0;
- (id)matrixByAddingScalar:(float)a0;
- (id)sumAlongAxis:(unsigned long long)a0;
- (id)meanAlongAxis:(unsigned long long)a0;
- (id)matrixByAppendingColumnsOfMatrix:(id)a0;
- (id)initWithData:(id)a0 rows:(long long)a1 columns:(long long)a2;
- (id)matrixByAppendingRow:(id)a0;
- (id)matrixByAppendingColumn:(id)a0;

@end
