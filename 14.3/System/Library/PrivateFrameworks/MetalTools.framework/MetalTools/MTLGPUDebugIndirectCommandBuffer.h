@protocol MTLIndirectCommandBuffer, MTLBuffer;

@interface MTLGPUDebugIndirectCommandBuffer : MTLToolsIndirectCommandBuffer {
    BOOL _hasRender;
    BOOL _inheritsBuffers;
    BOOL _inheritsPipelineState;
    id<MTLBuffer> _argumentStorage;
    id<MTLBuffer> _drawIDBuffer;
    unsigned short _maxCommands;
    unsigned char _maxVertexBindings;
    unsigned char _maxFragmentBindings;
    unsigned short _commandByteStride;
    unsigned long long _originalResourceOptions;
    id<MTLIndirectCommandBuffer> _fencingICB;
}

@property (readonly, nonatomic) id<MTLBuffer> internalICBBuffer;
@property (readonly, nonatomic) id<MTLBuffer> internalDrawIDBuffer;
@property (readonly, nonatomic) unsigned long long maxCommands;
@property (readonly, nonatomic) unsigned long long maxVertexBindings;
@property (readonly, nonatomic) unsigned long long maxFragmentBindings;
@property (readonly, nonatomic) unsigned long long commandByteStride;
@property (readonly, nonatomic) BOOL inheritsPipelineState;
@property (readonly, nonatomic) BOOL inheritsBuffers;

- (void)dealloc;
- (unsigned long long)cpuCacheMode;
- (unsigned long long)resourceOptions;
- (unsigned long long)storageMode;
- (id)indirectRenderCommandAtIndex:(unsigned long long)a0;
- (id)indirectComputeCommandAtIndex:(unsigned long long)a0;
- (unsigned long long)hazardTrackingMode;
- (id)initWithIndirectCommandBuffer:(id)a0 descriptor:(id)a1 maxCommandCount:(unsigned long long)a2 resourceOptions:(unsigned long long)a3 device:(id)a4;
- (void)setBuffer:(id)a0 offset:(unsigned long long)a1 atIndex:(unsigned long long)a2 forStage:(unsigned long long)a3 commandIndex:(unsigned long long)a4;
- (void)setRenderPipelineStateBuffers:(id)a0 commandIndex:(unsigned long long)a1;
- (void)setTessellationControlPointIndexBuffer:(id)a0 offset:(unsigned long long)a1 commandIndex:(unsigned long long)a2;
- (void)onExecuteWithRenderEncoder:(id)a0;
- (void)onExecuteWithComputeEncoder:(id)a0;
- (id)fencingICB;

@end
