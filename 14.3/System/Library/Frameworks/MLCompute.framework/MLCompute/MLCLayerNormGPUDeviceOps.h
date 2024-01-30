@class NSArray;

@interface MLCLayerNormGPUDeviceOps : MLCGPUDeviceOps

@property (retain, nonatomic) NSArray *normalizedShape;
@property (nonatomic) float varianceEpsilon;
@property (retain, nonatomic) id layerNormGammaGradient;
@property (retain, nonatomic) id layerNormBetaGradient;
@property (retain, nonatomic) id layerNormInverseSqrtVariance;
@property (retain, nonatomic) id layerNormInputNormalized;
@property (retain, nonatomic) id layerNormMultiGPUChildOps;

+ (id)deviceOpsWithForwardKernel:(id)a0 gradientKernel:(id)a1;

- (void).cxx_destruct;
- (id)initWithForwardKernel:(id)a0 gradientKernel:(id)a1;

@end
