@protocol MTLComputePipelineState;

@interface DisparityShaders : NSObject

@property (readonly, nonatomic) id<MTLComputePipelineState> demosaicBayerToARGB;
@property (readonly, nonatomic) id<MTLComputePipelineState> demosaicQuadraBayerToARGB;

- (id)initWithMetalContext:(id)a0;
- (void).cxx_destruct;

@end
