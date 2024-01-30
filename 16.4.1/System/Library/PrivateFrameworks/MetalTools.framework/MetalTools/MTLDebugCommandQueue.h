@interface MTLDebugCommandQueue : MTLToolsCommandQueue {
    int _deadlineAwareState;
}

- (id)commandBufferWithDescriptor:(id)a0;
- (id)commandBuffer;
- (void)insertDebugCaptureBoundary;
- (id)commandBufferWithUnretainedReferences;
- (void)validateDeadlineAwareness:(id)a0;

@end
