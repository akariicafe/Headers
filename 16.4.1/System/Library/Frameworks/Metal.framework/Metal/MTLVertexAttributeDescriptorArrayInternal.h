@class MTLVertexAttributeDescriptorInternal;

@interface MTLVertexAttributeDescriptorArrayInternal : MTLVertexAttributeDescriptorArray {
    MTLVertexAttributeDescriptorInternal *_descriptors[31];
}

- (void)setObject:(id)a0 atIndexedSubscript:(unsigned long long)a1;
- (void)dealloc;
- (id)objectAtIndexedSubscript:(unsigned long long)a0;

@end
