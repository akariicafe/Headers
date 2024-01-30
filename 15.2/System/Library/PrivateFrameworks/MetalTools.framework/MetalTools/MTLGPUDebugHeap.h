@interface MTLGPUDebugHeap : MTLToolsHeap

- (id)newBufferWithLength:(unsigned long long)a0 options:(unsigned long long)a1;
- (id)newBufferWithLength:(unsigned long long)a0 options:(unsigned long long)a1 offset:(unsigned long long)a2;
- (id)initWithHeap:(id)a0 descriptor:(id)a1 device:(id)a2;

@end
