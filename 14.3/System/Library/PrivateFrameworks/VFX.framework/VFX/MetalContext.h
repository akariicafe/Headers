@class NSLock, NSMutableDictionary, NSMutableArray, FramebufferDescriptor;
@protocol MTLDepthStencilState, MTLTexture;

@interface MetalContext : NSObject

@property (retain, nonatomic) id<MTLDepthStencilState> depthStencilState;
@property (retain, nonatomic) FramebufferDescriptor *framebufferDescriptor;
@property (retain, nonatomic) NSMutableDictionary *renderPipelineStateCache;
@property (retain, nonatomic) id<MTLTexture> fontTexture;
@property (retain, nonatomic) NSMutableArray *bufferCache;
@property (retain, nonatomic) NSLock *bufferCacheLock;
@property (nonatomic) double lastBufferCachePurge;

- (id)init;
- (void).cxx_destruct;
- (void)makeDeviceObjectsWithDevice:(id)a0;
- (void)makeFontTextureWithDevice:(id)a0;
- (void)emptyRenderPipelineStateCache;
- (void)renderDrawData:(struct ImDrawData { BOOL x0; struct ImDrawList **x1; int x2; int x3; int x4; struct ImVec2 { float x0; float x1; } x5; struct ImVec2 { float x0; float x1; } x6; struct ImVec2 { float x0; float x1; } x7; struct ImGuiViewport *x8; } *)a0 commandBuffer:(id)a1 commandEncoder:(id)a2;
- (id)_renderPipelineStateForFramebufferDescriptor:(id)a0 device:(id)a1;
- (id)renderPipelineStateForFrameAndDevice:(id)a0;
- (id)dequeueReusableBufferOfLength:(unsigned long long)a0 device:(id)a1;
- (void)setupRenderState:(struct ImDrawData { BOOL x0; struct ImDrawList **x1; int x2; int x3; int x4; struct ImVec2 { float x0; float x1; } x5; struct ImVec2 { float x0; float x1; } x6; struct ImVec2 { float x0; float x1; } x7; struct ImGuiViewport *x8; } *)a0 commandBuffer:(id)a1 commandEncoder:(id)a2 renderPipelineState:(id)a3 vertexBuffer:(id)a4 vertexBufferOffset:(unsigned long long)a5;
- (void)enqueueReusableBuffer:(id)a0;

@end
