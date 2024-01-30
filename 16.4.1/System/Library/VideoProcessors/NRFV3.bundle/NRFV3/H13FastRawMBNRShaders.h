@class SoftISPKernelWithFunctionConstants;
@protocol MTLComputePipelineState;

@interface H13FastRawMBNRShaders : NSObject

@property (readonly, nonatomic) id<MTLComputePipelineState> noiseLookup;
@property (readonly, nonatomic) id<MTLComputePipelineState> downscale2x;
@property (readonly, nonatomic) SoftISPKernelWithFunctionConstants *lowPassBayer;
@property (readonly, nonatomic) SoftISPKernelWithFunctionConstants *denoiseChromaAndStepDown;
@property (readonly, nonatomic) SoftISPKernelWithFunctionConstants *regenerateBayer;
@property (readonly, nonatomic) SoftISPKernelWithFunctionConstants *denoiseBayerAndStepDown;
@property (readonly, nonatomic) SoftISPKernelWithFunctionConstants *lowPassBayerAndDownscale2x;
@property (readonly, nonatomic) SoftISPKernelWithFunctionConstants *denoiseChromaAndStepDownAndRegenBayer;

- (id)initWithMetalContext:(id)a0;
- (void).cxx_destruct;

@end
