@protocol MTLComputePipelineState;

@interface PanoramaParallaxStageShaders : NSObject

@property (readonly, nonatomic) id<MTLComputePipelineState> applyWarpToSlice;
@property (readonly, nonatomic) id<MTLComputePipelineState> computePreShifts;
@property (readonly, nonatomic) id<MTLComputePipelineState> downsampleShifts;

- (id)initWithContext:(id)a0;
- (void).cxx_destruct;

@end
