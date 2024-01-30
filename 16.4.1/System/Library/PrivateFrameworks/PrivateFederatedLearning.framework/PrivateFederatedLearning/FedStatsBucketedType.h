@class NSArray, NSNumber;

@interface FedStatsBucketedType : FedStatsBoundedULongType

@property (retain, nonatomic) NSArray *bucketBoundaries;
@property (retain, nonatomic) NSNumber *minValue;
@property (retain, nonatomic) NSNumber *maxValue;
@property (retain, nonatomic) NSNumber *bucketCount;
@property (retain, nonatomic) NSNumber *stepSize;
@property (nonatomic) long long version;

+ (id)createFromDict:(id)a0 possibleError:(id *)a1;

- (long long)dataType;
- (void).cxx_destruct;
- (unsigned long long)classCount;
- (id)sampleForIndex:(unsigned long long)a0;
- (id)decodeFromIndex:(id)a0 possibleError:(id *)a1;
- (id)encodeToIndex:(id)a0 possibleError:(id *)a1;
- (id)indexToInterval:(id)a0;
- (id)initWithBucketBoundaries:(id)a0;
- (id)initWithMinValue:(id)a0 maxValue:(id)a1 bucketCount:(id)a2;

@end
