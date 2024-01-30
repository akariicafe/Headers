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

- (id)newVisibleFunctionTableWithDescriptor:(id)a0 stage:(unsigned long long)a1;
- (id)newVertexIntersectionFunctionTableWithDescriptor:(id)a0;
- (id)newVisibleFunctionTableFromVertexStageWithDescriptor:(id)a0;
- (id)newVisibleFunctionTableFromTileStageWithDescriptor:(id)a0;
- (id)vertexFunctionHandleWithFunction:(id)a0;
- (id)description;
- (id)newTileRenderPipelineStateWithAdditionalBinaryFunctions:(id)a0 error:(id *)a1;
- (id)newTileIntersectionFunctionTableWithDescriptor:(id)a0;
- (id)newIntersectionFunctionTableWithDescriptor:(id)a0 stage:(unsigned long long)a1;
- (id)newFragmentIntersectionFunctionTableWithDescriptor:(id)a0;
- (id)newRenderPipelineStateWithAdditionalBinaryFunctions:(id)a0 error:(id *)a1;
- (id)functionHandleWithFunction:(id)a0 stage:(unsigned long long)a1;
- (id)formattedDescription:(unsigned long long)a0;
- (id)newRenderPipelineStateWithAdditionalBinaryFunctions:(id)a0 fragmentAdditionalBinaryFunctions:(id)a1 error:(id *)a2;
- (id)fragmentFunctionHandleWithFunction:(id)a0;
- (void)dealloc;
- (id)tileFunctionHandleWithFunction:(id)a0;
- (id)newVisibleFunctionTableFromFragmentStageWithDescriptor:(id)a0;
- (void)validateHandleForSetFunction:(id)a0;
- (id)initWithPipelineState:(id)a0 reflection:(id)a1 parent:(id)a2 descriptor:(id)a3;
- (id)getParameter:(id)a0;
- (BOOL)isAncestorOf:(id)a0;
- (id)initWithPipelineState:(id)a0 reflection:(id)a1 parent:(id)a2 tileDescriptor:(id)a3;
- (id)outputImageBlockData;
- (BOOL)isImageBlockLayoutInputCompatibleWithOutputOf:(id)a0;
- (void)_updateCachedPipelineState;
- (void)_updateCachedTilePipelineState;
- (id)_findMasterStruct:(id)a0 includeImageBlockData:(BOOL)a1;
- (id)validateBinaryFunctions:(id)a0 stage:(unsigned long long)a1;
- (id)newVisibleFunctionTableWithDescriptor:(id)a0 stage:(unsigned long long)a1 selector:(SEL)a2;
- (id)functionHandleToDebugFunctionHandle:(id)a0 parentFunction:(id)a1 stage:(unsigned long long)a2;
- (id)functionHandleWithFunction:(id)a0 stage:(unsigned long long)a1 selector:(SEL)a2;
- (id)newIntersectionFunctionTableWithDescriptor:(id)a0 withStage:(unsigned long long)a1 selector:(SEL)a2;

@end
