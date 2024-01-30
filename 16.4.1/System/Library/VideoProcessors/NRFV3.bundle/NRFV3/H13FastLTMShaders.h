@protocol MTLComputePipelineState;

@interface H13FastLTMShaders : NSObject

@property (readonly, nonatomic) id<MTLComputePipelineState> ltmDownsampleYCbCrToRGB;
@property (readonly, nonatomic) id<MTLComputePipelineState> ltmDemosaic;
@property (readonly, nonatomic) id<MTLComputePipelineState> ltmDemosaicQuadra;
@property (readonly, nonatomic) id<MTLComputePipelineState> ltmDemosaicQuadra4Channel;
@property (readonly, nonatomic) id<MTLComputePipelineState> ltmDownsampleRGB_2x;

- (id)initWithMetalContext:(id)a0;
- (void).cxx_destruct;

@end
