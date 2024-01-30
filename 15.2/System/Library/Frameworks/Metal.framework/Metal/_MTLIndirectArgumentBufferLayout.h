@protocol MTLDeviceSPI;

@interface _MTLIndirectArgumentBufferLayout : NSObject {
    void *_private;
}

@property (readonly) BOOL bufferLayoutMatchesFrontEndLayout;
@property (readonly) unsigned long long encodedLength;
@property (readonly) unsigned long long alignment;
@property (readonly) unsigned int hashValue;
@property (readonly) unsigned int hashOffset;
@property (readonly) unsigned int hashMask;
@property (readonly) unsigned int hashSignature;
@property (readonly, nonatomic) id<MTLDeviceSPI> device;

- (id)init;
- (unsigned long long)alignment;
- (void)dealloc;
- (unsigned long long)encodedLength;
- (void)setStructType:(id)a0 withDevice:(id)a1;
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
- (unsigned long long)constantOffsetAtIndex:(unsigned long long)a0;
- (id)bufferLayoutForResourceAtIndex:(unsigned long long)a0;

@end
