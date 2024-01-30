@class NSString, MTLDebugInstrumentationData;
@protocol MTLDevice;

@interface _MTLComputePipelineState : NSObject <MTLComputePipelineState> {
    BOOL _supportIndirectCommandBuffers;
    long long _textureWriteRoundingMode;
}

@property (readonly) NSString *label;
@property (readonly) id<MTLDevice> device;
@property (retain, nonatomic) MTLDebugInstrumentationData *debugInstrumentationData;
@property (readonly) unsigned long long uniqueIdentifier;
@property (readonly) long long textureWriteRoundingMode;
@property (readonly, nonatomic) unsigned long long resourceIndex;
@property (readonly, nonatomic) unsigned long long gpuAddress;
@property (readonly, nonatomic) unsigned long long allocatedSize;
@property (readonly) unsigned long long maxTotalThreadsPerThreadgroup;
@property (readonly) unsigned long long threadExecutionWidth;
@property (readonly) unsigned long long staticThreadgroupMemoryLength;
@property (readonly) BOOL supportIndirectCommandBuffers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)textureWriteFPRoundingMode;
- (id)initWithParent:(id)a0;
- (unsigned long long)imageblockMemoryLengthForDimensions:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a0;
- (id)newIntersectionFunctionTableWithDescriptor:(id)a0;
- (id)initWithDevice:(id)a0 pipelineStateDescriptor:(id)a1;
- (id)functionPointerHandleWithFunction:(id)a0;
- (unsigned int)getComputeKernelTelemetryID;
- (id)functionHandleWithFunction:(id)a0;
- (id)newVisibleFunctionTableWithDescriptor:(id)a0;
- (id)functionPointerHandlesWithFunctions:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (id)newComputePipelineStateWithAdditionalBinaryFunctions:(id)a0 error:(id *)a1;
- (id)formattedDescription:(unsigned long long)a0;
- (void)dealloc;

@end
