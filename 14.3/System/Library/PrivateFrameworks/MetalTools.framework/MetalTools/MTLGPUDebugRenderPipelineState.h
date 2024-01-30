@class MTLRenderPipelineReflection, MTLTileRenderPipelineDescriptor, NSData, MTLRenderPipelineDescriptor, MTLGPUDebugBuffer, MTLGPUDebugFunction;
@protocol MTLBuffer;

@interface MTLGPUDebugRenderPipelineState : MTLToolsRenderPipelineState {
    MTLRenderPipelineDescriptor *_descriptor;
    MTLTileRenderPipelineDescriptor *_tileDescriptor;
    MTLRenderPipelineReflection *_internalReflection;
    MTLRenderPipelineReflection *_userReflection;
    struct KeyBufferPair { struct Key { struct { unsigned char key[32]; } hash; NSData *data; } key; id<MTLBuffer> buffer; } _globalConstants;
    unsigned long long _vertexConstantOffset;
    unsigned long long _fragmentConstantOffset;
    unsigned long long _tileConstantOffset;
    MTLGPUDebugBuffer *_indirectStateBuffer;
    BOOL _supportsIndirectCommandBuffers;
}

@property (readonly, nonatomic) MTLGPUDebugFunction *vertexFunction;
@property (readonly, nonatomic) MTLGPUDebugFunction *fragmentFunction;
@property (readonly, nonatomic) MTLGPUDebugFunction *tileFunction;
@property (readonly, nonatomic) MTLRenderPipelineReflection *internalReflection;
@property (readonly, nonatomic) MTLRenderPipelineReflection *userReflection;
@property (readonly, nonatomic) MTLGPUDebugBuffer *globalConstantsBuffer;
@property (readonly, nonatomic) unsigned long long vertexConstantOffset;
@property (readonly, nonatomic) unsigned long long fragmentConstantOffset;
@property (readonly, nonatomic) unsigned long long tileConstantOffset;
@property (readonly, nonatomic) MTLGPUDebugBuffer *indirectStateBuffer;

- (void)dealloc;
- (id).cxx_construct;
- (id)initWithRenderPipelineState:(id)a0 descriptor:(id)a1 unwrappedDescriptor:(id)a2 reflection:(id)a3 device:(id)a4 pipelineOptions:(unsigned long long)a5;
- (void)releaseReflection;
- (id)initWithRenderPipelineState:(id)a0 tileDescriptor:(id)a1 reflection:(id)a2 device:(id)a3;
- (void)_initConstantsBuffer:(id)a0 device:(id)a1;
- (id)vertexLibrary;
- (id)fragmentLibrary;

@end
