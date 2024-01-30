@class MPSCommandBufferImageCache;
@protocol MTLDevice, MTLBuffer;

@interface MPSMatrix : NSObject {
    void *_device;
    struct MPSAutoBuffer { struct atomic<void *> { struct __cxx_atomic_impl<void *, std::__cxx_atomic_base_impl<void *>> { _Atomic void *__a_value; } __a_; } _buffer; unsigned long long _requestedSize; id<MTLDevice> _device; MPSCommandBufferImageCache *_cache; struct { unsigned long long size; unsigned long long align; } _resourceSize; } _buffer;
}

@property (readonly, retain, nonatomic) id<MTLDevice> device;
@property (readonly, nonatomic) unsigned long long rows;
@property (readonly, nonatomic) unsigned long long columns;
@property (readonly, nonatomic) unsigned long long matrices;
@property (readonly, nonatomic) unsigned int dataType;
@property (readonly, nonatomic) unsigned long long rowBytes;
@property (readonly, nonatomic) unsigned long long matrixBytes;
@property (readonly, nonatomic) unsigned long long offset;
@property (readonly, nonatomic) id<MTLBuffer> data;

- (unsigned long long)resourceSize;
- (id)initWithBuffer:(id)a0 descriptor:(id)a1;
- (id)ndArrayWithCommandBuffer:(id)a0 descriptor:(id)a1 aliasing:(unsigned long long)a2;
- (id)initWithDevice:(id)a0 descriptor:(id)a1;
- (void)synchronizeOnCommandBuffer:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id).cxx_construct;
- (id)debugDescription;
- (id)initPrivateWithDescriptor:(id)a0 device:(void *)a1;
- (BOOL)canAliasWithNDArrayDescriptor:(id)a0;
- (id)initWithBuffer:(id)a0 offset:(unsigned long long)a1 descriptor:(id)a2;
- (BOOL)doesAliasWithNDArray:(id)a0;

@end
