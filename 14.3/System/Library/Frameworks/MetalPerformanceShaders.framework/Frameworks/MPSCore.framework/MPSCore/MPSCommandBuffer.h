@class NSString, NSError, MPSPredicate;
@protocol MTLDevice, MTLCommandBuffer, MPSHeapProvider, MTLLogContainer, MTLCommandQueue, MTLBuffer;

@interface MPSCommandBuffer : NSObject <MTLCommandBuffer> {
    id<MTLBuffer> _currentDispatchBuffer;
    unsigned long long _offsetToCurrentFree;
    struct MPSDevice { void /* function */ **x0; struct MPSDevice *x1; id x2; struct MPSDeviceFreeList *x3; struct atomic<MTLLibraryNode *> { struct __cxx_atomic_impl<MTLLibraryNode *, std::__1::__cxx_atomic_base_impl<MTLLibraryNode *> > { _Atomic struct MTLLibraryNode *x0; } x0; } x4; struct atomic<void *> { struct __cxx_atomic_impl<void *, std::__1::__cxx_atomic_base_impl<void *> > { _Atomic void *x0; } x0; } x5[2][2][2]; struct MPSPixelCapabilities { unsigned char x0 : 1; unsigned char x1 : 1; unsigned char x2 : 1; unsigned char x3 : 1; unsigned char x4 : 1; unsigned char x5 : 2; unsigned char x6 : 1; unsigned char x7 : 8; } x6[590]; struct atomic<void *> { struct __cxx_atomic_impl<void *, std::__1::__cxx_atomic_base_impl<void *> > { _Atomic void *x0; } x0; } x7; unsigned int x8; int x9; unsigned int x10; struct MPSGPUInfo { unsigned char x0 : 8; unsigned char x1 : 8; unsigned char x2 : 8; unsigned short x3 : 16; unsigned char x4 : 4; unsigned short x5 : 10; unsigned short x6 : 10; } x11; struct MPSGPUInfoPerfStats { unsigned short x0; unsigned short x1; unsigned short x2; unsigned short x3; unsigned short x4; unsigned short x5; } x12; struct atomic<MPSLibrary *> { struct __cxx_atomic_impl<MPSLibrary *, std::__1::__cxx_atomic_base_impl<MPSLibrary *> > { _Atomic struct MPSLibrary *x0; } x0; } x13[123]; } *_mpsDevice;
}

@property (readonly, retain, nonatomic) id<MTLCommandBuffer> commandBuffer;
@property (readonly, retain, nonatomic) id<MTLCommandBuffer> rootCommandBuffer;
@property (retain, nonatomic) MPSPredicate *predicate;
@property (retain, nonatomic) id<MPSHeapProvider> heapProvider;
@property (readonly) id<MTLDevice> device;
@property (readonly) id<MTLCommandQueue> commandQueue;
@property (readonly) BOOL retainedReferences;
@property (readonly) unsigned long long errorOptions;
@property (copy) NSString *label;
@property (readonly) double kernelStartTime;
@property (readonly) double kernelEndTime;
@property (readonly) id<MTLLogContainer> logs;
@property (readonly) double GPUStartTime;
@property (readonly) double GPUEndTime;
@property (readonly) unsigned long long status;
@property (readonly) NSError *error;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)commandBufferFromCommandQueue:(id)a0;
+ (id)commandBufferWithCommandBuffer:(id)a0;

- (id)forwardingTargetForSelector:(SEL)a0;
- (id)initWithCommandBuffer:(id)a0;
- (void)dealloc;
- (BOOL)respondsToSelector:(SEL)a0;
- (void)commitAndContinue;
- (id)dispatchBufferWithOffset:(unsigned long long *)a0;
- (void)prefetchHeapForWorkloadSize:(unsigned long long)a0;
- (id)computeCommandEncoderWithDispatchType:(unsigned long long)a0;

@end
