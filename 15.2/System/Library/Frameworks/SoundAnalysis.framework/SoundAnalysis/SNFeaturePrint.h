@class MLMultiArray, NSString;

@interface SNFeaturePrint : NSObject <SNTimeRangeProvidingWritable, SNTimeRangeProviding>

@property (readonly, nonatomic) long long featurePrintType;
@property (readonly, nonatomic) MLMultiArray *featureVector;
@property (nonatomic) struct { struct { long long value; int timescale; unsigned int flags; long long epoch; } start; struct { long long value; int timescale; unsigned int flags; long long epoch; } duration; } timeRange;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsSecureCoding;
+ (id)cosineSimilarityBetweenOneFeatureVector:(id)a0 andAnotherFeatureVector:(id)a1 error:(id *)a2;
+ (id)cosineSimilarityBetweenOneFloat32Array:(float *)a0 andAnotherFloat32Array:(float *)a1 length:(unsigned long long)a2 error:(id *)a3;
+ (id)cosineSimilarityBetweenOneOneFeaturePrint:(id)a0 andAnotherFeaturePrint:(id)a1 error:(id *)a2;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithFeaturePrintType:(long long)a0 featureVector:(id)a1;
- (BOOL)isEqualToFeaturePrint:(id)a0;
- (id)cosineSimilarityToFeaturePrint:(id)a0 error:(id *)a1;

@end
