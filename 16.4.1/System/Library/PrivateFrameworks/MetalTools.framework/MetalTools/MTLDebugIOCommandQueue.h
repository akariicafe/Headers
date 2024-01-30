@interface MTLDebugIOCommandQueue : MTLToolsIOCommandQueue

- (id)commandBuffer;
- (void)barrier;
- (unsigned long long)globalTraceObjectID;
- (id)commandBufferWithUnretainedReferences;

@end
