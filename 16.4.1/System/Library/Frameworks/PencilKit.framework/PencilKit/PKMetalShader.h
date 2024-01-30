@class MTLRenderPipelineDescriptor;
@protocol MTLFunction, MTLRenderPipelineState;

@interface PKMetalShader : NSObject {
    id<MTLFunction> _vertexFunction;
    id<MTLFunction> _fragmentFunction;
    id<MTLRenderPipelineState> _pipelineState;
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
    PKMetalShader *_addNoAlphaBlendModeShader;
    PKMetalShader *_linearDodgeBlendModeShader;
    PKMetalShader *_multiplyBlendModeShader;
    PKMetalShader *_sourceOverBlendModeShader;
    PKMetalShader *_subtractBlendModeShader;
    PKMetalShader *_maxBlendModeShader;
    PKMetalShader *_invertBlendModeShader;
    unsigned long long _msaaPipelineStateSampleCount;
    unsigned long long _msaaPipelineStateWithColorMaskNoneSampleCount;
}

- (id)init;
- (void).cxx_destruct;

@end
