@class MTLRenderPassColorAttachmentDescriptorArrayInternal, MTLRenderPassSampleBufferAttachmentDescriptorArrayInternal;
@protocol MTLRasterizationRateMap, MTLBuffer;

@interface MTLRenderPassDescriptorInternal : MTLRenderPassDescriptor {
    struct MTLRenderPassDescriptorPrivate { MTLRenderPassColorAttachmentDescriptorArrayInternal *attachments; id<MTLBuffer> visibilityResultBuffer; unsigned long long renderTargetWidth; unsigned long long renderTargetHeight; unsigned long long defaultColorSampleCount; BOOL fineGrainedBackgroundVisibilityEnabled; BOOL ditherEnabled; BOOL openGLModeEnabled; unsigned long long renderTargetArrayLength; unsigned long long tileWidth; unsigned long long tileHeight; union { unsigned long long defaultSampleCount; unsigned long long defaultRasterSampleCount; } ; unsigned long long imageBlockSampleLength; unsigned long long threadgroupMemoryLength; struct { float x; float y; } customSamplePositions[4]; unsigned long long numCustomSamplePositions; id<MTLRasterizationRateMap> rasterizationRateMap; MTLRenderPassSampleBufferAttachmentDescriptorArrayInternal *sampleBufferAttachments; BOOL pointCoordYFlipEnabled; } _private;
}

+ (id)renderPassDescriptor;

- (void)setOpenGLModeEnabled:(BOOL)a0;
- (void)setRenderTargetArrayLength:(unsigned long long)a0;
- (unsigned long long)tileHeight;
- (const struct MTLRenderPassDescriptorPrivate { id x0; id x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; BOOL x5; BOOL x6; BOOL x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; union { unsigned long long x0; unsigned long long x1; } x11; unsigned long long x12; unsigned long long x13; struct { float x0; float x1; } x14[4]; unsigned long long x15; id x16; id x17; BOOL x18; } *)_descriptorPrivate;
- (id)stencilAttachment;
- (BOOL)fineGrainedBackgroundVisibilityEnabled;
- (void)setSamplePositions:(const struct { float x0; float x1; } *)a0 count:(unsigned long long)a1;
- (void)setImageblockSampleLength:(unsigned long long)a0;
- (void)setDefaultColorSampleCount:(unsigned long long)a0;
- (unsigned long long)tileWidth;
- (void)setRasterizationRateMap:(id)a0;
- (unsigned long long)renderTargetHeight;
- (id)rasterizationRateMap;
- (void)setDefaultRasterSampleCount:(unsigned long long)a0;
- (id)description;
- (void)setVisibilityResultBuffer:(id)a0;
- (void)setThreadgroupMemoryLength:(unsigned long long)a0;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (BOOL)isDitherEnabled;
- (unsigned long long)defaultRasterSampleCount;
- (void)setRenderTargetWidth:(unsigned long long)a0;
- (id)sampleBufferAttachments;
- (BOOL)validate:(id)a0 width:(unsigned long long *)a1 height:(unsigned long long *)a2;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)pointCoordYFlipEnabled;
- (void)setRenderTargetHeight:(unsigned long long)a0;
- (void)setDepthAttachment:(id)a0;
- (unsigned long long)defaultColorSampleCount;
- (id)formattedDescription:(unsigned long long)a0;
- (id)colorAttachments;
- (void)setStencilAttachment:(id)a0;
- (void)setTileHeight:(unsigned long long)a0;
- (void)setPointCoordYFlipEnabled:(BOOL)a0;
- (void)setFineGrainedBackgroundVisibilityEnabled:(BOOL)a0;
- (BOOL)openGLModeEnabled;
- (unsigned long long)hash;
- (void)dealloc;
- (unsigned long long)renderTargetWidth;
- (unsigned long long)threadgroupMemoryLength;
- (unsigned long long)renderTargetArrayLength;
- (unsigned long long)imageblockSampleLength;
- (id)depthAttachment;
- (void)setTileWidth:(unsigned long long)a0;
- (id)visibilityResultBuffer;
- (void)setDitherEnabled:(BOOL)a0;
- (unsigned long long)getSamplePositions:(struct { float x0; float x1; } *)a0 count:(unsigned long long)a1;

@end
