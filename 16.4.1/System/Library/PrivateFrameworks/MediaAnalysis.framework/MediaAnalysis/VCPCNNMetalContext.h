@protocol MTLCommandQueue, MTLDevice, MTLCommandBuffer;

@interface VCPCNNMetalContext : NSObject

@property (retain) id<MTLDevice> device;
@property (retain) id<MTLCommandQueue> commandQueue;
@property (retain) id<MTLCommandBuffer> commandBuffer;

+ (id)sharedCommandQueue;
+ (BOOL)supportGPU;
+ (BOOL)supportVectorForward;

- (int)execute;
- (void).cxx_destruct;
- (id)initNewContext:(BOOL)a0;

@end
