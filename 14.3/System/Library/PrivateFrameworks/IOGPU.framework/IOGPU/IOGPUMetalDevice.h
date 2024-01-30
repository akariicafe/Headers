@class IOGPUMemoryInfo, hwResourcePoolCount, MTLResourceListPool, IOGPUMetalDeviceShmemPool, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source, MTLDeviceSPI;

@interface IOGPUMetalDevice : _MTLDevice {
    struct __IOGPUDevice { } *_deviceRef;
    struct { IOGPUMetalDeviceShmemPool *segmentListShmemPool; IOGPUMetalDeviceShmemPool *kernelCommandShmemPool; hwResourcePoolCount **hwResourcePools; unsigned int x0; MTLResourceListPool *akResourceListPool; MTLResourceListPool *akPrivateResourceListPool; IOGPUMetalDeviceShmemPool *debugBufferShmemPool; } _storageCreateParams;
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
    unsigned int _fenceAllocatedCount;
    unsigned int _fenceMaximumCount;
    unsigned int _fenceBitmapSearchStart;
    unsigned int _fenceBitmapCount;
    unsigned long long *_fenceAllocationBitmap;
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

- (id)memoryInfo;
- (id)newIntersectionFunctionTableWithDescriptor:(id)a0;
- (id)indirectArgumentBufferDecodingData;
- (void)setIndirectArgumentBufferDecodingData:(id)a0;
- (id)initWithAcceleratorPort:(unsigned int)a0 options:(unsigned long long)a1;
- (void)kickCleanupQueue;
- (void).cxx_destruct;
- (unsigned long long)maxBufferLength;
- (void)dealloc;
- (void)setComputePipelineStateCommandShmemSize:(unsigned int)a0;
- (unsigned int)initialSegmentListShmemSize;
- (id)akPrivateResourceListPool;
- (id)newEvent;
- (unsigned int)initialDebugBufferShmemSize;
- (struct __IOGPUDevice { } *)deviceRef;
- (void)setSegmentListShmemSize:(unsigned int)a0;
- (id)newIndirectArgumentBufferLayoutWithStructType:(id)a0;
- (BOOL)supportsVertexAmplificationCount:(unsigned long long)a0;
- (void)_purgeDevice;
- (void)setHwResourcePool:(id *)a0 count:(int)a1;
- (id)newAccelerationStructureWithSize:(unsigned long long)a0;
- (void)_removeResource:(id)a0;
- (id)newIndirectCommandBufferWithDescriptor:(id)a0 maxCommandCount:(unsigned long long)a1 options:(unsigned long long)a2;
- (void)updateResourcePoolPurgeability;
- (id)akResourceListPool;
- (id)newFence;
- (void)_addResource:(id)a0;
- (id)initWithAcceleratorPort:(unsigned int)a0;
- (id)allocBufferSubDataWithLength:(unsigned long long)a0 options:(unsigned long long)a1 alignment:(unsigned long long)a2 heapIndex:(short *)a3 bufferIndex:(short *)a4 bufferOffset:(unsigned long long *)a5;
- (void)_setDeviceWrapper:(id)a0;
- (id)_deviceWrapper;
- (BOOL)setResourcesPurgeableState:(id *)a0 newState:(unsigned long long)a1 oldState:(unsigned long long *)a2 count:(int)a3;
- (id)newIndirectArgumentEncoderWithLayout:(id)a0;
- (void)deallocBufferSubData:(id)a0 heapIndex:(short)a1 bufferIndex:(short)a2 bufferOffset:(unsigned long long)a3 length:(unsigned long long)a4;
- (unsigned int)initialKernelCommandShmemSize;
- (id)newCommandQueueWithDescriptor:(id)a0;
- (id)newArgumentEncoderWithLayout:(id)a0;

@end
