@class NSString, MTLAccelerationStructureDescriptor, MTLToolsBuffer;
@protocol MTLHeap, MTLBuffer, MTLDevice;

@interface MTLToolsAccelerationStructure : MTLToolsResource <MTLAccelerationStructureSPI> {
    MTLToolsBuffer *_toolsBuffer;
}

@property (readonly, nonatomic) unsigned long long uniqueIdentifier;
@property (readonly, nonatomic) id<MTLBuffer> buffer;
@property (readonly, nonatomic) unsigned long long bufferOffset;
@property (retain, nonatomic) MTLAccelerationStructureDescriptor *descriptor;
@property (readonly, nonatomic) unsigned long long resourceIndex;
@property (readonly) unsigned long long gpuHandle;
@property (readonly, nonatomic) unsigned long long size;
@property (readonly) struct MTLResourceID { unsigned long long x0; } gpuResourceID;
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

- (void)dealloc;
- (id)initWithBaseObject:(id)a0 parent:(id)a1;
- (id)initWithBaseObject:(id)a0 parent:(id)a1 heap:(id)a2;

@end
