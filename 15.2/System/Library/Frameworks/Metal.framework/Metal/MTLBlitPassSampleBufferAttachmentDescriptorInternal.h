@protocol MTLCounterSampleBuffer;

@interface MTLBlitPassSampleBufferAttachmentDescriptorInternal : MTLBlitPassSampleBufferAttachmentDescriptor {
    struct MTLBlitPassSampleBufferAttachmentDescriptorPrivate { id<MTLCounterSampleBuffer> sampleBuffer; unsigned long long startOfEncoderSampleIndex; unsigned long long endOfEncoderSampleIndex; } _private;
}

- (const struct MTLBlitPassSampleBufferAttachmentDescriptorPrivate { id x0; unsigned long long x1; unsigned long long x2; } *)_descriptorPrivate;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (void)dealloc;
- (id)sampleBuffer;
- (unsigned long long)startOfEncoderSampleIndex;
- (unsigned long long)endOfEncoderSampleIndex;
- (void)setSampleBuffer:(id)a0;
- (void)setStartOfEncoderSampleIndex:(unsigned long long)a0;
- (void)setEndOfEncoderSampleIndex:(unsigned long long)a0;

@end
