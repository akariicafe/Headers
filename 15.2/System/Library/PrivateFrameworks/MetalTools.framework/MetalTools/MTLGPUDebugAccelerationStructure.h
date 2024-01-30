@class NSString;
@protocol MTLHeap, MTLAccelerationStructure, MTLDevice;

@interface MTLGPUDebugAccelerationStructure : MTLToolsAccelerationStructure <MTLGPUDebugResource> {
    unsigned long long _gpuIdentifier;
}

@property (retain, nonatomic) id<MTLAccelerationStructure> baseObject;
@property (readonly, nonatomic) unsigned long long length;
@property (readonly, nonatomic) unsigned long long gpuAddress;
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

- (unsigned long long)handleForOffset:(unsigned long long)a0;
- (void)_setupIdentifier;
- (id)initWithAccelerationStructure:(id)a0 parent:(id)a1;

@end
