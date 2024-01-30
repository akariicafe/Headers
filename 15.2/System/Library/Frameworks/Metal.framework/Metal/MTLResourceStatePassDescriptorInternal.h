@class MTLResourceStatePassSampleBufferAttachmentDescriptorArrayInternal;

@interface MTLResourceStatePassDescriptorInternal : MTLResourceStatePassDescriptor {
    struct MTLResourceStatePassDescriptorPrivate { MTLResourceStatePassSampleBufferAttachmentDescriptorArrayInternal *sampleBufferAttachments; } _private;
}

+ (id)resourceStatePassDescriptor;

- (const struct MTLResourceStatePassDescriptorPrivate { id x0; } *)_descriptorPrivate;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)sampleBufferAttachments;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (void)dealloc;

@end
