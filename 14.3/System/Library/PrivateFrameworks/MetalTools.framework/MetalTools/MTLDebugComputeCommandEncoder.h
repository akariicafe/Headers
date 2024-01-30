@class __begin_, baseLevel, __end_cap_, MTLDebugCommandBuffer, __end_;
@protocol MTLComputePipelineState;

@interface MTLDebugComputeCommandEncoder : MTLToolsComputeCommandEncoder {
    struct { BOOL isValid; BOOL hasBeenUsed; unsigned long long type; baseLevel *object; unsigned long long x0; unsigned long long bufferLength; unsigned long long bufferOffset; unsigned long long threadgroupMemoryLength; unsigned long long threadgroupMemoryOffset; BOOL hasLodClamp; float lodMinClamp; float lodMaxClamp; } _buffers[31];
    struct { BOOL isValid; BOOL hasBeenUsed; unsigned long long type; baseLevel *object; unsigned long long x0; unsigned long long bufferLength; unsigned long long bufferOffset; unsigned long long threadgroupMemoryLength; unsigned long long threadgroupMemoryOffset; BOOL hasLodClamp; float lodMinClamp; float lodMaxClamp; } _textures[128];
    struct { BOOL isValid; BOOL hasBeenUsed; unsigned long long type; baseLevel *object; unsigned long long x0; unsigned long long bufferLength; unsigned long long bufferOffset; unsigned long long threadgroupMemoryLength; unsigned long long threadgroupMemoryOffset; BOOL hasLodClamp; float lodMinClamp; float lodMaxClamp; } _samplers[16];
    struct { BOOL isValid; BOOL hasBeenUsed; unsigned long long type; baseLevel *object; unsigned long long x0; unsigned long long bufferLength; unsigned long long bufferOffset; unsigned long long threadgroupMemoryLength; unsigned long long threadgroupMemoryOffset; BOOL hasLodClamp; float lodMinClamp; float lodMaxClamp; } _threadgroupMemoryLengths[31];
    struct { unsigned long long width; unsigned long long height; unsigned long long depth; } _imageBlockSize;
    MTLDebugCommandBuffer *_commandBuffer;
    BOOL canDealloc;
    BOOL canEndEncoding;
    BOOL canSetComputePipelineState;
    BOOL hasEndEncoding;
    BOOL hasSetComputePipelineState;
    BOOL hasSetStageInRegion;
    struct { struct { unsigned long long x; unsigned long long y; unsigned long long z; } origin; struct { unsigned long long width; unsigned long long height; unsigned long long depth; } size; } stageInRegion;
    BOOL hasIndirectSetStageInRegion;
    BOOL allowsNullBufferBinds;
    struct deque<id, std::__1::allocator<id> > { struct __split_buffer<id *, std::__1::allocator<id *> > { __begin_ ***__first_; __end_ ***x0; __end_cap_ ***x1; struct __compressed_pair<id **, std::__1::allocator<id *> > { id **__value_; } x2; } __map_; unsigned long long __start_; struct __compressed_pair<unsigned long, std::__1::allocator<id> > { unsigned long long __value_; } __size_; } updatedFences;
}

@property (readonly, nonatomic) id<MTLComputePipelineState> computePipelineState;

- (id)formattedDescription:(unsigned long long)a0;
- (void)setBuffer:(id)a0 offset:(unsigned long long)a1 atIndex:(unsigned long long)a2;
- (void)useHeaps:(const id *)a0 count:(unsigned long long)a1;
- (void)setTextures:(const id *)a0 withRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void).cxx_destruct;
- (void)setThreadgroupMemoryLength:(unsigned long long)a0 atIndex:(unsigned long long)a1;
- (void)setSamplerState:(id)a0 atIndex:(unsigned long long)a1;
- (void)dealloc;
- (void)dispatchThreadgroupsWithIndirectBuffer:(id)a0 indirectBufferOffset:(unsigned long long)a1 threadsPerThreadgroup:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a2;
- (void)updateFence:(id)a0;
- (void)setIntersectionFunctionTable:(id)a0 atBufferIndex:(unsigned long long)a1;
- (void)setAccelerationStructure:(id)a0 atBufferIndex:(unsigned long long)a1;
- (void)memoryBarrierWithResources:(const id *)a0 count:(unsigned long long)a1;
- (void)useHeap:(id)a0;
- (void)waitForFence:(id)a0;
- (void)executeCommandsInBuffer:(id)a0 withRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)filterCounterRangeWithFirstBatch:(unsigned int)a0 lastBatch:(unsigned int)a1 filterIndex:(unsigned int)a2;
- (id)description;
- (void)setVisibleFunctionTable:(id)a0 atBufferIndex:(unsigned long long)a1;
- (id).cxx_construct;
- (void)setBuffers:(const id *)a0 offsets:(const unsigned long long *)a1 withRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2;
- (void)memoryBarrierWithScope:(unsigned long long)a0;
- (void)setTexture:(id)a0 atIndex:(unsigned long long)a1;
- (void)setComputePipelineState:(id)a0;
- (void)setBytes:(const void *)a0 length:(unsigned long long)a1 atIndex:(unsigned long long)a2;
- (void)dispatchThreadgroups:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a0 threadsPerThreadgroup:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a1;
- (void)executeCommandsInBuffer:(id)a0 indirectBuffer:(id)a1 indirectBufferOffset:(unsigned long long)a2;
- (void)useResource:(id)a0 usage:(unsigned long long)a1;
- (void)setVisibleFunctionTables:(const id *)a0 withBufferRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)useResources:(const id *)a0 count:(unsigned long long)a1 usage:(unsigned long long)a2;
- (void)setBufferOffset:(unsigned long long)a0 atIndex:(unsigned long long)a1;
- (void)setSamplerStates:(const id *)a0 withRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)setImageblockWidth:(unsigned long long)a0 height:(unsigned long long)a1;
- (void)setSamplerState:(id)a0 lodMinClamp:(float)a1 lodMaxClamp:(float)a2 atIndex:(unsigned long long)a3;
- (void)setStageInRegion:(struct { struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x0; struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x1; })a0;
- (void)setSamplerStates:(const id *)a0 lodMinClamps:(const float *)a1 lodMaxClamps:(const float *)a2 withRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a3;
- (void)setStageInRegionWithIndirectBuffer:(id)a0 indirectBufferOffset:(unsigned long long)a1;
- (void)dispatchThreads:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a0 threadsPerThreadgroup:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a1;
- (void)sampleCountersInBuffer:(id)a0 atSampleIndex:(unsigned long long)a1 withBarrier:(BOOL)a2;
- (void)endEncoding;
- (void)setIntersectionFunctionTables:(const id *)a0 withBufferRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)_setDefaults;
- (void)dispatchThreadsWithIndirectBuffer:(id)a0 indirectBufferOffset:(unsigned long long)a1;
- (void)enableNullBufferBinds:(BOOL)a0;
- (id)initWithComputeCommandEncoder:(id)a0 commandBuffer:(id)a1;
- (void)_validateThreadsPerThreadgroup:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a0;
- (void)validateStageInRegion:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a0;
- (void)_validateAllFunctionArguments;
- (void)enumerateBuffersUsingBlock:(id /* block */)a0;
- (void)enumerateTexturesUsingBlock:(id /* block */)a0;
- (void)enumerateSamplersUsingBlock:(id /* block */)a0;
- (void)enumerateThreadgroupMemoryLengthsUsingBlock:(id /* block */)a0;

@end
