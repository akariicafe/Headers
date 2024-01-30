@class MTLDebugInstrumentationData, NSString;
@protocol MTLDevice;

@interface MTLToolsRenderPipelineState : MTLToolsObject <MTLRenderPipelineStateSPI>

@property (readonly, nonatomic) unsigned long long resourceIndex;
@property (readonly, nonatomic) unsigned long long gpuAddress;
@property (readonly) long long textureWriteRoundingMode;
@property (readonly, nonatomic) unsigned long long allocatedSize;
@property (readonly) unsigned long long uniqueIdentifier;
@property (readonly, retain, nonatomic) MTLDebugInstrumentationData *vertexDebugInstrumentationData;
@property (readonly, retain, nonatomic) MTLDebugInstrumentationData *fragmentDebugInstrumentationData;
@property (readonly, retain, nonatomic) MTLDebugInstrumentationData *tileDebugInstrumentationData;
@property (readonly) NSString *label;
@property (readonly) id<MTLDevice> device;
@property (readonly) unsigned long long maxTotalThreadsPerThreadgroup;
@property (readonly) BOOL threadgroupSizeMatchesTileSize;
@property (readonly) unsigned long long imageblockSampleLength;
@property (readonly) BOOL supportIndirectCommandBuffers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (unsigned long long)imageblockMemoryLengthForDimensions:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a0;
- (id)newVisibleFunctionTableWithDescriptor:(id)a0 stage:(unsigned long long)a1;
- (id)newVertexIntersectionFunctionTableWithDescriptor:(id)a0;
- (unsigned int)getFragmentShaderTelemetryID;
- (id)newVisibleFunctionTableFromVertexStageWithDescriptor:(id)a0;
- (id)newVisibleFunctionTableFromTileStageWithDescriptor:(id)a0;
- (id)vertexFunctionHandleWithFunction:(id)a0;
- (unsigned int)getVertexShaderTelemetryID;
- (id)newTileRenderPipelineStateWithAdditionalBinaryFunctions:(id)a0 error:(id *)a1;
- (id)newTileIntersectionFunctionTableWithDescriptor:(id)a0;
- (id)newIntersectionFunctionTableWithDescriptor:(id)a0 stage:(unsigned long long)a1;
- (id)newFragmentIntersectionFunctionTableWithDescriptor:(id)a0;
- (id)newRenderPipelineStateWithAdditionalBinaryFunctions:(id)a0 error:(id *)a1;
- (id)functionHandleWithFunction:(id)a0 stage:(unsigned long long)a1;
- (id)newRenderPipelineStateWithAdditionalBinaryFunctions:(id)a0 fragmentAdditionalBinaryFunctions:(id)a1 error:(id *)a2;
- (id)fragmentFunctionHandleWithFunction:(id)a0;
- (void)dealloc;
- (id)tileFunctionHandleWithFunction:(id)a0;
- (id)newVisibleFunctionTableFromFragmentStageWithDescriptor:(id)a0;
- (id)newVertexShaderDebugInfo;
- (id)newFragmentShaderDebugInfo;
- (id)newVisibleFunctionTableWithDescriptor:(id)a0 selector:(SEL)a1;
- (id)newIntersectionFunctionTableWithDescriptor:(id)a0 selector:(SEL)a1;

@end
