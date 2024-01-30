@protocol MTLComputePipelineState;

@interface PanoramaAssemblyShaders : NSObject

@property (readonly, nonatomic) id<MTLComputePipelineState> resetPanoSizedState;
@property (readonly, nonatomic) id<MTLComputePipelineState> resetSliceSizedState;
@property (readonly, nonatomic) id<MTLComputePipelineState> addSliceToStaging;
@property (readonly, nonatomic) id<MTLComputePipelineState> addSliceToProjectiveGrid;
@property (readonly, nonatomic) id<MTLComputePipelineState> addStagingToOutput;
@property (readonly, nonatomic) id<MTLComputePipelineState> prepareForDenoising;

- (id)initWithContext:(id)a0;
- (void).cxx_destruct;

@end
