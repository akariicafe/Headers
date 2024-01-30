@class MTLBlitPassSampleBufferAttachmentDescriptorInternal;

@interface MTLBlitPassSampleBufferAttachmentDescriptorArrayInternal : MTLBlitPassSampleBufferAttachmentDescriptorArray {
    MTLBlitPassSampleBufferAttachmentDescriptorInternal *_sampleDescriptors[4];
}

- (void)setObject:(id)a0 atIndexedSubscript:(unsigned long long)a1;
- (void)dealloc;
- (id)objectAtIndexedSubscript:(unsigned long long)a0;
- (id)_descriptorAtIndex:(unsigned long long)a0;

@end
