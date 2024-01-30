@class NSString, MTLAccelerationStructureDescriptor, MTLIOAccelBuffer;
@protocol MTLHeap, MTLBuffer, MTLDevice;

@interface MTLIOAccelAccelerationStructure : MTLIOAccelResource <MTLAccelerationStructureSPI> {
    MTLIOAccelBuffer<MTLBuffer> *_buffer;
    unsigned long long _bufferOffset;
}

@property (readonly, nonatomic) unsigned long long uniqueIdentifier;
@property (readonly, nonatomic) MTLIOAccelBuffer<MTLBuffer> *buffer;
@property (readonly, nonatomic) unsigned long long bufferOffset;
@property (retain, nonatomic) MTLAccelerationStructureDescriptor *descriptor;
@property (readonly, nonatomic) unsigned long long resourceIndex;
@property (readonly) struct MTLResourceID { unsigned long long x0; } gpuResourceID;
@property (readonly) unsigned long long gpuHandle;
@property (readonly, nonatomic) unsigned long long size;
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
- (void)copyPropertiesFromBuffer:(id)a0;
- (id)initWithBuffer:(id)a0 offset:(unsigned long long)a1;
- (id)initWithBuffer:(id)a0 offset:(unsigned long long)a1 resourceIndex:(unsigned long long)a2;

@end
