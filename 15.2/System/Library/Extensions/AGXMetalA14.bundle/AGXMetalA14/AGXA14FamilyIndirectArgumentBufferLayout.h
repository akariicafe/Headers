@interface AGXA14FamilyIndirectArgumentBufferLayout : _MTLIndirectArgumentBufferLayout {
    struct unique_ptr<AGX::G13::IndirectArgumentLayout, std::default_delete<AGX::G13::IndirectArgumentLayout>> { struct __compressed_pair<AGX::G13::IndirectArgumentLayout *, std::default_delete<AGX::G13::IndirectArgumentLayout>> { struct IndirectArgumentLayout *__value_; } __ptr_; } _impl;
}

- (unsigned int)hashValue;
- (unsigned int)hashMask;
- (void).cxx_destruct;
- (unsigned long long)alignment;
- (id).cxx_construct;
- (unsigned long long)encodedLength;
- (void *)virtualAddressForBufferAtIndex:(unsigned long long)a0 inIndirectArgumentBuffer:(id)a1 atOffset:(unsigned long long)a2;
- (unsigned long long)uniqueIdentifierForTextureAtIndex:(unsigned long long)a0 inIndirectArgumentBuffer:(id)a1 atOffset:(unsigned long long)a2;
- (unsigned long long)uniqueIdentifierForSamplerAtIndex:(unsigned long long)a0 inIndirectArgumentBuffer:(id)a1 atOffset:(unsigned long long)a2;
- (unsigned long long)uniqueIdentifierForRenderPipelineAtIndex:(unsigned long long)a0 inIndirectArgumentBuffer:(id)a1 atOffset:(unsigned long long)a2;
- (unsigned long long)uniqueIdentifierForComputePipelineAtIndex:(unsigned long long)a0 inIndirectArgumentBuffer:(id)a1 atOffset:(unsigned long long)a2;
- (unsigned long long)uniqueIdentifierForVisibleFunctionTableAtIndex:(unsigned long long)a0 inIndirectArgumentBuffer:(id)a1 atOffset:(unsigned long long)a2;
- (unsigned long long)uniqueIdentifierForIntersectionFunctionTableAtIndex:(unsigned long long)a0 inIndirectArgumentBuffer:(id)a1 atOffset:(unsigned long long)a2;
- (unsigned long long)uniqueIdentifierForInstanceAccelerationStructureAtIndex:(unsigned long long)a0 inIndirectArgumentBuffer:(id)a1 atOffset:(unsigned long long)a2;
- (unsigned long long)uniqueIdentifierForPrimitiveAccelerationStructureAtIndex:(unsigned long long)a0 inIndirectArgumentBuffer:(id)a1 atOffset:(unsigned long long)a2;
- (unsigned long long)uniqueIdentifierForIndirectCommandBufferAtIndex:(unsigned long long)a0 inIndirectArgumentBuffer:(id)a1 atOffset:(unsigned long long)a2;
- (BOOL)bufferLayoutMatchesFrontEndLayout;
- (unsigned int)hashOffset;
- (unsigned int)hashSignature;
- (unsigned long long)constantOffsetAtIndex:(unsigned long long)a0;
- (id)initWithStructType:(id)a0;

@end
