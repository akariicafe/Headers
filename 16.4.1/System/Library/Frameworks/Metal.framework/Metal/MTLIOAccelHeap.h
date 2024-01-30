@class NSString, MTLIOAccelDevice, MTLIOAccelResource;
@protocol MTLDevice;

@interface MTLIOAccelHeap : _MTLHeap {
    MTLIOAccelResource *_resource;
    MTLIOAccelDevice<MTLDevice> *_device;
    struct MTLRangeAllocator { struct MTLRangeAllocatorElement *elements; unsigned int numElements; unsigned long long capacity; unsigned long long capacityIncrement; unsigned long long defaultAlignmentMask; } _allocator;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _mutex;
    unsigned long long _size;
}

@property (copy) NSString *label;
@property (readonly) id<MTLDevice> device;
@property (readonly) unsigned long long size;
@property (readonly) unsigned long long usedSize;
@property (readonly) unsigned long long storageMode;
@property (readonly) unsigned long long cpuCacheMode;
@property (readonly) unsigned long long currentAllocatedSize;
@property (readonly) unsigned long long hazardTrackingMode;
@property (readonly) unsigned long long resourceOptions;
@property (readonly) unsigned long long unfilteredResourceOptions;
@property (readonly, nonatomic) unsigned long long protectionOptions;
@property (readonly) long long type;

- (void)deallocHeapSubResource;
- (id)newSubResourceAtOffset:(unsigned long long)a0 withLength:(unsigned long long)a1 alignment:(unsigned long long)a2 options:(unsigned long long)a3;
- (void)unpinMemoryAtOffset:(unsigned long long)a0 withLength:(unsigned long long)a1;
- (id)newAccelerationStructureWithDescriptor:(id)a0 offset:(unsigned long long)a1;
- (id)newAccelerationStructureWithSize:(unsigned long long)a0 resourceIndex:(unsigned long long)a1;
- (id)newAccelerationStructureWithSize:(unsigned long long)a0;
- (unsigned long long)gpuAddress;
- (id)newAccelerationStructureWithSize:(unsigned long long)a0 offset:(unsigned long long)a1;
- (id)newAccelerationStructureWithDescriptor:(id)a0;
- (unsigned long long)setPurgeableState:(unsigned long long)a0;
- (id)newAccelerationStructureWithSize:(unsigned long long)a0 offset:(unsigned long long)a1 resourceIndex:(unsigned long long)a2;
- (unsigned long long)maxAvailableSizeWithAlignment:(unsigned long long)a0;
- (void)dealloc;
- (id)newSubResourceWithLength:(unsigned long long)a0 alignment:(unsigned long long)a1 options:(unsigned long long)a2 offset:(unsigned long long *)a3;
- (id)initWithDevice:(id)a0 size:(unsigned long long)a1 options:(unsigned long long)a2 args:(struct IOAccelNewResourceArgs { struct IOAccelNewResourceData { unsigned int x0; unsigned int x1; unsigned short x2; unsigned short x3; unsigned short x4; unsigned short x5; unsigned long long x6; unsigned long long x7; unsigned char x8; unsigned char x9; unsigned char x10; unsigned char x11; unsigned int x12; unsigned long long x13; unsigned long long x14; unsigned long long x15; union { struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned int x4; } x0; struct { unsigned int x0; unsigned int x1; unsigned long long x2[3]; } x1; struct { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned long long x4[2]; } x2; struct { unsigned int x0; unsigned int x1; unsigned long long x2[3]; } x3; } x16; } x0; } *)a3 argsSize:(unsigned int)a4 desc:(id)a5;
- (id)initWithDevice:(id)a0 size:(unsigned long long)a1 options:(unsigned long long)a2 args:(struct IOAccelNewResourceArgs { struct IOAccelNewResourceData { unsigned int x0; unsigned int x1; unsigned short x2; unsigned short x3; unsigned short x4; unsigned short x5; unsigned long long x6; unsigned long long x7; unsigned char x8; unsigned char x9; unsigned char x10; unsigned char x11; unsigned int x12; unsigned long long x13; unsigned long long x14; unsigned long long x15; union { struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned int x4; } x0; struct { unsigned int x0; unsigned int x1; unsigned long long x2[3]; } x1; struct { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned long long x4[2]; } x2; struct { unsigned int x0; unsigned int x1; unsigned long long x2[3]; } x3; } x16; } x0; } *)a3 argsSize:(unsigned int)a4;

@end
