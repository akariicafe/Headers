@class MTLIndirectCommandBufferDescriptor, IOGPUMetalBuffer;
@protocol MTLIndirectRenderCommandEncoder, MTLIndirectComputeCommandEncoder;

@interface IOGPUMetalIndirectCommandBuffer : IOGPUMetalResource {
    IOGPUMetalBuffer *_privateICBuffer;
    unsigned long long _maxCommandCount;
    unsigned long long _commandBufferType;
    id<MTLIndirectComputeCommandEncoder> _privateIndirectComputeEncoder;
    id<MTLIndirectRenderCommandEncoder> _privateIndirectRenderEncoder;
    MTLIndirectCommandBufferDescriptor *_descriptor;
    struct MTLIndirectCommandBufferHeader { unsigned long long headerSize; unsigned int commandTypes; BOOL inheritPipelineState; BOOL inheritBuffers; unsigned char maxVertexBufferBindCount; unsigned char maxFragmentBufferBindCount; unsigned char maxKernelBufferBindCount; unsigned long long size; } _internalHeader;
}

@property (readonly) IOGPUMetalBuffer *privateICBuffer;
@property (readonly) unsigned long long commandBufferType;
@property (readonly) MTLIndirectCommandBufferDescriptor *descriptor;
@property (readonly) unsigned long long storageMode;
@property (readonly) unsigned long long size;

- (BOOL)isAliasable;
- (BOOL)isComplete;
- (void)waitUntilComplete;
- (BOOL)doesAliasAnyResources:(const id *)a0 count:(unsigned long long)a1;
- (BOOL)doesAliasResource:(id)a0;
- (unsigned long long)setPurgeableState:(unsigned long long)a0;
- (BOOL)doesAliasAllResources:(const id *)a0 count:(unsigned long long)a1;
- (void)resetWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)makeAliasable;
- (id)indirectRenderCommandAtIndex:(unsigned long long)a0;
- (unsigned long long)uniqueIdentifier;
- (void)getHeader:(void **)a0 headerSize:(unsigned long long *)a1;
- (id)initWithBuffer:(id)a0 descriptor:(id)a1 maxCommandCount:(unsigned long long)a2;
- (id)indirectComputeCommandAtIndex:(unsigned long long)a0;
- (void)dealloc;

@end
