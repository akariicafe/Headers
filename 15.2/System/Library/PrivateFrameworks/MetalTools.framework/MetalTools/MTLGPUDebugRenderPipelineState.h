@class MTLGPUDebugImageData, MTLRenderPipelineReflection, NSMutableArray, MTLGPUDebugBuffer;

@interface MTLGPUDebugRenderPipelineState : MTLToolsRenderPipelineState {
    MTLRenderPipelineReflection *_internalReflection;
    MTLRenderPipelineReflection *_userReflection;
    MTLGPUDebugImageData *_vertexFunctionData;
    MTLGPUDebugImageData *_fragmentFunctionData;
    MTLGPUDebugImageData *_tileFunctionData;
    NSMutableArray *_retainedFunctions;
    MTLGPUDebugBuffer *_indirectStateBuffer;
    BOOL _supportsIndirectCommandBuffers;
}

@property (readonly, nonatomic) NSMutableArray *binaryFunctionData;
@property (readonly, nonatomic) MTLGPUDebugImageData *vertexFunctionData;
@property (readonly, nonatomic) MTLGPUDebugImageData *fragmentFunctionData;
@property (readonly, nonatomic) MTLGPUDebugImageData *tileFunctionData;
@property (readonly, nonatomic) MTLRenderPipelineReflection *internalReflection;
@property (readonly, nonatomic) MTLRenderPipelineReflection *userReflection;
@property (readonly, nonatomic) MTLGPUDebugBuffer *vertexConstantsBuffer;
@property (readonly, nonatomic) MTLGPUDebugBuffer *fragmentConstantsBuffer;
@property (readonly, nonatomic) MTLGPUDebugBuffer *tileConstantsBuffer;
@property (readonly, nonatomic) MTLGPUDebugBuffer *indirectStateBuffer;

- (id)newVisibleFunctionTableWithDescriptor:(id)a0 stage:(unsigned long long)a1;
- (id)newIntersectionFunctionTableWithDescriptor:(id)a0;
- (id)newVertexIntersectionFunctionTableWithDescriptor:(id)a0;
- (id)newVisibleFunctionTableFromVertexStageWithDescriptor:(id)a0;
- (id)newVisibleFunctionTableFromTileStageWithDescriptor:(id)a0;
- (id)newTileRenderPipelineStateWithAdditionalBinaryFunctions:(id)a0 error:(id *)a1;
- (id)newTileIntersectionFunctionTableWithDescriptor:(id)a0;
- (id)newVisibleFunctionTableWithDescriptor:(id)a0;
- (id)newIntersectionFunctionTableWithDescriptor:(id)a0 stage:(unsigned long long)a1;
- (id)newFragmentIntersectionFunctionTableWithDescriptor:(id)a0;
- (id)newRenderPipelineStateWithAdditionalBinaryFunctions:(id)a0 error:(id *)a1;
- (id)newRenderPipelineStateWithAdditionalBinaryFunctions:(id)a0 fragmentAdditionalBinaryFunctions:(id)a1 error:(id *)a2;
- (void)dealloc;
- (id)newVisibleFunctionTableFromFragmentStageWithDescriptor:(id)a0;
- (id)initWithRenderPipelineState:(id)a0 descriptor:(id)a1 unwrappedDescriptor:(id)a2 reflection:(id)a3 device:(id)a4 pipelineOptions:(unsigned long long)a5;
- (void)releaseReflection;
- (id)initWithRenderPipelineState:(id)a0 tileDescriptor:(id)a1 reflection:(id)a2 device:(id)a3;
- (void)_initConstantsBuffer:(id)a0 device:(id)a1;
- (id)unwrapBinaryFunctions:(id)a0;
- (id)initWithRenderPipelineState:(id)a0 vertexBinaryFunctions:(id)a1 fragmentBinaryFunctions:(id)a2 tileBinaryFunctions:(id)a3 withState:(id)a4 device:(id)a5;

@end
