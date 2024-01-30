@class MTLAttributeDescriptorArrayInternal, MTLBufferLayoutDescriptorArrayInternal;

@interface MTLStageInputOutputDescriptorInternal : MTLStageInputOutputDescriptor {
    MTLBufferLayoutDescriptorArrayInternal *_vertexBufferArray;
    MTLAttributeDescriptorArrayInternal *_attributeArray;
    unsigned long long _indexBufferIndex;
    unsigned long long _indexType;
}

+ (id)vertexDescriptor;

- (id)formattedDescription:(unsigned long long)a0;
- (id)newSerializedDescriptor;
- (id)init;
- (void)setIndexType:(unsigned long long)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)reset;
- (void)dealloc;
- (id)attributes;
- (BOOL)validateWithVertexFunction:(id)a0 error:(id *)a1 renderPipelineDescriptor:(id)a2;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)indexType;
- (id)layouts;
- (unsigned long long)indexBufferIndex;
- (void)setIndexBufferIndex:(unsigned long long)a0;

@end
