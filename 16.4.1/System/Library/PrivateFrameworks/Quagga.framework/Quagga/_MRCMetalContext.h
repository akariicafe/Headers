@protocol MTLDevice, MTLCommandBuffer, MTLLibrary, MTLCommandQueue;

@interface _MRCMetalContext : NSObject

@property (readonly, nonatomic) id<MTLDevice> device;
@property (readonly, nonatomic) id<MTLLibrary> library;
@property (readonly, nonatomic) id<MTLCommandQueue> commandQueue;
@property (readonly, nonatomic) id<MTLCommandBuffer> currentCommandBuffer;

- (id)init;
- (void).cxx_destruct;
- (id)beginCommandBuffer;
- (id)beginCommandBufferWithError:(id *)a0;
- (void)commitCommandBuffer;
- (void)commitCommandBufferShouldWaitUntilCompleted:(BOOL)a0;
- (id)initWithDevice:(id)a0 libraryURL:(id)a1 error:(id *)a2;
- (id)newComputePipelineStateWithFunctionName:(id)a0 constantValues:(id)a1 error:(id *)a2;
- (id)newTextureByBindingIOSurface:(struct __IOSurface { } *)a0 pixelFormat:(unsigned long long)a1 width:(unsigned long long)a2 height:(unsigned long long)a3 usage:(unsigned long long)a4 plane:(unsigned long long)a5 error:(id *)a6;

@end
