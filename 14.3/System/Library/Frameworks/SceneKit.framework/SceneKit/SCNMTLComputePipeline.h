@protocol MTLComputePipelineState, MTLFunction;

@interface SCNMTLComputePipeline : NSObject

@property (retain, nonatomic) id<MTLComputePipelineState> state;
@property (retain, nonatomic) id<MTLFunction> computeFunction;

- (id)init;
- (void)dealloc;
- (id)description;

@end
