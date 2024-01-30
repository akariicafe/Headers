@class MTLTelemetryDevice, MTLTelemetryCommandBuffer;

@interface MTLTelemetryComputeCommandEncoder : MTLToolsComputeCommandEncoder {
    MTLTelemetryDevice *_telemetryDevice;
    MTLTelemetryCommandBuffer *_telemetryCommandBuffer;
    unsigned int _ceDispatches;
}

- (void)setTextures:(const id *)a0 withRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)setThreadgroupMemoryLength:(unsigned long long)a0 atIndex:(unsigned long long)a1;
- (void)dispatchThreadgroupsWithIndirectBuffer:(id)a0 indirectBufferOffset:(unsigned long long)a1 threadsPerThreadgroup:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a2;
- (void)memoryBarrierWithResources:(const id *)a0 count:(unsigned long long)a1;
- (void)memoryBarrierWithScope:(unsigned long long)a0;
- (void)setTexture:(id)a0 atIndex:(unsigned long long)a1;
- (void)setComputePipelineState:(id)a0;
- (void)dispatchThreadgroups:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a0 threadsPerThreadgroup:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a1;
- (void)dispatchThreads:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a0 threadsPerThreadgroup:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a1;
- (void)endEncoding;
- (void)dispatchThreadsWithIndirectBuffer:(id)a0 indirectBufferOffset:(unsigned long long)a1;
- (id)initWithComputeCommandEncoder:(id)a0 commandBuffer:(id)a1;
- (void)accumDispatchDistribution:(unsigned long long)a0 threadgroupsPerGrid:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a1 threadsPerThreadgroup:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a2 threadsPerGrid:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a3;

@end
