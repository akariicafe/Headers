@interface MTLRenderPipelineColorAttachmentDescriptorInternal : MTLRenderPipelineColorAttachmentDescriptor {
    struct MTLRenderPipelineAttachmentDescriptorPrivate { union { struct { unsigned char blendingEnabled : 1; unsigned char rgbBlendOperation : 3; unsigned char alphaBlendOperation : 3; unsigned char sourceRGBBlendFactor : 5; unsigned char sourceAlphaBlendFactor : 5; unsigned char destinationRGBBlendFactor : 5; unsigned char destinationAlphaBlendFactor : 5; unsigned char writeMask : 4; unsigned char logicOpEnabled : 1; unsigned char logicOp : 4; unsigned int pixelFormat : 28; } ; struct { unsigned long long bits; } ; } ; } _private;
}

- (id)formattedDescription:(unsigned long long)a0;
- (void)setDestinationRGBBlendFactor:(unsigned long long)a0;
- (const struct MTLRenderPipelineAttachmentDescriptorPrivate { union { struct { unsigned char x0 : 1; unsigned char x1 : 3; unsigned char x2 : 3; unsigned char x3 : 5; unsigned char x4 : 5; unsigned char x5 : 5; unsigned char x6 : 5; unsigned char x7 : 4; unsigned char x8 : 1; unsigned char x9 : 4; unsigned int x10 : 28; } x0; struct { unsigned long long x0; } x1; } x0; } *)_descriptorPrivate;
- (id)init;
- (unsigned long long)destinationRGBBlendFactor;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)pixelFormat;
- (unsigned long long)writeMask;
- (unsigned long long)sourceRGBBlendFactor;
- (void)setBlendingEnabled:(BOOL)a0;
- (void)dealloc;
- (void)setWriteMask:(unsigned long long)a0;
- (unsigned long long)destinationAlphaBlendFactor;
- (void)setSourceRGBBlendFactor:(unsigned long long)a0;
- (unsigned long long)rgbBlendOperation;
- (unsigned long long)hash;
- (void)setDestinationAlphaBlendFactor:(unsigned long long)a0;
- (unsigned long long)sourceAlphaBlendFactor;
- (id)description;
- (void)setRgbBlendOperation:(unsigned long long)a0;
- (void)setAlphaBlendOperation:(unsigned long long)a0;
- (BOOL)isEqual:(id)a0;
- (void)setPixelFormat:(unsigned long long)a0;
- (BOOL)isBlendingEnabled;
- (unsigned long long)alphaBlendOperation;
- (void)setSourceAlphaBlendFactor:(unsigned long long)a0;

@end
