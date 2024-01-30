@class MTLTileRenderPipelineColorAttachmentDescriptorInternal;

@interface MTLTileRenderPipelineColorAttachmentDescriptorArrayInternal : MTLTileRenderPipelineColorAttachmentDescriptorArray {
    MTLTileRenderPipelineColorAttachmentDescriptorInternal *_descriptors[8];
}

- (void)setObject:(id)a0 atIndexedSubscript:(unsigned long long)a1;
- (id)objectAtIndexedSubscript:(unsigned long long)a0;
- (void)dealloc;

@end
