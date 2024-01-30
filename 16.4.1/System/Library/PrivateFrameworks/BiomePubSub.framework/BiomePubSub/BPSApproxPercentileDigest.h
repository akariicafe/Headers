@class NSMutableArray;

@interface BPSApproxPercentileDigest : PBCodable <BMProtoBufWrapper, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSMutableArray *mergedCentroids;
@property (retain, nonatomic) NSMutableArray *unmergedCentroids;
@property (nonatomic) float min;
@property (nonatomic) float max;
@property (nonatomic) unsigned long long maxCentroidCount;
@property (nonatomic) unsigned long long totalWeight;
@property (nonatomic) unsigned long long unmergedBufferSize;

- (id)initWithProto:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void)addValue:(float)a0;
- (id)encodeAsProto;
- (id)initWithCoder:(id)a0;
- (id)proto;
- (id)initWithProtoData:(id)a0;
- (id)initWithCapacity:(unsigned long long)a0;
- (void).cxx_destruct;
- (void)addValue:(float)a0 weight:(unsigned int)a1;
- (void)addDigest:(id)a0;
- (id)initWithCapacity:(unsigned long long)a0 bufferMultiplier:(unsigned long long)a1;
- (void)mergeCentroids;
- (double)quantileLimitForClusterIndex:(unsigned long long)a0 maxCentroidCount:(unsigned long long)a1;
- (double)valueAtQuantile:(double)a0;

@end
