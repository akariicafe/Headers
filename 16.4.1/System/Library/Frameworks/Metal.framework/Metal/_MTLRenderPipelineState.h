@class NSString, MTLDebugInstrumentationData;
@protocol MTLDevice;

@interface _MTLRenderPipelineState : NSObject <MTLRenderPipelineState> {
    BOOL _supportIndirectCommandBuffers;
    long long _textureWriteRoundingMode;
}

@property (readonly) NSString *label;
@property (readonly) id<MTLDevice> device;
@property (retain, nonatomic) MTLDebugInstrumentationData *vertexDebugInstrumentationData;
@property (retain, nonatomic) MTLDebugInstrumentationData *fragmentDebugInstrumentationData;
@property (retain, nonatomic) MTLDebugInstrumentationData *tileDebugInstrumentationData;
@property (retain, nonatomic) MTLDebugInstrumentationData *objectDebugInstrumentationData;
@property (retain, nonatomic) MTLDebugInstrumentationData *meshDebugInstrumentationData;
@property (readonly) unsigned long long maxTotalThreadsPerObjectThreadgroup;
@property (readonly) unsigned long long maxTotalThreadsPerMeshThreadgroup;
@property (readonly) unsigned long long objectThreadExecutionWidth;
@property (readonly) unsigned long long meshThreadExecutionWidth;
@property (readonly) unsigned long long maxTotalThreadgroupsPerMeshGrid;
@property (readonly) long long textureWriteRoundingMode;
@property (readonly) unsigned long long uniqueIdentifier;
@property (readonly, nonatomic) unsigned long long resourceIndex;
@property (readonly, nonatomic) unsigned long long gpuAddress;
@property (readonly, nonatomic) unsigned long long allocatedSize;
@property (readonly) unsigned long long imageBlockSampleLength;
@property (readonly) unsigned long long maxTotalThreadsPerThreadgroup;
@property (readonly) BOOL threadgroupSizeMatchesTileSize;
@property (readonly) unsigned int explicitVisibilityGroupID;
@property (readonly) unsigned long long gpuHandle;
@property (readonly) unsigned long long imageblockSampleLength;
@property (readonly) BOOL supportIndirectCommandBuffers;
@property (readonly) struct MTLResourceID { unsigned long long x0; } gpuResourceID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)textureWriteFPRoundingMode;
- (id)initWithParent:(id)a0;
- (id)initWithDevice:(id)a0 pipelineStateDescriptor:(id)a1;
- (id)initWithTileParent:(id)a0;
- (unsigned int)getFragmentShaderTelemetryID;
- (id)initWithDevice:(id)a0 meshRenderPipelineStateDescriptor:(id)a1 objectThreadExecutionWidth:(unsigned long long)a2 meshThreadExecutionWidth:(unsigned long long)a3;
- (id)newMeshIntersectionFunctionTableWithDescriptor:(id)a0;
- (id)newTileRenderPipelineStateWithAdditionalBinaryFunctions:(id)a0 error:(id *)a1;
- (id)newVertexIntersectionFunctionTableWithDescriptor:(id)a0;
- (id)fragmentFunctionHandleWithFunction:(id)a0;
- (unsigned int)getVertexShaderTelemetryID;
- (id)functionHandleWithFunction:(id)a0 stage:(unsigned long long)a1;
- (id)newVisibleFunctionTableFromVertexStageWithDescriptor:(id)a0;
- (id)newFragmentIntersectionFunctionTableWithDescriptor:(id)a0;
- (id)newRenderPipelineStateWithAdditionalBinaryFunctions:(id)a0 error:(id *)a1;
- (id)newTileIntersectionFunctionTableWithDescriptor:(id)a0;
- (id)vertexFunctionHandleWithFunction:(id)a0;
- (id)meshFunctionHandleWithFunction:(id)a0;
- (unsigned int)getObjectShaderTelemetryID;
- (id)newIntersectionFunctionTableWithDescriptor:(id)a0 stage:(unsigned long long)a1;
- (void)dealloc;
- (unsigned long long)imageblockMemoryLengthForDimensions:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a0;
- (id)newVisibleFunctionTableWithDescriptor:(id)a0 stage:(unsigned long long)a1;
- (id)newObjectIntersectionFunctionTableWithDescriptor:(id)a0;
- (id)pipelineBinaries;
- (id)newVisibleFunctionTableFromObjectStageWithDescriptor:(id)a0;
- (id)objectFunctionHandleWithFunction:(id)a0;
- (id)initWithDeviceAndTileDesc:(id)a0 tilePipelineStateDescriptor:(id)a1;
- (unsigned int)getMeshShaderTelemetryID;
- (id)tileFunctionHandleWithFunction:(id)a0;
- (id)newVisibleFunctionTableFromMeshStageWithDescriptor:(id)a0;
- (id)newVisibleFunctionTableFromTileStageWithDescriptor:(id)a0;
- (id)initWithDevice:(id)a0 meshRenderPipelineStateDescriptor:(id)a1 objectThreadExecutionWidth:(unsigned long long)a2 meshThreadExecutionWidth:(unsigned long long)a3 maxTotalThreadgroupsPerMeshGrid:(unsigned long long)a4;
- (id)newRenderPipelineStateWithAdditionalBinaryFunctions:(id)a0 fragmentAdditionalBinaryFunctions:(id)a1 error:(id *)a2;
- (id)newVisibleFunctionTableFromFragmentStageWithDescriptor:(id)a0;

@end
