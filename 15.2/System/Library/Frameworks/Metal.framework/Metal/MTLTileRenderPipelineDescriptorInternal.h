@class NSString, NSDictionary, NSArray, MTLTileRenderPipelineColorAttachmentDescriptorArrayInternal, MTLLinkedFunctions, MTLPipelineBufferDescriptorArrayInternal;
@protocol MTLFunction;

@interface MTLTileRenderPipelineDescriptorInternal : MTLTileRenderPipelineDescriptor {
    struct MTLTileRenderPipelineDescriptorPrivate { MTLTileRenderPipelineColorAttachmentDescriptorArrayInternal *attachments; union { unsigned long long sampleCount; unsigned long long rasterSampleCount; } ; NSString *label; id<MTLFunction> tileFunction; BOOL threadgroupSizeMatchesTileSize; unsigned long long paddingToRemove; unsigned long long colorSampleCount; MTLPipelineBufferDescriptorArrayInternal *tileBuffers; unsigned short maxTotalThreadsPerThreadgroup; long long textureWriteRoundingMode; NSDictionary *pluginData; NSArray *binaryArchives; MTLLinkedFunctions *linkedFunctions; NSArray *preloadedLibraries; unsigned long long maxStackCallDepth; BOOL supportAddingBinaryFunctions; } _private;
}

- (void)setBinaryArchives:(id)a0;
- (id)binaryArchives;
- (void)setTextureWriteRoundingMode:(long long)a0;
- (void)setPluginData:(id)a0;
- (id)pluginData;
- (BOOL)validateWithDevice:(id)a0 error:(id *)a1;
- (const struct MTLTileRenderPipelineDescriptorPrivate { id x0; union { unsigned long long x0; unsigned long long x1; } x1; id x2; id x3; BOOL x4; unsigned long long x5; unsigned long long x6; id x7; unsigned short x8; long long x9; id x10; id x11; id x12; id x13; unsigned long long x14; BOOL x15; } *)_descriptorPrivate;
- (unsigned long long)colorSampleCount;
- (void)setInsertLibraries:(id)a0;
- (void)setLinkedFunctions:(id)a0;
- (void)validateWithDevice:(id)a0;
- (BOOL)supportAddingBinaryFunctions;
- (long long)textureWriteRoundingMode;
- (void)setPreloadedLibraries:(id)a0;
- (id)linkedFunctions;
- (void)setColorSampleCount:(unsigned long long)a0;
- (void)setSampleCount:(unsigned long long)a0;
- (id)insertLibraries;
- (unsigned long long)rasterSampleCount;
- (void)setSupportAddingBinaryFunctions:(BOOL)a0;
- (id)description;
- (BOOL)threadgroupSizeMatchesTileSize;
- (id)label;
- (void)setMaxCallStackDepth:(unsigned long long)a0;
- (unsigned long long)maxTotalThreadsPerThreadgroup;
- (unsigned long long)maxCallStackDepth;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)preloadedLibraries;
- (void)setTileFunction:(id)a0;
- (void)setThreadgroupSizeMatchesTileSize:(BOOL)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setRasterSampleCount:(unsigned long long)a0;
- (unsigned long long)sampleCount;
- (id)formattedDescription:(unsigned long long)a0;
- (id)colorAttachments;
- (void)setMaxTotalThreadsPerThreadgroup:(unsigned long long)a0;
- (unsigned long long)hash;
- (void)dealloc;
- (void)reset;
- (void)setLabel:(id)a0;
- (id)tileFunction;
- (id)tileBuffers;
- (id)newSerializedTileDataWithFlags:(unsigned long long)a0 options:(unsigned long long)a1 error:(id *)a2;

@end
