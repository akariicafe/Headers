@class IOGPUMetalDevice, NSString, IOGPUMetalResource, __end_cap_, IOGPUMetalBuffer, __end_;
@protocol MTLDevice, MTLBuffer;

@interface AGXA10FamilySparseHeap : _MTLHeap <MTLHeapSPI> {
    struct vector<IOGPUMetalResource *, std::allocator<IOGPUMetalResource *>> { __end_ **__begin_; __end_cap_ **x0; struct __compressed_pair<IOGPUMetalResource **, std::allocator<IOGPUMetalResource *>> { id *__value_; } x1; } _resources;
    IOGPUMetalDevice<MTLDevice> *_device;
    IOGPUMetalBuffer<MTLBuffer> *_sparse_pages_buffer;
    IOGPUMetalBuffer<MTLBuffer> *_sparse_queue_buffer;
    unsigned long long _size;
    unsigned long long sparse_page_queue_addr;
    unsigned int sparse_page_size;
    unsigned int sparse_page_queue_alignment_padding;
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
@property (readonly, nonatomic) unsigned long long protectionOptions;
@property (readonly, nonatomic) unsigned long long memoryPoolId;
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
- (void)dealloc;
- (id)newTextureWithDescriptor:(id)a0;
- (id).cxx_construct;
- (id)newTextureWithDescriptor:(id)a0 atOffset:(unsigned long long)a1;
- (id)newBufferWithLength:(unsigned long long)a0 options:(unsigned long long)a1 atOffset:(unsigned long long)a2;
- (unsigned long long)maxAvailableSizeWithAlignment:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)initWithDevice:(id)a0 descriptor:(id)a1;
- (id)newBufferWithLength:(unsigned long long)a0 options:(unsigned long long)a1;
- (void)removeTexture:(id)a0;

@end
