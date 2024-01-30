@interface MTLDebugCommandQueue : MTLToolsCommandQueue

- (void)insertDebugCaptureBoundary;
- (id)commandBufferWithUnretainedReferences;
- (id)commandBufferWithDescriptor:(id)a0;
- (id)commandBuffer;

@end
