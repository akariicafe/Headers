@protocol MTLComputePipelineState;

@interface PanoramaStitchingShaders : NSObject

@property (readonly, nonatomic) id<MTLComputePipelineState> computeCentralStitchingMask;
@property (readonly, nonatomic) id<MTLComputePipelineState> initializeSeamPreviousSlice;
@property (readonly, nonatomic) id<MTLComputePipelineState> initializeSeamPreviousSliceWithMask;
@property (readonly, nonatomic) id<MTLComputePipelineState> computeSeamCost;
@property (readonly, nonatomic) id<MTLComputePipelineState> seamCutDescend;
@property (readonly, nonatomic) id<MTLComputePipelineState> seamCutAscend;

- (id)initWithContext:(id)a0;
- (void).cxx_destruct;

@end
