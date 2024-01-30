@class NSString;
@protocol MTLDevice, MTLHeap, MTLBuffer, MTLAccelerationStructure;

@interface MTLGPUDebugAccelerationStructure : MTLToolsAccelerationStructure <MTLGPUDebugResource> {
    id<MTLBuffer> _debugBuf;
}

@property (retain, nonatomic) id<MTLAccelerationStructure> baseObject;
@property (readonly, nonatomic) unsigned long long accelerationStructureHandle;
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

- (struct MTLResourceID { unsigned long long x0; })gpuResourceID;
- (void)dealloc;
- (void)_setupIdentifier;
- (unsigned long long)handleForOffset:(unsigned long long)a0;
- (id)initWithAccelerationStructure:(id)a0 device:(id)a1;
- (id)initWithAccelerationStructure:(id)a0 heap:(id)a1;
- (void)useWithComputeEncoder:(id)a0 usage:(unsigned long long)a1;
- (void)useWithRenderEncoder:(id)a0 usage:(unsigned long long)a1 stages:(struct optional<unsigned long> { union { char x0; unsigned long long x1; } x0; BOOL x1; })a2;

@end
