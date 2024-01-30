@interface MTLDebugCommandQueue : MTLToolsCommandQueue

- (void)insertDebugCaptureBoundary;
- (id)commandBuffer;
- (id)commandBufferWithUnretainedReferences;
- (id)commandBufferWithDescriptor:(id)a0;

@end
