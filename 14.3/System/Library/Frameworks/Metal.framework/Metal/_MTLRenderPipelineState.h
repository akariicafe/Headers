@class NSString, MTLDebugInstrumentationData, MTLIndirectArgumentBufferEmulationData;
@protocol MTLDevice;

@interface _MTLRenderPipelineState : NSObject <MTLRenderPipelineState> {
    BOOL _supportIndirectCommandBuffers;
    long long _textureWriteRoundingMode;
}

@property (readonly) NSString *label;
@property (readonly) id<MTLDevice> device;
@property (retain, nonatomic) MTLIndirectArgumentBufferEmulationData *vertexIABEmulationData;
@property (retain, nonatomic) MTLIndirectArgumentBufferEmulationData *fragmentIABEmulationData;
@property (retain, nonatomic) MTLDebugInstrumentationData *vertexDebugInstrumentationData;
@property (retain, nonatomic) MTLDebugInstrumentationData *fragmentDebugInstrumentationData;
@property (retain, nonatomic) MTLDebugInstrumentationData *tileDebugInstrumentationData;
@property (readonly) long long textureWriteRoundingMode;
@property (readonly) unsigned long long uniqueIdentifier;
@property (readonly, nonatomic) unsigned long long resourceIndex;
@property (readonly, nonatomic) unsigned long long gpuAddress;
@property (readonly) unsigned long long imageBlockSampleLength;
@property (readonly) unsigned long long maxTotalThreadsPerThreadgroup;
@property (readonly) BOOL threadgroupSizeMatchesTileSize;
@property (readonly) unsigned long long imageblockSampleLength;
@property (readonly) BOOL supportIndirectCommandBuffers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDevice:(id)a0 pipelineStateDescriptor:(id)a1;
- (void)dealloc;
- (long long)textureWriteFPRoundingMode;
- (unsigned int)getFragmentShaderTelemetryID;
- (unsigned long long)imageblockMemoryLengthForDimensions:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a0;
- (id)initWithDeviceAndTileDesc:(id)a0 tilePipelineStateDescriptor:(id)a1;
- (unsigned int)getVertexShaderTelemetryID;

@end
