@class NSString;
@protocol MTLDevice;

@interface AGXA14FamilyHeap : IOGPUMetalHeap <MTLHeapSPI>

@property (readonly) unsigned long long unfilteredResourceOptions;
@property (readonly, nonatomic) unsigned long long gpuAddress;
@property (copy) NSString *label;
@property (readonly) id<MTLDevice> device;
@property (readonly) unsigned long long storageMode;
@property (readonly) unsigned long long cpuCacheMode;
@property (readonly) unsigned long long hazardTrackingMode;
@property (readonly) unsigned long long resourceOptions;
@property (readonly) unsigned long long size;
@property (readonly) unsigned long long usedSize;
@property (readonly) unsigned long long currentAllocatedSize;
@property (readonly) long long type;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDevice:(id)a0 descriptor:(id)a1;
- (id)newTextureWithDescriptor:(id)a0;
- (id)newBufferWithLength:(unsigned long long)a0 options:(unsigned long long)a1;
- (id)newBufferWithLength:(unsigned long long)a0 options:(unsigned long long)a1 atOffset:(unsigned long long)a2;
- (id)newTextureWithDescriptor:(id)a0 atOffset:(unsigned long long)a1;

@end
