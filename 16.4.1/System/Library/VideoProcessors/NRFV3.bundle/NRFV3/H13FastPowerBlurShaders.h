@protocol MTLComputePipelineState;

@interface H13FastPowerBlurShaders : NSObject

@property (readonly, nonatomic) id<MTLComputePipelineState> remosaicYUV;
@property (readonly, nonatomic) id<MTLComputePipelineState> remosaicRGB;
@property (readonly, nonatomic) id<MTLComputePipelineState> resampleRawAndCreateHighFrequencyMap;
@property (readonly, nonatomic) id<MTLComputePipelineState> applyPowerBlur;
@property (readonly, nonatomic) id<MTLComputePipelineState> resampleHalfSizeToFullSizeRGB;
@property (readonly, nonatomic) id<MTLComputePipelineState> resampleHalfSizeToFullSizeYUV;

- (id)initWithMetalContext:(id)a0;
- (void).cxx_destruct;

@end
