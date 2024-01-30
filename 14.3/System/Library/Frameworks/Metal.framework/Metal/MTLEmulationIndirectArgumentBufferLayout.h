@interface MTLEmulationIndirectArgumentBufferLayout : _MTLIndirectArgumentBufferLayout {
    unsigned long long _alignment;
    void *_bufferIndices;
    void *_textureIndices;
    void *_samplerIndices;
    void *_constantIndices;
    void *_constantOffsets;
    unsigned long long _bufferOffset;
    unsigned long long _textureOffset;
    unsigned long long _samplerOffset;
}

@property (readonly, nonatomic) unsigned long long stride;

- (unsigned long long)alignment;
- (void)dealloc;
- (unsigned int)hashOffset;
- (unsigned int)hashMask;
- (unsigned long long)encodedLength;
- (unsigned int)hashSignature;
- (unsigned int)hashValue;
- (void *)virtualAddressForBufferAtIndex:(unsigned long long)a0 inIndirectArgumentBuffer:(id)a1 atOffset:(unsigned long long)a2;
- (unsigned long long)uniqueIdentifierForTextureAtIndex:(unsigned long long)a0 inIndirectArgumentBuffer:(id)a1 atOffset:(unsigned long long)a2;
- (BOOL)bufferLayoutMatchesFrontEndLayout;
- (unsigned long long)uniqueIdentifierForSamplerAtIndex:(unsigned long long)a0 inIndirectArgumentBuffer:(id)a1 atOffset:(unsigned long long)a2;
- (unsigned long long)uniqueIdentifierForRenderPipelineAtIndex:(unsigned long long)a0 inIndirectArgumentBuffer:(id)a1 atOffset:(unsigned long long)a2;
- (unsigned long long)uniqueIdentifierForComputePipelineAtIndex:(unsigned long long)a0 inIndirectArgumentBuffer:(id)a1 atOffset:(unsigned long long)a2;
- (unsigned long long)constantOffsetAtIndex:(unsigned long long)a0;
- (unsigned long long)offsetForBuffer:(unsigned long long)a0;
- (unsigned long long)offsetForTexture:(unsigned long long)a0;
- (unsigned long long)offsetForSampler:(unsigned long long)a0;
- (unsigned long long)offsetForConstant:(unsigned long long)a0;
- (id)initWithStructType:(id)a0;

@end
