@interface MTLTileRenderPipelineColorAttachmentDescriptorInternal : MTLTileRenderPipelineColorAttachmentDescriptor {
    struct MTLTileRenderPipelineAttachmentDescriptorPrivate { union { struct { unsigned int pixelFormat; } ; struct { unsigned int bits; } ; } ; } _private;
}

- (id)formattedDescription:(unsigned long long)a0;
- (const struct MTLTileRenderPipelineAttachmentDescriptorPrivate { union { struct { unsigned int x0; } x0; struct { unsigned int x0; } x1; } x0; } *)_descriptorPrivate;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)pixelFormat;
- (void)dealloc;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)setPixelFormat:(unsigned long long)a0;

@end
