@protocol MTLComputePipelineState;

@interface RegWarpShaders : NSObject

@property (readonly, nonatomic) id<MTLComputePipelineState> demosaicQuarterLuma;

- (id)initWithMetalContext:(id)a0;
- (void).cxx_destruct;

@end
