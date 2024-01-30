@class MTLRenderPipelineReflection, MTLTileRenderPipelineDescriptor, MTLRenderPipelineDescriptor;

@interface MTLDebugRenderPipelineState : MTLToolsRenderPipelineState {
    unsigned long long _maxVertexCount;
    unsigned long long _maxInstanceCount;
    unsigned long long _maxPatchCount;
    unsigned long long _rasterSampleCount;
    unsigned long long _colorPixelFormat[8];
    unsigned long long _depthPixelFormat;
    unsigned long long _stencilPixelFormat;
    unsigned long long _vertexDescriptorLayoutCount;
    struct { unsigned long long bufferIndex; unsigned long long bufferStride; } _vertexDescriptorLayouts[31];
    BOOL _threadgroupSizeMatchesTileSize;
}

@property (readonly, nonatomic) BOOL rasterizationEnabled;
@property (readonly, nonatomic) MTLRenderPipelineDescriptor *descriptor;
@property (readonly, nonatomic) MTLRenderPipelineReflection *reflection;
@property (readonly, nonatomic) unsigned long long attachmentWriteMask;
@property (readonly, nonatomic) MTLTileRenderPipelineDescriptor *tileDescriptor;

- (id)formattedDescription:(unsigned long long)a0;
- (void)dealloc;
- (id)description;
- (id)initWithPipelineState:(id)a0 reflection:(id)a1 parent:(id)a2 descriptor:(id)a3;
- (id)getParameter:(id)a0;
- (id)initWithPipelineState:(id)a0 reflection:(id)a1 parent:(id)a2 tileDescriptor:(id)a3;
- (id)outputImageBlockData;
- (BOOL)isImageBlockLayoutInputCompatibleWithOutputOf:(id)a0;
- (void)_updateCachedPipelineState:(id)a0;
- (void)_updateCachedTilePipelineState:(id)a0;
- (id)_findMasterStruct:(id)a0 includeImageBlockData:(BOOL)a1;

@end
