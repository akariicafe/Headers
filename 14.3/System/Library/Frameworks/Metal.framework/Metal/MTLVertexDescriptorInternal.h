@class MTLVertexBufferLayoutDescriptorArrayInternal, MTLVertexAttributeDescriptorArrayInternal;

@interface MTLVertexDescriptorInternal : MTLVertexDescriptor {
    MTLVertexBufferLayoutDescriptorArrayInternal *_vertexBufferArray;
    MTLVertexAttributeDescriptorArrayInternal *_attributeArray;
}

+ (id)vertexDescriptor;

- (id)formattedDescription:(unsigned long long)a0;
- (id)newSerializedDescriptor;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)reset;
- (void)dealloc;
- (id)attributes;
- (BOOL)validateWithVertexFunction:(id)a0 error:(id *)a1 renderPipelineDescriptor:(id)a2;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)layouts;

@end
