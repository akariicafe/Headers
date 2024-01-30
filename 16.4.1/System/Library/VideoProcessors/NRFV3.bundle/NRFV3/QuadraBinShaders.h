@protocol MTLComputePipelineState;

@interface QuadraBinShaders : NSObject

@property (readonly, nonatomic) id<MTLComputePipelineState> quadraBin;

- (id)initWithMetalContext:(id)a0;
- (void).cxx_destruct;

@end
