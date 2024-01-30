@protocol MTLComputePipelineState, MTLFunction;

@interface SCNMTLComputePipeline : NSObject

@property (retain, nonatomic) id<MTLComputePipelineState> state;
@property (retain, nonatomic) id<MTLFunction> computeFunction;

- (void)dealloc;
- (id)init;
- (id)description;

@end
