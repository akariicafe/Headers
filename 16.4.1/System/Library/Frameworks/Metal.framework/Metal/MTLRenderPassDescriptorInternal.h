@class MTLRenderPassColorAttachmentDescriptorArrayInternal, MTLRenderPassSampleBufferAttachmentDescriptorArrayInternal;
@protocol MTLRasterizationRateMap, MTLBuffer;

@interface MTLRenderPassDescriptorInternal : MTLRenderPassDescriptor {
    struct MTLRenderPassDescriptorPrivate { MTLRenderPassColorAttachmentDescriptorArrayInternal *attachments; id<MTLBuffer> visibilityResultBuffer; unsigned long long renderTargetWidth; unsigned long long renderTargetHeight; unsigned long long defaultColorSampleCount; BOOL fineGrainedBackgroundVisibilityEnabled; BOOL skipEmptyTilesOnClearEnabled; BOOL ditherEnabled; BOOL openGLModeEnabled; unsigned long long renderTargetArrayLength; unsigned long long tileWidth; unsigned long long tileHeight; union { unsigned long long defaultSampleCount; unsigned long long defaultRasterSampleCount; } ; unsigned long long imageBlockSampleLength; unsigned long long threadgroupMemoryLength; struct { float x; float y; } customSamplePositions[4]; unsigned long long numCustomSamplePositions; id<MTLRasterizationRateMap> rasterizationRateMap; MTLRenderPassSampleBufferAttachmentDescriptorArrayInternal *sampleBufferAttachments; BOOL pointCoordYFlipEnabled; } _private;
}

+ (id)renderPassDescriptor;

- (const struct MTLRenderPassDescriptorPrivate { id x0; id x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; BOOL x5; BOOL x6; BOOL x7; BOOL x8; unsigned long long x9; unsigned long long x10; unsigned long long x11; union { unsigned long long x0; unsigned long long x1; } x12; unsigned long long x13; unsigned long long x14; struct { float x0; float x1; } x15[4]; unsigned long long x16; id x17; id x18; BOOL x19; } *)_descriptorPrivate;
- (void)setOpenGLModeEnabled:(BOOL)a0;
- (unsigned long long)renderTargetWidth;
- (unsigned long long)getSamplePositions:(struct { float x0; float x1; } *)a0 count:(unsigned long long)a1;
- (unsigned long long)tileHeight;
- (BOOL)openGLModeEnabled;
- (BOOL)fineGrainedBackgroundVisibilityEnabled;
- (void)setSkipEmptyTilesOnClearEnabled:(BOOL)a0;
- (BOOL)validate:(id)a0 width:(unsigned long long *)a1 height:(unsigned long long *)a2;
- (id)depthAttachment;
- (void)setPointCoordYFlipEnabled:(BOOL)a0;
- (unsigned long long)imageblockSampleLength;
- (void)setThreadgroupMemoryLength:(unsigned long long)a0;
- (BOOL)pointCoordYFlipEnabled;
- (unsigned long long)renderTargetHeight;
- (void)setVisibilityResultBuffer:(id)a0;
- (void)setSamplePositions:(const struct { float x0; float x1; } *)a0 count:(unsigned long long)a1;
- (unsigned long long)renderTargetArrayLength;
- (id)stencilAttachment;
- (id)colorAttachments;
- (unsigned long long)defaultRasterSampleCount;
- (unsigned long long)tileWidth;
- (id)formattedDescription:(unsigned long long)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)visibilityResultBuffer;
- (id)rasterizationRateMap;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (void)setImageblockSampleLength:(unsigned long long)a0;
- (id)sampleBufferAttachments;
- (BOOL)isDitherEnabled;
- (void)setDefaultRasterSampleCount:(unsigned long long)a0;
- (void)setTileWidth:(unsigned long long)a0;
- (unsigned long long)hash;
- (void)setRasterizationRateMap:(id)a0;
- (id)init;
- (void)setFineGrainedBackgroundVisibilityEnabled:(BOOL)a0;
- (id)description;
- (void)setTileHeight:(unsigned long long)a0;
- (unsigned long long)defaultColorSampleCount;
- (void)setDitherEnabled:(BOOL)a0;
- (unsigned long long)threadgroupMemoryLength;
- (void)setStencilAttachment:(id)a0;
- (void)setRenderTargetWidth:(unsigned long long)a0;
- (void)setDefaultColorSampleCount:(unsigned long long)a0;
- (void)setRenderTargetHeight:(unsigned long long)a0;
- (void)setDepthAttachment:(id)a0;
- (void)setRenderTargetArrayLength:(unsigned long long)a0;
- (BOOL)skipEmptyTilesOnClearEnabled;

@end
