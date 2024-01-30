@protocol MTLCommandQueue, MTLCommandBuffer, MTLDevice;

@interface SCNPassContext : NSObject {
    struct { struct __C3DFXPass *x0; struct __C3DFXTechnique *x1; void *x2; struct __C3DEngineContext *x3; struct __C3DCullingContext *x4; struct __C3DFXProgramObject *x5; double x6; void *x7; struct __C3DRendererElement *x8; long long x9; unsigned char x10; unsigned char x11; } *_context;
}

@property (readonly, nonatomic) double time;
@property (readonly, nonatomic) id<MTLCommandQueue> commandQueue;
@property (readonly, nonatomic) id<MTLCommandBuffer> commandBuffer;
@property (readonly, nonatomic) id<MTLDevice> device;

- (id)outputTextureWithName:(id)a0;
- (id)inputTextureWithName:(id)a0;

@end
