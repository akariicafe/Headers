@class NSString, MTLGPUDebugCommandBuffer, MTLGPUDebugComputePipelineState;
@protocol MTLGPUDebugResource, MTLBuffer;

@interface MTLGPUDebugComputeCommandEncoder : MTLToolsComputeCommandEncoder <MTLGPUDebugCommandEncoder> {
    unsigned int useResourceIteration;
    struct Options { unsigned int x0; int x1; int x2; int x3; int x4; struct { unsigned char x0 : 1; unsigned char x1 : 1; unsigned char x2 : 1; unsigned char x3 : 1; unsigned char x4 : 1; unsigned char x5 : 1; unsigned char x6 : 1; unsigned char x7 : 1; unsigned char x8 : 1; unsigned char x9 : 1; unsigned char x10 : 1; unsigned char x11 : 1; unsigned char x12 : 1; unsigned char x13 : 1; unsigned char x14 : 1; unsigned char x15 : 1; unsigned char x16 : 1; unsigned char x17 : 1; unsigned char x18 : 1; unsigned char x19 : 1; unsigned char x20 : 1; unsigned char x21 : 1; unsigned char x22 : 1; unsigned char x23 : 1; unsigned char x24 : 1; unsigned char x25 : 1; unsigned char x26 : 1; unsigned char x27 : 1; unsigned char x28 : 1; unsigned char x29 : 1; unsigned char x30 : 1; unsigned char x31 : 1; } x5; } *_options;
    struct MTLGPUDebugStageBufferHandles { unsigned long long handles[31]; id<MTLGPUDebugResource> resources[31]; unsigned long long offsets[31]; unsigned int lengths[31]; unsigned long long gpu_address[31][2]; BOOL needsFlush; } _handles;
    struct MTLGPUDebugThreadgroupLengths { unsigned int threadgroupSizes[31]; struct GPUDebugThreadgroupTableEntry { unsigned int offset; unsigned int length; } entries[32]; BOOL needsFlush; } _threadgroup;
    struct GPUDebugEventUUIDPacket { unsigned long long pipelineStateID; unsigned long long entryPointImageID; unsigned int encoderID; unsigned int eventID; } _dispatchID;
    MTLGPUDebugComputePipelineState *_currentPipeline;
    struct MTLGPUDebugBufferSubAlloc { id<MTLBuffer> buffer; unsigned long long offset; } _reportBuffer;
}

@property (readonly) MTLGPUDebugCommandBuffer *commandBuffer;
@property (readonly) unsigned int encoderID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setIntersectionFunctionTables:(const id *)a0 withBufferRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)dispatchThreadgroups:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a0 threadsPerThreadgroup:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a1;
- (void)setVisibleFunctionTable:(id)a0 atBufferIndex:(unsigned long long)a1;
- (void)executeCommandsInBuffer:(id)a0 withRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)setAccelerationStructure:(id)a0 atBufferIndex:(unsigned long long)a1;
- (void)executeCommandsInBuffer:(id)a0 indirectBuffer:(id)a1 indirectBufferOffset:(unsigned long long)a2;
- (void)setIntersectionFunctionTable:(id)a0 atBufferIndex:(unsigned long long)a1;
- (void)setThreadgroupMemoryLength:(unsigned long long)a0 atIndex:(unsigned long long)a1;
- (void)setBuffers:(const id *)a0 offsets:(const unsigned long long *)a1 withRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2;
- (void)setBuffer:(id)a0 offset:(unsigned long long)a1 atIndex:(unsigned long long)a2;
- (void)dispatchThreadgroupsWithIndirectBuffer:(id)a0 indirectBufferOffset:(unsigned long long)a1 threadsPerThreadgroup:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a2;
- (void)useResource:(id)a0 usage:(unsigned long long)a1;
- (void)setBytes:(const void *)a0 length:(unsigned long long)a1 atIndex:(unsigned long long)a2;
- (void)endEncoding;
- (void)setVisibleFunctionTables:(const id *)a0 withBufferRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)useResources:(const id *)a0 count:(unsigned long long)a1 usage:(unsigned long long)a2;
- (id).cxx_construct;
- (void)setComputePipelineState:(id)a0;
- (void)setBufferOffset:(unsigned long long)a0 atIndex:(unsigned long long)a1;
- (void)dispatchThreads:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a0 threadsPerThreadgroup:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a1;
- (void)_initBufferArgumentData:(id)a0;
- (id)temporaryBufferWithBytes:(const void *)a0 length:(unsigned long long)a1;
- (id)temporaryBufferWithLength:(unsigned long long)a0;
- (void)flushBindings;
- (void)dispatchThreadsWithIndirectBuffer:(id)a0 indirectBufferOffset:(unsigned long long)a1;
- (void)setKernelReportBuffer:(id)a0 offset:(unsigned long long)a1;
- (id)initWithComputeCommandEncoder:(id)a0 parent:(id)a1 encoderID:(unsigned int)a2;
- (id)initWithComputeCommandEncoder:(id)a0 commandBuffer:(id)a1 descriptor:(id)a2 encoderID:(unsigned int)a3;
- (void)setComputePipelineStateBuffers:(id)a0;
- (void)setAccelerationStructures:(const id *)a0 withBufferRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;

@end
