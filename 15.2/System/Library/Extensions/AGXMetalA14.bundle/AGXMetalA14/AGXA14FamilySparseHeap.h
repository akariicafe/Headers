@class IOGPUMetalDevice, NSString, IOGPUMetalResource, __end_cap_, IOGPUMetalBuffer, __end_;
@protocol MTLDevice, MTLBuffer;

@interface AGXA14FamilySparseHeap : _MTLHeap <MTLHeapSPI> {
    struct vector<IOGPUMetalResource *, std::allocator<IOGPUMetalResource *>> { __end_ **__begin_; __end_cap_ **x0; struct __compressed_pair<IOGPUMetalResource **, std::allocator<IOGPUMetalResource *>> { id *__value_; } x1; } _resources;
    IOGPUMetalDevice<MTLDevice> *_device;
    IOGPUMetalBuffer<MTLBuffer> *_sparse_pages_buffer;
    IOGPUMetalBuffer<MTLBuffer> *_sparse_queue_buffer;
    unsigned long long _size;
    unsigned long long sparse_page_queue_addr;
    unsigned int sparse_page_size;
}

@property (readonly) id<MTLDevice> device;
@property (readonly) unsigned long long size;
@property (readonly) unsigned long long usedSize;
@property (readonly) IOGPUMetalResource *sparsePagesResource;
@property (readonly) IOGPUMetalResource *sparseQueueResource;
@property (readonly) unsigned long long sparsePageQueueAddress;
@property (readonly) unsigned long long currentAllocatedSize;
@property (readonly) unsigned long long unfilteredResourceOptions;
@property (readonly, nonatomic) unsigned long long gpuAddress;
@property (copy) NSString *label;
@property (readonly) unsigned long long storageMode;
@property (readonly) unsigned long long cpuCacheMode;
@property (readonly) unsigned long long hazardTrackingMode;
@property (readonly) unsigned long long resourceOptions;
@property (readonly) long long type;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (unsigned long long)setPurgeableState:(unsigned long long)a0;
- (id)initWithDevice:(id)a0 descriptor:(id)a1;
- (void).cxx_destruct;
- (id)newTextureWithDescriptor:(id)a0;
- (id)newBufferWithLength:(unsigned long long)a0 options:(unsigned long long)a1;
- (void)dealloc;
- (id).cxx_construct;
- (unsigned long long)maxAvailableSizeWithAlignment:(unsigned long long)a0;
- (id)newBufferWithLength:(unsigned long long)a0 options:(unsigned long long)a1 atOffset:(unsigned long long)a2;
- (id)newTextureWithDescriptor:(id)a0 atOffset:(unsigned long long)a1;
- (void)removeTexture:(id)a0;

@end
