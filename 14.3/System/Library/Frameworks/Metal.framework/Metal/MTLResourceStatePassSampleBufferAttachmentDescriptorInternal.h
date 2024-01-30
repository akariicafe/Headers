@protocol MTLCounterSampleBuffer;

@interface MTLResourceStatePassSampleBufferAttachmentDescriptorInternal : MTLResourceStatePassSampleBufferAttachmentDescriptor {
    struct MTLResourceStatePassSampleBufferAttachmentDescriptorPrivate { id<MTLCounterSampleBuffer> sampleBuffer; unsigned long long startOfEncoderSampleIndex; unsigned long long endOfEncoderSampleIndex; } _private;
}

- (const struct MTLResourceStatePassSampleBufferAttachmentDescriptorPrivate { id x0; unsigned long long x1; unsigned long long x2; } *)_descriptorPrivate;
- (id)init;
- (id)sampleBuffer;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)setSampleBuffer:(id)a0;
- (void)setStartOfEncoderSampleIndex:(unsigned long long)a0;
- (unsigned long long)startOfEncoderSampleIndex;
- (void)setEndOfEncoderSampleIndex:(unsigned long long)a0;
- (unsigned long long)endOfEncoderSampleIndex;

@end
