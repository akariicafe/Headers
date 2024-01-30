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
@property (readonly) long long textureWriteRoundingMode;
@property (readonly) unsigned long long uniqueIdentifier;
@property (readonly, nonatomic) unsigned long long resourceIndex;
@property (readonly, nonatomic) unsigned long long gpuAddress;
@property (readonly, nonatomic) unsigned long long allocatedSize;
@property (readonly) unsigned long long imageBlockSampleLength;
@property (readonly) unsigned long long maxTotalThreadsPerThreadgroup;
@property (readonly) BOOL threadgroupSizeMatchesTileSize;
@property (readonly) unsigned long long imageblockSampleLength;
@property (readonly) BOOL supportIndirectCommandBuffers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)textureWriteFPRoundingMode;
- (id)initWithParent:(id)a0;
- (unsigned long long)imageblockMemoryLengthForDimensions:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a0;
- (id)newVisibleFunctionTableWithDescriptor:(id)a0 stage:(unsigned long long)a1;
- (id)newVertexIntersectionFunctionTableWithDescriptor:(id)a0;
- (unsigned int)getFragmentShaderTelemetryID;
- (id)initWithDevice:(id)a0 pipelineStateDescriptor:(id)a1;
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
- (id)initWithDeviceAndTileDesc:(id)a0 tilePipelineStateDescriptor:(id)a1;
- (void)dealloc;
- (id)tileFunctionHandleWithFunction:(id)a0;
- (id)newVisibleFunctionTableFromFragmentStageWithDescriptor:(id)a0;
- (id)initWithTileParent:(id)a0;

@end
