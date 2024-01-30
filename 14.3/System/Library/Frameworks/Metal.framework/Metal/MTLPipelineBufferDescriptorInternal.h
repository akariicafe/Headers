@interface MTLPipelineBufferDescriptorInternal : MTLPipelineBufferDescriptor {
    struct MTLPipelineBufferDescriptorPrivate { union { struct { unsigned char mutability : 2; } ; struct { unsigned long long bits; } ; } ; } _private;
}

- (id)formattedDescription:(unsigned long long)a0;
- (unsigned long long)mutability;
- (void)setMutability:(unsigned long long)a0;
- (const struct MTLPipelineBufferDescriptorPrivate { union { struct { unsigned char x0 : 2; } x0; struct { unsigned long long x0; } x1; } x0; } *)_descriptorPrivate;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isDefault;
- (void)dealloc;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;

@end
