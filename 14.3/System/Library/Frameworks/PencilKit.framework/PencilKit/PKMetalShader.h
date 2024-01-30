@class MTLRenderPipelineDescriptor;
@protocol MTLFunction, MTLRenderPipelineState;

@interface PKMetalShader : NSObject {
    id<MTLFunction> _vertexFunction;
    id<MTLFunction> _fragmentFunction;
    id<MTLRenderPipelineState> _pipelineStateWithColorMaskNone;
    id<MTLRenderPipelineState> _msaaPipelineState;
    id<MTLRenderPipelineState> _msaaPipelineStateWithColorMaskNone;
    unsigned long long _stencilPixelFormat;
    long long _blendMode;
    unsigned long long _colorAttachmentIndex;
    MTLRenderPipelineDescriptor *_sharedPipelineDescriptor;
    unsigned long long _numColorAttachments;
    PKMetalShader *_noBlendModeShader;
    PKMetalShader *_addBlendModeShader;
    PKMetalShader *_subtractBlendModeShader;
    PKMetalShader *_maxBlendModeShader;
    PKMetalShader *_invertBlendModeShader;
    unsigned long long _msaaPipelineStateSampleCount;
    unsigned long long _msaaPipelineStateWithColorMaskNoneSampleCount;
}

@property (readonly, nonatomic) id<MTLRenderPipelineState> pipelineState;

- (id)init;
- (void).cxx_destruct;
- (id)initWithVertexFunction:(id)a0 fragmentFunction:(id)a1 blendMode:(long long)a2 colorAttachmentIndex:(unsigned long long)a3 sharedPipelineDescriptor:(id)a4 numColorAttachments:(unsigned long long)a5;
- (void)createPipelineState;
- (id)pipelineStateDescriptorSampleCount:(unsigned long long)a0;
- (id)newShaderWithBlendMode:(long long)a0;
- (id)initWithVertexFunction:(id)a0 fragmentFunction:(id)a1 sharedPipelineDescriptor:(id)a2 numColorAttachments:(unsigned long long)a3;
- (id)msaaPipelineStateWithSampleCount:(unsigned long long)a0;
- (id)pipelineStateWithColorMaskNone;
- (id)msaaPipelineStateWithColorMaskNoneAndSampleCount:(unsigned long long)a0;
- (id)shaderWithBlendMode:(long long)a0;

@end
