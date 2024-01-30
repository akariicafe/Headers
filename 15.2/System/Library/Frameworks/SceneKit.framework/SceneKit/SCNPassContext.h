@protocol MTLCommandQueue, MTLCommandBuffer, MTLDevice;

@interface SCNPassContext : NSObject {
    struct { struct __C3DFXPass *x0; struct __C3DFXTechnique *x1; void *x2; struct __C3DEngineContext *x3; struct __C3DFXProgramObject *x4; double x5; void *x6; struct __C3DRendererElement *x7; long long x8; } *_context;
}

@property (readonly, nonatomic) double time;
@property (readonly, nonatomic) id<MTLCommandQueue> commandQueue;
@property (readonly, nonatomic) id<MTLCommandBuffer> commandBuffer;
@property (readonly, nonatomic) id<MTLDevice> device;

- (id)inputTextureWithName:(id)a0;
- (id)outputTextureWithName:(id)a0;

@end
