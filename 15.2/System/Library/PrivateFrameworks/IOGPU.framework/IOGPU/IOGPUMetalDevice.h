@class IOGPUMemoryInfo, hwResourcePoolCount, MTLResourceListPool, IOGPUMetalDeviceShmemPool, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source, MTLDeviceSPI;

@interface IOGPUMetalDevice : _MTLDevice {
    struct __IOGPUDevice { } *_deviceRef;
    struct { IOGPUMetalDeviceShmemPool *segmentListShmemPool; IOGPUMetalDeviceShmemPool *kernelCommandShmemPool; IOGPUMetalDeviceShmemPool *sidebandPool; hwResourcePoolCount **hwResourcePools; unsigned int x0; MTLResourceListPool *akResourceListPool; MTLResourceListPool *akPrivateResourceListPool; IOGPUMetalDeviceShmemPool *debugBufferShmemPool; } _storageCreateParams;
    struct IOGPUMetalCommandBufferStoragePool { struct gpuStorageQueue { struct IOGPUMetalCommandBufferStorage *x0; struct IOGPUMetalCommandBufferStorage **x1; } x0; struct os_unfair_lock_s { unsigned int x0; } x1; int x2; int x3; id x4; } *_commandBufferStoragePool;
    unsigned int _configBits;
    unsigned int _deviceBits;
    unsigned long long _textureRam;
    unsigned long long _videoRam;
    unsigned long long _sharedMemorySize;
    unsigned int _accelID;
    unsigned long long _segmentByteThreshold;
    struct IOGPUMetalSuballocator { } *_buffer_suballocator;
    NSObject<OS_dispatch_queue> *_device_dispatch_queue;
    NSObject<OS_dispatch_queue> *_device_pool_cleanup_queue;
    NSObject<OS_dispatch_source> *_device_pool_cleanup_source;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _device_pool_cleanup_lock;
    BOOL _device_pool_cleanup_scheduled;
    BOOL _device_pool_cleanup_requested;
    unsigned long long _registryID;
    id<MTLDeviceSPI> _deviceWrapper;
}

@property (readonly) id *hwResourcePools;
@property (readonly) unsigned int hwResourcePoolCount;
@property (readonly) int numCommandBuffers;
@property (readonly) unsigned int acceleratorPort;
@property (readonly) unsigned long long sharedMemorySize;
@property (readonly) unsigned long long dedicatedMemorySize;
@property (readonly) unsigned long long recommendedMaxWorkingSetSize;
@property (readonly) unsigned long long registryID;
@property (readonly) BOOL hasUnifiedMemory;
@property (readonly) BOOL supportsVertexAmplification;
@property (readonly) BOOL supportPriorityBand;
@property (readonly) unsigned long long currentAllocatedSize;
@property (readonly) IOGPUMemoryInfo *memoryInfo;

+ (void)registerDevices;
+ (void)registerService:(unsigned int)a0;

- (id)newEvent;
- (id)newIntersectionFunctionTableWithDescriptor:(id)a0;
- (void)setHwResourcePool:(id *)a0 count:(int)a1;
- (BOOL)setResourcesPurgeableState:(id *)a0 newState:(unsigned long long)a1 oldState:(unsigned long long *)a2 count:(int)a3;
- (id)_deviceWrapper;
- (id)allocBufferSubDataWithLength:(unsigned long long)a0 options:(unsigned long long)a1 alignment:(unsigned long long)a2 heapIndex:(short *)a3 bufferIndex:(short *)a4 bufferOffset:(unsigned long long *)a5 parentAddress:(unsigned long long)a6 parentLength:(unsigned long long)a7;
- (id)memoryInfo;
- (unsigned int)initialDebugBufferShmemSize;
- (id)initWithAcceleratorPort:(unsigned int)a0;
- (id)newArgumentEncoderWithLayout:(id)a0;
- (id)newAccelerationStructureWithSize:(unsigned long long)a0 resourceIndex:(unsigned long long)a1;
- (struct __IOGPUDevice { } *)deviceRef;
- (id)indirectArgumentBufferDecodingData;
- (id)initWithAcceleratorPort:(unsigned int)a0 options:(unsigned long long)a1;
- (void)setIndirectArgumentBufferDecodingData:(id)a0;
- (unsigned int)initialSidebandShmemSize;
- (id)newAccelerationStructureWithBuffer:(id)a0 offset:(unsigned long long)a1;
- (id)akPrivateResourceListPool;
- (unsigned int)initialSegmentListShmemSize;
- (id)newCommandQueueWithDescriptor:(id)a0;
- (BOOL)supportsVertexAmplificationCount:(unsigned long long)a0;
- (void)setSegmentListShmemSize:(unsigned int)a0;
- (id)akResourceListPool;
- (id)newFence;
- (void)_addResource:(id)a0;
- (void).cxx_destruct;
- (void)kickCleanupQueue;
- (id)allocBufferSubDataWithLength:(unsigned long long)a0 options:(unsigned long long)a1 alignment:(unsigned long long)a2 heapIndex:(short *)a3 bufferIndex:(short *)a4 bufferOffset:(unsigned long long *)a5;
- (id)newAccelerationStructureWithSize:(unsigned long long)a0;
- (void)_purgeDevice;
- (id)newIndirectCommandBufferWithDescriptor:(id)a0 maxCommandCount:(unsigned long long)a1 options:(unsigned long long)a2;
- (id)newIndirectArgumentEncoderWithLayout:(id)a0;
- (unsigned long long)maxBufferLength;
- (void)setComputePipelineStateCommandShmemSize:(unsigned int)a0;
- (id)newLateEvalEvent;
- (void)dealloc;
- (id)newIndirectArgumentBufferLayoutWithStructType:(id)a0;
- (void)updateResourcePoolPurgeability;
- (void)_setDeviceWrapper:(id)a0;
- (void)_removeResource:(id)a0;
- (void)deallocBufferSubData:(id)a0 heapIndex:(short)a1 bufferIndex:(short)a2 bufferOffset:(unsigned long long)a3 length:(unsigned long long)a4;
- (unsigned int)initialKernelCommandShmemSize;

@end
