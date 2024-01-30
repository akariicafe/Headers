@class MTLDebugInstrumentationData, NSString;
@protocol MTLFunction, MTLDevice;

@interface MTLToolsComputePipelineState : MTLToolsObject <MTLComputePipelineStateSPI> {
    id<MTLFunction> _function;
}

@property (readonly) long long textureWriteRoundingMode;
@property (readonly) unsigned long long staticThreadgroupMemoryLength;
@property (readonly, nonatomic) unsigned long long resourceIndex;
@property (readonly, nonatomic) unsigned long long gpuAddress;
@property (readonly) unsigned long long uniqueIdentifier;
@property (readonly, retain, nonatomic) MTLDebugInstrumentationData *debugInstrumentationData;
@property (readonly) NSString *label;
@property (readonly) id<MTLDevice> device;
@property (readonly) unsigned long long maxTotalThreadsPerThreadgroup;
@property (readonly) unsigned long long threadExecutionWidth;
@property (readonly) BOOL supportIndirectCommandBuffers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)newIntersectionFunctionTableWithDescriptor:(id)a0;
- (unsigned int)getComputeKernelTelemetryID;
- (void)dealloc;
- (id)functionHandleWithFunction:(id)a0;
- (id)functionPointerHandlesWithFunctions:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (unsigned long long)imageblockMemoryLengthForDimensions:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a0;
- (id)functionPointerHandleWithFunction:(id)a0;
- (id)newComputePipelineStateWithAdditionalBinaryFunctions:(id)a0 error:(id *)a1;
- (id)newVisibleFunctionTableWithDescriptor:(id)a0;
- (id)functionHandleToToolsFunctionHandle:(id)a0 parentFunction:(id)a1;
- (id)newComputePipelineStateWithAdditionalBinaryFunctions:(id)a0;

@end
