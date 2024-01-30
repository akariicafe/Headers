@class NSString;
@protocol MTLDevice, MTLHeap, MTLIndirectCommandBufferSPI, MTLBuffer;

@interface MTLGPUDebugIndirectCommandBuffer : MTLToolsIndirectCommandBuffer <MTLGPUDebugResource> {
    BOOL _hasRender;
    BOOL _hasCompute;
    BOOL _inheritsBuffers;
    BOOL _inheritsPipelineState;
    id<MTLBuffer> _argumentStorage;
    id<MTLBuffer> _drawOrDispatchIDBuffer;
    unsigned short _maxCommands;
    unsigned char _maxVertexBindings;
    unsigned char _maxFragmentBindings;
    unsigned char _maxKernelBindings;
    unsigned char _maxThreadgroupBindings;
    unsigned char _maxObjectBindings;
    unsigned char _maxMeshBindings;
    BOOL _mayContainDrawMeshes;
    unsigned short _commandByteStride;
    unsigned long long _originalResourceOptions;
}

@property (readonly, nonatomic) id<MTLBuffer> internalICBBuffer;
@property (readonly, nonatomic) id<MTLBuffer> internalDrawOrDispatchIDBuffer;
@property (readonly, nonatomic) unsigned long long maxCommands;
@property (readonly, nonatomic) unsigned long long maxVertexBindings;
@property (readonly, nonatomic) unsigned long long maxFragmentBindings;
@property (readonly, nonatomic) unsigned long long maxKernelBindings;
@property (readonly, nonatomic) unsigned long long maxObjectBindings;
@property (readonly, nonatomic) unsigned long long maxMeshBindings;
@property (readonly, nonatomic) BOOL mayContainDrawMeshes;
@property (readonly, nonatomic) unsigned long long commandByteStride;
@property (readonly, nonatomic) BOOL inheritsPipelineState;
@property (readonly, nonatomic) BOOL inheritsBuffers;
@property (retain, nonatomic) id<MTLIndirectCommandBufferSPI> baseObject;
@property (readonly, nonatomic) unsigned long long length;
@property (readonly, nonatomic) unsigned long long gpuAddress;
@property (readonly, nonatomic) unsigned long long underlyingGPUAddress;
@property int responsibleProcess;
@property (readonly) unsigned long long allocationID;
@property (readonly) unsigned long long protectionOptions;
@property (readonly) unsigned long long unfilteredResourceOptions;
@property (copy) NSString *label;
@property (readonly) id<MTLDevice> device;
@property (readonly) unsigned long long cpuCacheMode;
@property (readonly) unsigned long long storageMode;
@property (readonly) unsigned long long hazardTrackingMode;
@property (readonly) unsigned long long resourceOptions;
@property (readonly) id<MTLHeap> heap;
@property (readonly) unsigned long long heapOffset;
@property (readonly) unsigned long long allocatedSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
