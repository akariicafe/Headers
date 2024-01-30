@class NSString;
@protocol MTLDevice;

@interface MTLToolsHeap : MTLToolsObject <MTLHeapSPI>

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

- (unsigned long long)setPurgeableState:(unsigned long long)a0;
- (id)newTextureWithDescriptor:(id)a0;
- (id)newBufferWithLength:(unsigned long long)a0 options:(unsigned long long)a1;
- (id)formattedDescription:(unsigned long long)a0;
- (unsigned long long)maxAvailableSizeWithAlignment:(unsigned long long)a0;
- (id)newBufferWithLength:(unsigned long long)a0 options:(unsigned long long)a1 offset:(unsigned long long)a2;
- (id)newTextureWithDescriptor:(id)a0 offset:(unsigned long long)a1;
- (id)_newToolsBuffer:(id)a0;
- (id)_newToolsTexture:(id)a0;

@end
