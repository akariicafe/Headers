@class NSString, MTLGPUDebugBuffer, MTLGPUDebugComputePipelineState;
@protocol MTLBuffer;

@interface MTLGPUDebugComputeCommandEncoder : MTLToolsComputeCommandEncoder <MTLGPUDebugCommandEncoder> {
    unsigned int useResourceIteration;
    struct Options { unsigned int x0; int x1; int x2; int x3; int x4; struct { unsigned char x0 : 1; unsigned char x1 : 1; unsigned char x2 : 1; unsigned char x3 : 1; unsigned char x4 : 1; unsigned char x5 : 1; unsigned char x6 : 1; unsigned char x7 : 1; unsigned char x8 : 1; unsigned char x9 : 1; unsigned char x10 : 1; unsigned char x11 : 1; unsigned char x12 : 1; unsigned char x13 : 1; unsigned char x14 : 1; unsigned char x15 : 1; unsigned char x16 : 1; unsigned char x17 : 1; unsigned char x18 : 1; unsigned char x19 : 1; unsigned char x20 : 1; unsigned char x21 : 1; unsigned char x22 : 1; unsigned char x23 : 1; unsigned char x24 : 1; unsigned char x25 : 1; unsigned char x26 : 1; unsigned char x27 : 1; unsigned char x28 : 1; } x5; } *_options;
    struct MTLGPUDebugStageBufferHandles { unsigned long long handles[31]; MTLGPUDebugBuffer *buffers[31]; unsigned long long offsets[31]; BOOL needsFlush; } _handles;
    struct MTLGPUDebugThreadgroupLengths { unsigned int threadgroupSizes[31]; struct GPUDebugThreadgroupTableEntry { unsigned int offset; unsigned int length; } entries[32]; BOOL needsFlush; } _threadgroup;
    struct MTLGPUDebugBufferArgumentData { BOOL needsFlush; BOOL argumentBufferBacking; BOOL useLengths; id<MTLBuffer> buffers[31]; unsigned long long offsets[31]; unsigned int lengths[31]; unsigned long long gpu_address[31][2]; } _buffers;
    struct GPUDebugEventUUIDPacket { unsigned long long pipelineStateID; unsigned int encoderID; unsigned int eventID; } _dispatchID;
    MTLGPUDebugComputePipelineState *_currentPipeline;
}

@property (readonly) unsigned int encoderID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setBuffer:(id)a0 offset:(unsigned long long)a1 atIndex:(unsigned long long)a2;
- (void)setThreadgroupMemoryLength:(unsigned long long)a0 atIndex:(unsigned long long)a1;
- (void)dispatchThreadgroupsWithIndirectBuffer:(id)a0 indirectBufferOffset:(unsigned long long)a1 threadsPerThreadgroup:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a2;
- (id).cxx_construct;
- (void)setBuffers:(const id *)a0 offsets:(const unsigned long long *)a1 withRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2;
- (void)setComputePipelineState:(id)a0;
- (void)setBytes:(const void *)a0 length:(unsigned long long)a1 atIndex:(unsigned long long)a2;
- (void)dispatchThreadgroups:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a0 threadsPerThreadgroup:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a1;
- (void)useResource:(id)a0 usage:(unsigned long long)a1;
- (void)useResources:(const id *)a0 count:(unsigned long long)a1 usage:(unsigned long long)a2;
- (void)setBufferOffset:(unsigned long long)a0 atIndex:(unsigned long long)a1;
- (void)dispatchThreads:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a0 threadsPerThreadgroup:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a1;
- (void)endEncoding;
- (void)flushBindings;
- (void)dispatchThreadsWithIndirectBuffer:(id)a0 indirectBufferOffset:(unsigned long long)a1;
- (id)initWithComputeCommandEncoder:(id)a0 parent:(id)a1 encoderID:(unsigned int)a2;

@end
