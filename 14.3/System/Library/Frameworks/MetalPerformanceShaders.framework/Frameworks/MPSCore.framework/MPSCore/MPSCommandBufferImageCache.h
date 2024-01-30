@protocol MTLCommandBuffer, MPSHeapProvider;

@interface MPSCommandBufferImageCache : NSObject {
    struct MPSDevice { void /* function */ **x0; struct MPSDevice *x1; id x2; struct MPSDeviceFreeList *x3; struct atomic<MTLLibraryNode *> { struct __cxx_atomic_impl<MTLLibraryNode *, std::__1::__cxx_atomic_base_impl<MTLLibraryNode *> > { _Atomic struct MTLLibraryNode *x0; } x0; } x4; struct atomic<void *> { struct __cxx_atomic_impl<void *, std::__1::__cxx_atomic_base_impl<void *> > { _Atomic void *x0; } x0; } x5[2][2][2]; struct MPSPixelCapabilities { unsigned char x0 : 1; unsigned char x1 : 1; unsigned char x2 : 1; unsigned char x3 : 1; unsigned char x4 : 1; unsigned char x5 : 2; unsigned char x6 : 1; unsigned char x7 : 8; } x6[590]; struct atomic<void *> { struct __cxx_atomic_impl<void *, std::__1::__cxx_atomic_base_impl<void *> > { _Atomic void *x0; } x0; } x7; unsigned int x8; int x9; unsigned int x10; struct MPSGPUInfo { unsigned char x0 : 8; unsigned char x1 : 8; unsigned char x2 : 8; unsigned short x3 : 16; unsigned char x4 : 4; unsigned short x5 : 10; unsigned short x6 : 10; } x11; struct MPSGPUInfoPerfStats { unsigned short x0; unsigned short x1; unsigned short x2; unsigned short x3; unsigned short x4; unsigned short x5; } x12; struct atomic<MPSLibrary *> { struct __cxx_atomic_impl<MPSLibrary *, std::__1::__cxx_atomic_base_impl<MPSLibrary *> > { _Atomic struct MPSLibrary *x0; } x0; } x13[123]; } *_device;
    long long _debugMode;
    struct HeapNode *_freeList[65];
    struct CacheFrame { struct CacheFrame *x0; struct ResourceNode *x1; struct HeapNodeBlock *x2; } *_frameList;
    struct ResourceNode { struct ResourceNode *x0; id x1; } *_retainedResources;
    struct MPSAutoCache { id x0; id x1; struct CacheFrame *x2; } *_userCacheFrame;
    unsigned long long _minimumBin;
    BOOL _needsRetain;
    unsigned long long _totalAllocationBytes;
    unsigned long long _cacheDelay;
    struct atomic<long> { struct __cxx_atomic_impl<long, std::__1::__cxx_atomic_base_impl<long> > { _Atomic long long __a_value; } __a_; } _commandBufferCount;
    BOOL _isMPSCommandBuffer;
}

@property (readonly, nonatomic) id<MTLCommandBuffer> commandBuffer;
@property (nonatomic) unsigned long long batchSizeHint;
@property (retain, nonatomic) id<MPSHeapProvider> heapProvider;

- (id)initWithCommandBuffer:(id)a0;
- (void)dealloc;
- (void)releaseHeapBlock:(id)a0 heapProvider:(id)a1;
- (id)debugDescription;
- (void)addHandlerToCommandBuffer:(id)a0;
- (id)newHeapBlock:(unsigned long long)a0;

@end
