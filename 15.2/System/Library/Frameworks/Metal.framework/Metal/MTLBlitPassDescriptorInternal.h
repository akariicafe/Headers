@class MTLBlitPassSampleBufferAttachmentDescriptorArrayInternal;

@interface MTLBlitPassDescriptorInternal : MTLBlitPassDescriptor {
    struct MTLBlitPassDescriptorPrivate { MTLBlitPassSampleBufferAttachmentDescriptorArrayInternal *sampleBufferAttachments; } _private;
}

+ (id)blitPassDescriptor;

- (const struct MTLBlitPassDescriptorPrivate { id x0; } *)_descriptorPrivate;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)sampleBufferAttachments;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (void)dealloc;

@end
