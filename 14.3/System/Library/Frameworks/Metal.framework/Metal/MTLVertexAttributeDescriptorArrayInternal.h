@class MTLVertexAttributeDescriptorInternal;

@interface MTLVertexAttributeDescriptorArrayInternal : MTLVertexAttributeDescriptorArray {
    MTLVertexAttributeDescriptorInternal *_descriptors[31];
}

- (id)objectAtIndexedSubscript:(unsigned long long)a0;
- (void)dealloc;
- (void)setObject:(id)a0 atIndexedSubscript:(unsigned long long)a1;

@end
