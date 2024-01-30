@class NSString, NSDictionary, NSArray, MTLTileRenderPipelineColorAttachmentDescriptorArrayInternal, MTLPipelineBufferDescriptorArrayInternal;
@protocol MTLFunction;

@interface MTLTileRenderPipelineDescriptorInternal : MTLTileRenderPipelineDescriptor {
    struct MTLTileRenderPipelineDescriptorPrivate { MTLTileRenderPipelineColorAttachmentDescriptorArrayInternal *attachments; union { unsigned long long sampleCount; unsigned long long rasterSampleCount; } ; NSString *label; id<MTLFunction> tileFunction; BOOL threadgroupSizeMatchesTileSize; unsigned long long paddingToRemove; unsigned long long colorSampleCount; MTLPipelineBufferDescriptorArrayInternal *tileBuffers; unsigned short maxTotalThreadsPerThreadgroup; long long textureWriteRoundingMode; NSDictionary *pluginData; NSArray *binaryArchives; } _private;
}

- (id)formattedDescription:(unsigned long long)a0;
- (const struct MTLTileRenderPipelineDescriptorPrivate { id x0; union { unsigned long long x0; unsigned long long x1; } x1; id x2; id x3; BOOL x4; unsigned long long x5; unsigned long long x6; id x7; unsigned short x8; long long x9; id x10; id x11; } *)_descriptorPrivate;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)reset;
- (void)setTileFunction:(id)a0;
- (void)setThreadgroupSizeMatchesTileSize:(BOOL)a0;
- (void)dealloc;
- (long long)textureWriteFPRoundingMode;
- (long long)textureWriteRoundingMode;
- (void)setLabel:(id)a0;
- (unsigned long long)hash;
- (void)setTextureWriteRoundingMode:(long long)a0;
- (void)setSampleCount:(unsigned long long)a0;
- (BOOL)validateWithDevice:(id)a0 error:(id *)a1;
- (void)setPluginData:(id)a0;
- (unsigned long long)rasterSampleCount;
- (void)setColorSampleCount:(unsigned long long)a0;
- (id)description;
- (BOOL)threadgroupSizeMatchesTileSize;
- (void)setTextureWriteFPRoundingMode:(long long)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)sampleCount;
- (unsigned long long)colorSampleCount;
- (id)label;
- (id)colorAttachments;
- (void)validateWithDevice:(id)a0;
- (void)setMaxTotalThreadsPerThreadgroup:(unsigned long long)a0;
- (id)binaryArchives;
- (void)setBinaryArchives:(id)a0;
- (id)tileBuffers;
- (id)tileFunction;
- (id)newSerializedTileDataWithFlags:(unsigned long long)a0 options:(unsigned long long)a1 error:(id *)a2;
- (unsigned long long)maxTotalThreadsPerThreadgroup;
- (id)pluginData;
- (void)setRasterSampleCount:(unsigned long long)a0;

@end
