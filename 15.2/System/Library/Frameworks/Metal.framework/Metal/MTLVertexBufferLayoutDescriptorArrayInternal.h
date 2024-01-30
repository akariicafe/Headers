@class MTLVertexBufferLayoutDescriptorInternal;

@interface MTLVertexBufferLayoutDescriptorArrayInternal : MTLVertexBufferLayoutDescriptorArray {
    MTLVertexBufferLayoutDescriptorInternal *_descriptors[31];
}

- (void)setObject:(id)a0 atIndexedSubscript:(unsigned long long)a1;
- (id)objectAtIndexedSubscript:(unsigned long long)a0;
- (void)dealloc;

@end
