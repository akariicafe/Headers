@interface IOGPUMetalBlitCommandEncoder : IOGPUMetalCommandEncoder

- (void)updateFence:(id)a0;
- (void)waitForFence:(id)a0;
- (void)copyFromTexture:(id)a0 toTexture:(id)a1;
- (void)optimizeContentsForGPUAccess:(id)a0;
- (void)optimizeContentsForCPUAccess:(id)a0;
- (unsigned long long)getType;
- (void)sampleCountersInBuffer:(id)a0 atSampleIndex:(unsigned long long)a1 withBarrier:(BOOL)a2;
- (void)copyFromTexture:(id)a0 sourceSlice:(unsigned long long)a1 sourceLevel:(unsigned long long)a2 toTexture:(id)a3 destinationSlice:(unsigned long long)a4 destinationLevel:(unsigned long long)a5 sliceCount:(unsigned long long)a6 levelCount:(unsigned long long)a7;
- (void)synchronizeResource:(id)a0;
- (void)synchronizeTexture:(id)a0 slice:(unsigned long long)a1 level:(unsigned long long)a2;
- (void)optimizeContentsForGPUAccess:(id)a0 slice:(unsigned long long)a1 level:(unsigned long long)a2;
- (void)optimizeContentsForCPUAccess:(id)a0 slice:(unsigned long long)a1 level:(unsigned long long)a2;
- (void)resetCommandsInBuffer:(id)a0 withRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)copyIndirectCommandBuffer:(id)a0 sourceRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 destination:(id)a2 destinationIndex:(unsigned long long)a3;
- (void)optimizeIndirectCommandBuffer:(id)a0 withRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)resolveCounters:(id)a0 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 destinationBuffer:(id)a2 destinationOffset:(unsigned long long)a3;

@end
