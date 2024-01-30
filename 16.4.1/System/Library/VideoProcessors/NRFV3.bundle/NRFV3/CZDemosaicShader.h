@protocol MTLComputePipelineState;

@interface CZDemosaicShader : NSObject

@property (readonly, nonatomic) id<MTLComputePipelineState> czDemosaicStage;

- (id)initWithMetalContext:(id)a0;
- (void).cxx_destruct;

@end
