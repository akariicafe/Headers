@protocol MTLBuffer;

@interface MTLGPUDebugIndirectCommandBuffer : MTLToolsIndirectCommandBuffer {
    BOOL _hasRender;
    BOOL _hasCompute;
    BOOL _inheritsBuffers;
    BOOL _inheritsPipelineState;
    id<MTLBuffer> _argumentStorage;
    id<MTLBuffer> _drawOrDispatchIDBuffer;
    unsigned short _maxCommands;
    unsigned char _maxVertexBindings;
    unsigned char _maxFragmentBindings;
    unsigned char _maxKernelBindings;
    unsigned char _maxThreadgroupBindings;
    unsigned short _commandByteStride;
    unsigned long long _originalResourceOptions;
}

@property (readonly, nonatomic) id<MTLBuffer> internalICBBuffer;
@property (readonly, nonatomic) id<MTLBuffer> internalDrawOrDispatchIDBuffer;
@property (readonly, nonatomic) unsigned long long maxCommands;
@property (readonly, nonatomic) unsigned long long maxVertexBindings;
@property (readonly, nonatomic) unsigned long long maxFragmentBindings;
@property (readonly, nonatomic) unsigned long long maxKernelBindings;
@property (readonly, nonatomic) unsigned long long commandByteStride;
@property (readonly, nonatomic) BOOL inheritsPipelineState;
@property (readonly, nonatomic) BOOL inheritsBuffers;

- (id)indirectRenderCommandAtIndex:(unsigned long long)a0;
- (unsigned long long)resourceOptions;
- (unsigned long long)hazardTrackingMode;
- (unsigned long long)cpuCacheMode;
- (unsigned long long)storageMode;
- (id)indirectComputeCommandAtIndex:(unsigned long long)a0;
- (void)dealloc;
- (id)initWithIndirectCommandBuffer:(id)a0 descriptor:(id)a1 maxCommandCount:(unsigned long long)a2 resourceOptions:(unsigned long long)a3 device:(id)a4;
- (void)resetAtIndex:(unsigned long long)a0;
- (void)setBuffer:(id)a0 offset:(unsigned long long)a1 atIndex:(unsigned long long)a2 forStage:(unsigned long long)a3 commandIndex:(unsigned long long)a4;
- (void)setThreadgroupMemoryLength:(unsigned long long)a0 atIndex:(unsigned long long)a1 commandIndex:(unsigned long long)a2;
- (void)setComputePipelineStateBuffers:(id)a0 commandIndex:(unsigned long long)a1;
- (void)setRenderPipelineStateBuffers:(id)a0 commandIndex:(unsigned long long)a1;
- (void)setTessellationControlPointIndexBuffer:(id)a0 offset:(unsigned long long)a1 commandIndex:(unsigned long long)a2;
- (void)onExecuteWithRenderEncoder:(id)a0;
- (void)onExecuteWithComputeEncoder:(id)a0;

@end
