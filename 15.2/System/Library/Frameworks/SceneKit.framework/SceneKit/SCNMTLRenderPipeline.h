@class NSArray, MTLVertexDescriptor;
@protocol MTLFunction, MTLRenderPipelineState;

@interface SCNMTLRenderPipeline : NSObject {
    struct { char vertexIndex; char fragmentIndex; } _sceneBuffer;
    struct __C3DFXMetalProgram { } *_program;
    struct __C3DFXPass { } *_pass;
    struct { unsigned long long colorFormat[8]; unsigned long long depthFormat; unsigned long long stencilFormat; unsigned char sampleCount; } _renderPassDesc;
    unsigned int _buffersUsageMask[2];
    unsigned int _texturesUsageMask[2];
    unsigned int _samplersUsageMask[2];
}

@property (retain, nonatomic) id<MTLRenderPipelineState> state;
@property (copy, nonatomic) MTLVertexDescriptor *vertexDescriptor;
@property (retain, nonatomic) id<MTLFunction> vertexFunction;
@property (retain, nonatomic) id<MTLFunction> fragmentFunction;
@property (copy, nonatomic) NSArray *frameBufferBindings;
@property (copy, nonatomic) NSArray *nodeBufferBindings;
@property (copy, nonatomic) NSArray *passBufferBindings;
@property (copy, nonatomic) NSArray *shadableBufferBindings;
@property (copy, nonatomic) NSArray *lightBufferBindings;
@property (readonly, nonatomic) unsigned int vertexBuffersUsageMask;

- (id)description;
- (id)init;
- (void)dealloc;
- (BOOL)matchesRenderPassDescriptor:(id)a0;
- (void)_computeUsageForArguments:(id)a0 function:(id)a1;

@end
