@class MTLRenderPassColorAttachmentDescriptorArrayInternal, MTLRenderPassSampleBufferAttachmentDescriptorArrayInternal;
@protocol MTLRasterizationRateMap, MTLBuffer;

@interface MTLRenderPassDescriptorInternal : MTLRenderPassDescriptor {
    struct MTLRenderPassDescriptorPrivate { MTLRenderPassColorAttachmentDescriptorArrayInternal *attachments; id<MTLBuffer> visibilityResultBuffer; unsigned long long renderTargetWidth; unsigned long long renderTargetHeight; unsigned long long defaultColorSampleCount; BOOL fineGrainedBackgroundVisibilityEnabled; BOOL ditherEnabled; BOOL openGLModeEnabled; unsigned long long renderTargetArrayLength; unsigned long long tileWidth; unsigned long long tileHeight; union { unsigned long long defaultSampleCount; unsigned long long defaultRasterSampleCount; } ; unsigned long long imageBlockSampleLength; unsigned long long threadgroupMemoryLength; struct { float x; float y; } customSamplePositions[4]; unsigned long long numCustomSamplePositions; id<MTLRasterizationRateMap> rasterizationRateMap; MTLRenderPassSampleBufferAttachmentDescriptorArrayInternal *sampleBufferAttachments; BOOL pointCoordYFlipEnabled; } _private;
}

+ (id)renderPassDescriptor;

- (id)formattedDescription:(unsigned long long)a0;
- (unsigned long long)imageblockSampleLength;
- (const struct MTLRenderPassDescriptorPrivate { id x0; id x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; BOOL x5; BOOL x6; BOOL x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; union { unsigned long long x0; unsigned long long x1; } x11; unsigned long long x12; unsigned long long x13; struct { float x0; float x1; } x14[4]; unsigned long long x15; id x16; id x17; BOOL x18; } *)_descriptorPrivate;
- (unsigned long long)defaultRasterSampleCount;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isDitherEnabled;
- (void)setDefaultRasterSampleCount:(unsigned long long)a0;
- (id)visibilityResultBuffer;
- (void)dealloc;
- (void)setOpenGLModeEnabled:(BOOL)a0;
- (void)setTileWidth:(unsigned long long)a0;
- (unsigned long long)renderTargetArrayLength;
- (void)setRenderTargetArrayLength:(unsigned long long)a0;
- (void)setVisibilityResultBuffer:(id)a0;
- (void)setRenderTargetWidth:(unsigned long long)a0;
- (void)setFineGrainedBackgroundVisibilityEnabled:(BOOL)a0;
- (unsigned long long)hash;
- (BOOL)fineGrainedBackgroundVisibilityEnabled;
- (id)depthAttachment;
- (BOOL)pointCoordYFlipEnabled;
- (id)rasterizationRateMap;
- (void)setStencilAttachment:(id)a0;
- (id)description;
- (void)setTileHeight:(unsigned long long)a0;
- (unsigned long long)threadgroupMemoryLength;
- (void)setDepthAttachment:(id)a0;
- (void)setImageblockSampleLength:(unsigned long long)a0;
- (void)setPointCoordYFlipEnabled:(BOOL)a0;
- (BOOL)isEqual:(id)a0;
- (void)setDitherEnabled:(BOOL)a0;
- (unsigned long long)defaultColorSampleCount;
- (void)setRasterizationRateMap:(id)a0;
- (void)setSamplePositions:(const struct { float x0; float x1; } *)a0 count:(unsigned long long)a1;
- (unsigned long long)tileHeight;
- (BOOL)validate:(id)a0 width:(unsigned long long *)a1 height:(unsigned long long *)a2;
- (id)colorAttachments;
- (id)stencilAttachment;
- (unsigned long long)renderTargetWidth;
- (unsigned long long)getSamplePositions:(struct { float x0; float x1; } *)a0 count:(unsigned long long)a1;
- (id)sampleBufferAttachments;
- (unsigned long long)renderTargetHeight;
- (void)setThreadgroupMemoryLength:(unsigned long long)a0;
- (BOOL)openGLModeEnabled;
- (void)setDefaultColorSampleCount:(unsigned long long)a0;
- (unsigned long long)tileWidth;
- (void)setRenderTargetHeight:(unsigned long long)a0;

@end
