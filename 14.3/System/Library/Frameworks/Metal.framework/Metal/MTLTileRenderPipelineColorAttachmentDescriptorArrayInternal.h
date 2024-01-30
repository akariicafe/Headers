@class MTLTileRenderPipelineColorAttachmentDescriptorInternal;

@interface MTLTileRenderPipelineColorAttachmentDescriptorArrayInternal : MTLTileRenderPipelineColorAttachmentDescriptorArray {
    MTLTileRenderPipelineColorAttachmentDescriptorInternal *_descriptors[8];
}

- (id)objectAtIndexedSubscript:(unsigned long long)a0;
- (void)dealloc;
- (void)setObject:(id)a0 atIndexedSubscript:(unsigned long long)a1;
- (id)_descriptorAtIndex:(unsigned long long)a0;

@end
