@class MTLDebugDevice;

@interface MTLDebugHeap : MTLToolsHeap <MTLDebugResourcePurgeable> {
    struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int __a_value; } __a_; } _purgeableStateToken;
    BOOL _purgeableStateHasBeenSet;
}

@property (readonly, nonatomic) MTLDebugDevice *debugDevice;

- (id)newBufferWithLength:(unsigned long long)a0 options:(unsigned long long)a1 offset:(unsigned long long)a2;
- (id)newTextureWithDescriptor:(id)a0 offset:(unsigned long long)a1;
- (id)newTextureWithDescriptor:(id)a0;
- (id)newBufferWithLength:(unsigned long long)a0 options:(unsigned long long)a1;
- (unsigned long long)setPurgeableState:(unsigned long long)a0;
- (unsigned long long)maxAvailableSizeWithAlignment:(unsigned long long)a0;
- (void)lockPurgeableState;
- (void)unlockPurgeableState;
- (BOOL)purgeableStateValidForRendering;
- (id)initWithHeap:(id)a0 device:(id)a1;
- (void)validateHeapResourceOptions:(unsigned long long)a0 isTexture:(BOOL)a1 isIOSurface:(BOOL)a2;
- (void)validateHeapTextureUsage:(unsigned long long)a0 options:(unsigned long long)a1;
- (void)validatePixelFormatWithHeap:(unsigned long long)a0;
- (void)validateOffset:(unsigned long long)a0 withRequirements:(struct { unsigned long long x0; unsigned long long x1; })a1;

@end
