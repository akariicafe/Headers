@interface MTLTileRenderPipelineColorAttachmentDescriptorInternal : MTLTileRenderPipelineColorAttachmentDescriptor {
    struct MTLTileRenderPipelineAttachmentDescriptorPrivate { union { struct { unsigned int pixelFormat; } ; struct { unsigned int bits; } ; } ; } _private;
}

- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setPixelFormat:(unsigned long long)a0;
- (id)formattedDescription:(unsigned long long)a0;
- (unsigned long long)pixelFormat;
- (unsigned long long)hash;
- (void)dealloc;

@end
