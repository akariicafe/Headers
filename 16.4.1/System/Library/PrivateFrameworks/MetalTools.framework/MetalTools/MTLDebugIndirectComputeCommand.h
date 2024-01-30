@class MTLIndirectCommandBufferDescriptor;
@protocol MTLIndirectCommandBuffer, MTLIndirectCommandBufferSPI;

@interface MTLDebugIndirectComputeCommand : MTLToolsIndirectComputeCommand {
    MTLIndirectCommandBufferDescriptor *_desc;
    unsigned long long _index;
    id<MTLIndirectCommandBufferSPI> _iCB;
}

@property (readonly) unsigned long long index;
@property (readonly) id<MTLIndirectCommandBuffer> indirectCommandBuffer;

- (void)setComputePipelineState:(id)a0;
- (void)dealloc;
- (void)setKernelBuffer:(id)a0 offset:(unsigned long long)a1 atIndex:(unsigned long long)a2;
- (void)concurrentDispatchThreadgroups:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a0 threadsPerThreadgroup:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a1;
- (void)concurrentDispatchThreads:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a0 threadsPerThreadgroup:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a1;
- (id)initWithBaseObject:(id)a0 descriptor:(id)a1 indexCount:(unsigned long long)a2 indirectCommandBuffer:(id)a3;

@end
