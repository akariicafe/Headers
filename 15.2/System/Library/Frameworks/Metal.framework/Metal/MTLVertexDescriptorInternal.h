@class MTLVertexBufferLayoutDescriptorArrayInternal, MTLVertexAttributeDescriptorArrayInternal;

@interface MTLVertexDescriptorInternal : MTLVertexDescriptor {
    MTLVertexBufferLayoutDescriptorArrayInternal *_vertexBufferArray;
    MTLVertexAttributeDescriptorArrayInternal *_attributeArray;
}

+ (id)vertexDescriptor;

- (id)layouts;
- (id)newSerializedDescriptor;
- (id)description;
- (BOOL)validateWithVertexFunction:(id)a0 error:(id *)a1 renderPipelineDescriptor:(id)a2;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)formattedDescription:(unsigned long long)a0;
- (unsigned long long)hash;
- (void)dealloc;
- (void)reset;
- (id)attributes;

@end
