@protocol MTLDevice;

@interface MPSAccelerationStructureGroup : NSObject {
    struct MPSBVHGroup { void /* function */ **x0; struct atomic<unsigned int> { struct __cxx_atomic_impl<unsigned int, std::__1::__cxx_atomic_base_impl<unsigned int> > { _Atomic unsigned int x0; } x0; } x1; id x2; id x3; struct MPSBufferAllocator *x4; struct MPSBufferAllocator *x5; struct MPSBufferAllocator *x6; struct MPSBufferAllocator *x7; struct MPSBufferAllocator *x8; struct MPSBufferAllocator *x9; struct MPSBufferAllocator *x10; } *_bvhGroup;
}

@property (readonly, nonatomic) id<MTLDevice> device;

- (id)initWithDevice:(id)a0;
- (void)dealloc;
- (struct MPSBVHGroup { void /* function */ **x0; struct atomic<unsigned int> { struct __cxx_atomic_impl<unsigned int, std::__1::__cxx_atomic_base_impl<unsigned int> > { _Atomic unsigned int x0; } x0; } x1; id x2; id x3; struct MPSBufferAllocator *x4; struct MPSBufferAllocator *x5; struct MPSBufferAllocator *x6; struct MPSBufferAllocator *x7; struct MPSBufferAllocator *x8; struct MPSBufferAllocator *x9; struct MPSBufferAllocator *x10; } *)bvhGroup;
- (id)initWithDevice:(id)a0 storageMode:(unsigned long long)a1;

@end
