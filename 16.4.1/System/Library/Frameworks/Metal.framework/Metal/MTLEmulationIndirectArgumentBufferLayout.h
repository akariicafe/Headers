@interface MTLEmulationIndirectArgumentBufferLayout : _MTLIndirectArgumentBufferLayout {
    unsigned long long _alignment;
    void *_bufferIndices;
    void *_textureIndices;
    void *_samplerIndices;
    void *_constantIndices;
    void *_constantOffsets;
    void *_visibleFunctionTableIndices;
    void *_intersectionFunctionTableIndices;
    void *_primitiveAccelerationStructureIndices;
    void *_instanceAccelerationStructureIndices;
    unsigned long long _bufferOffset;
    unsigned long long _textureOffset;
    unsigned long long _samplerOffset;
    unsigned long long _visibleFunctionTableOffset;
    unsigned long long _intersectionFunctionTableOffset;
    unsigned long long _primitiveAccelerationStructureOffset;
    unsigned long long _instanceAccelerationStructureOffset;
}

@property (readonly, nonatomic) unsigned long long stride;

- (unsigned long long)alignment;
- (unsigned int)hashValue;
- (void)dealloc;
- (unsigned long long)encodedLength;
- (BOOL)bufferLayoutMatchesFrontEndLayout;
- (unsigned long long)constantOffsetAtIndex:(unsigned long long)a0;
- (unsigned int)hashMask;
- (unsigned int)hashOffset;
- (unsigned int)hashSignature;
- (id)initWithStructType:(id)a0;
- (unsigned long long)offsetForBuffer:(unsigned long long)a0;
- (unsigned long long)offsetForConstant:(unsigned long long)a0;
- (unsigned long long)offsetForInstanceAccelerationStructure:(unsigned long long)a0;
- (unsigned long long)offsetForIntersectionFunctionTable:(unsigned long long)a0;
- (unsigned long long)offsetForPrimitiveAccelerationStructure:(unsigned long long)a0;
- (unsigned long long)offsetForSampler:(unsigned long long)a0;
- (unsigned long long)offsetForTexture:(unsigned long long)a0;
- (unsigned long long)offsetForVisibleFunctionTable:(unsigned long long)a0;
- (unsigned long long)uniqueIdentifierForComputePipelineAtIndex:(unsigned long long)a0 inIndirectArgumentBuffer:(id)a1 atOffset:(unsigned long long)a2;
- (unsigned long long)uniqueIdentifierForRenderPipelineAtIndex:(unsigned long long)a0 inIndirectArgumentBuffer:(id)a1 atOffset:(unsigned long long)a2;
- (unsigned long long)uniqueIdentifierForSamplerAtIndex:(unsigned long long)a0 inIndirectArgumentBuffer:(id)a1 atOffset:(unsigned long long)a2;
- (unsigned long long)uniqueIdentifierForTextureAtIndex:(unsigned long long)a0 inIndirectArgumentBuffer:(id)a1 atOffset:(unsigned long long)a2;
- (void *)virtualAddressForBufferAtIndex:(unsigned long long)a0 inIndirectArgumentBuffer:(id)a1 atOffset:(unsigned long long)a2;

@end
