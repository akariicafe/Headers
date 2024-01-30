@interface MTLVertexAttributeDescriptorInternal : MTLVertexAttributeDescriptor {
    unsigned long long _vertexFormat;
    unsigned long long _offset;
    unsigned long long _bufferIndex;
}

- (void)setOffset:(unsigned long long)a0;
- (unsigned long long)format;
- (void)setBufferIndex:(unsigned long long)a0;
- (void)setFormat:(unsigned long long)a0;
- (unsigned long long)offset;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)bufferIndex;

@end
