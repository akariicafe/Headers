@protocol MTLCommandQueue, MTLDevice, MTLCommandBuffer;

@interface VCPCNNMetalContext : NSObject

@property (retain) id<MTLDevice> device;
@property (retain) id<MTLCommandQueue> commandQueue;
@property (retain) id<MTLCommandBuffer> commandBuffer;

+ (BOOL)supportGPU;
+ (BOOL)supportVectorForward;
+ (id)sharedCommandQueue;

- (void).cxx_destruct;
- (int)execute;
- (id)initNewContext:(BOOL)a0;

@end
