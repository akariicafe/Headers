@protocol MTLComputePipelineState, MTLLibrary;

@interface VNRShaders : NSObject {
    id<MTLLibrary> _library;
}

@property (readonly) id<MTLComputePipelineState> simpleCopy;
@property (readonly) id<MTLComputePipelineState> lumaInDownsample;
@property (readonly) id<MTLComputePipelineState> lumaInOutDownsampleDeghost;
@property (readonly) id<MTLComputePipelineState> chromaInDownsample;
@property (readonly) id<MTLComputePipelineState> chromaInOutDownsampleDeghost;
@property (readonly) id<MTLComputePipelineState> deghostPropagateLuma;
@property (readonly) id<MTLComputePipelineState> deghostPropagateLumaChroma;
@property (readonly) id<MTLComputePipelineState> fusionInitialTopLuma;
@property (readonly) id<MTLComputePipelineState> fusionTopLuma;
@property (readonly) id<MTLComputePipelineState> fusionInitialMidLuma;
@property (readonly) id<MTLComputePipelineState> fusionMidLuma;
@property (readonly) id<MTLComputePipelineState> fusionInitialBottomLuma;
@property (readonly) id<MTLComputePipelineState> fusionBottomLuma;
@property (readonly) id<MTLComputePipelineState> fusionInitialTopChroma;
@property (readonly) id<MTLComputePipelineState> fusionTopChroma;
@property (readonly) id<MTLComputePipelineState> fusionInitialMidChroma;
@property (readonly) id<MTLComputePipelineState> fusionMidChroma;
@property (readonly) id<MTLComputePipelineState> fusionInitialBottomChroma;
@property (readonly) id<MTLComputePipelineState> fusionBottomChroma;

- (id)initWithMetalDevice:(id)a0;
- (void).cxx_destruct;
- (id)createFusionShaderUsingMetalDevice:(id)a0 colorChannel:(int)a1 isFirstFrame:(BOOL)a2 isTopBand:(BOOL)a3 isBottomBand:(BOOL)a4;

@end
