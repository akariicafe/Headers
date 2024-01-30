@class NSArray;

@interface MLCTensorDescriptor : NSObject <NSCopying>

@property (class, readonly, nonatomic) unsigned long long maxTensorDimensions;

@property (copy, nonatomic) NSArray *stride;
@property (nonatomic) unsigned long long tensorAllocationSizeInBytes;
@property (readonly, nonatomic) unsigned long long fanIn;
@property (readonly, nonatomic) unsigned long long fanOut;
@property (readonly, nonatomic) BOOL variableLengthSequences;
@property (readonly, nonatomic) BOOL isFloatingPoint;
@property (readonly, nonatomic) int dataType;
@property (readonly, nonatomic) unsigned long long dimensionCount;
@property (readonly, copy, nonatomic) NSArray *shape;
@property (readonly, copy, nonatomic) NSArray *sequenceLengths;
@property (readonly, nonatomic) BOOL sortedSequences;
@property (readonly, copy, nonatomic) NSArray *batchSizePerSequenceStep;

+ (id)convolutionWeightsDescriptorWithWidth:(unsigned long long)a0 height:(unsigned long long)a1 inputFeatureChannelCount:(unsigned long long)a2 outputFeatureChannelCount:(unsigned long long)a3 dataType:(int)a4;
+ (id)descriptorWithShape:(id)a0 sequenceLengths:(id)a1 sortedSequences:(BOOL)a2 dataType:(int)a3;
+ (id)descriptorWithShape:(id)a0 dataType:(int)a1;
+ (id)descriptorWithWidth:(unsigned long long)a0 height:(unsigned long long)a1 featureChannelCount:(unsigned long long)a2 batchSize:(unsigned long long)a3 dataType:(int)a4;
+ (id)descriptorWithWidth:(unsigned long long)a0 height:(unsigned long long)a1 featureChannels:(unsigned long long)a2 batchSize:(unsigned long long)a3 strideForWidth:(unsigned long long)a4 strideForHeight:(unsigned long long)a5 strideForBatch:(unsigned long long)a6 dataType:(int)a7;
+ (id)descriptorWithShape:(id)a0 stride:(id)a1 dataType:(int)a2;
+ (unsigned long long)elementByteCount:(int)a0;
+ (id)descriptorWithWidth:(unsigned long long)a0 height:(unsigned long long)a1 featureChannelCount:(unsigned long long)a2 batchSize:(unsigned long long)a3;
+ (id)convolutionWeightsDescriptorWithInputFeatureChannelCount:(unsigned long long)a0 outputFeatureChannelCount:(unsigned long long)a1 dataType:(int)a2;
+ (id)convolutionBiasesDescriptorWithFeatureChannelCount:(unsigned long long)a0 dataType:(int)a1;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (unsigned long long)elementCount;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initNCHWTensorWithWidth:(unsigned long long)a0 height:(unsigned long long)a1 featureChannels:(unsigned long long)a2 batchSize:(unsigned long long)a3 strideForWidth:(unsigned long long)a4 strideForHeight:(unsigned long long)a5 strideForChannel:(unsigned long long)a6 strideForBatch:(unsigned long long)a7 fanIn:(unsigned long long)a8 fanOut:(unsigned long long)a9 dataType:(int)a10;
- (id)initTensorWithShape:(id)a0 stride:(id)a1 sequenceLengths:(id)a2 sortedSequences:(BOOL)a3 fanIn:(unsigned long long)a4 fanOut:(unsigned long long)a5 dataType:(int)a6;
- (id)initTensorWithShape:(id)a0 stride:(id)a1 fanIn:(unsigned long long)a2 fanOut:(unsigned long long)a3 dataType:(int)a4;
- (id)initConvolutionWeightsDescriptorWithWidth:(unsigned long long)a0 height:(unsigned long long)a1 inputFeatureChannels:(unsigned long long)a2 outputFeatureChannels:(unsigned long long)a3 dataType:(int)a4;
- (void)updateStride:(id)a0 tensorAllocationSize:(unsigned long long)a1;

@end
