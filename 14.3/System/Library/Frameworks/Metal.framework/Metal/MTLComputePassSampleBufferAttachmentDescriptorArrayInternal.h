@class MTLComputePassSampleBufferAttachmentDescriptorInternal;

@interface MTLComputePassSampleBufferAttachmentDescriptorArrayInternal : MTLComputePassSampleBufferAttachmentDescriptorArray {
    MTLComputePassSampleBufferAttachmentDescriptorInternal *_sampleDescriptors[4];
}

- (id)objectAtIndexedSubscript:(unsigned long long)a0;
- (void)dealloc;
- (void)setObject:(id)a0 atIndexedSubscript:(unsigned long long)a1;
- (id)_descriptorAtIndex:(unsigned long long)a0;

@end
