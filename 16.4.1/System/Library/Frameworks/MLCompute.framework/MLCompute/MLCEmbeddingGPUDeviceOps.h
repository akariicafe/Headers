@class NSNumber, NSArray;

@interface MLCEmbeddingGPUDeviceOps : MLCGPUDeviceOps

@property (retain, nonatomic) id gradientForWeights;
@property (copy, nonatomic) NSNumber *paddingIndex;
@property (copy, nonatomic) NSArray *embeddingParams;
@property (nonatomic) BOOL scaleGradientByFrequency;

+ (id)deviceOps;

- (void).cxx_destruct;
- (id)initWithForwardKernel:(id)a0 gradientKernel:(id)a1;

@end
