@class MPSCommandBufferImageCache;
@protocol MTLDevice, MTLBuffer;

@interface MPSVector : NSObject {
    void *_device;
    struct MPSAutoBuffer { struct atomic<void *> { struct __cxx_atomic_impl<void *, std::__cxx_atomic_base_impl<void *>> { _Atomic void *__a_value; } __a_; } _buffer; unsigned long long _requestedSize; id<MTLDevice> _device; MPSCommandBufferImageCache *_cache; struct { unsigned long long size; unsigned long long align; } _resourceSize; } _buffer;
}

@property (readonly, retain, nonatomic) id<MTLDevice> device;
@property (readonly, nonatomic) unsigned long long length;
@property (readonly, nonatomic) unsigned long long vectors;
@property (readonly, nonatomic) unsigned int dataType;
@property (readonly, nonatomic) unsigned long long vectorBytes;
@property (readonly, nonatomic) unsigned long long offset;
@property (readonly, nonatomic) id<MTLBuffer> data;

- (id).cxx_construct;
- (id)initWithDevice:(id)a0 descriptor:(id)a1;
- (unsigned long long)resourceSize;
- (id)init;
- (void)synchronizeOnCommandBuffer:(id)a0;
- (void).cxx_destruct;
- (id)initWithBuffer:(id)a0 descriptor:(id)a1;
- (id)initWithBuffer:(id)a0 offset:(unsigned long long)a1 descriptor:(id)a2;
- (id)initWithBuffer:(id)a0 length:(unsigned long long)a1 dataType:(unsigned int)a2;
- (id)initPrivateWithDescriptor:(id)a0 device:(void *)a1;

@end
