@class MTLComputePassSampleBufferAttachmentDescriptorArrayInternal;

@interface MTLComputePassDescriptorInternal : MTLComputePassDescriptor {
    struct MTLComputePassDescriptorPrivate { unsigned long long dispatchType; MTLComputePassSampleBufferAttachmentDescriptorArrayInternal *sampleBufferAttachments; } _private;
}

@property (nonatomic) unsigned int substreamCount;

+ (id)computePassDescriptor;

- (const struct MTLComputePassDescriptorPrivate { unsigned long long x0; id x1; } *)_descriptorPrivate;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)setDispatchType:(unsigned long long)a0;
- (id)sampleBufferAttachments;
- (unsigned long long)dispatchType;

@end
