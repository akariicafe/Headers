@class NSMutableArray, MTLDebugResource, MTLDebugDevice;

@interface MTLDebugBuffer : MTLToolsBuffer <MTLDebugResourcePurgeable> {
    unsigned long long _length;
    MTLDebugDevice *_debugDevice;
    NSMutableArray *_debugMarkers;
    struct atomic<int> { struct __cxx_atomic_impl<int, std::__cxx_atomic_base_impl<int>> { _Atomic int __a_value; } __a_; } _purgeableStateToken;
    BOOL _purgeableStateHasBeenSet;
}

@property (readonly, nonatomic) MTLDebugResource *common;
@property (readonly, nonatomic) const void *pointer;
@property (nonatomic) BOOL isContentExposedToCPU;

- (void *)contents;
- (unsigned long long)gpuAddress;
- (BOOL)doesAliasAnyResources:(const id *)a0 count:(unsigned long long)a1;
- (BOOL)doesAliasResource:(id)a0;
- (unsigned long long)setPurgeableState:(unsigned long long)a0;
- (BOOL)doesAliasAllResources:(const id *)a0 count:(unsigned long long)a1;
- (unsigned long long)length;
- (void)makeAliasable;
- (unsigned long long)resourceIndex;
- (id)newLinearTextureWithDescriptor:(id)a0 offset:(unsigned long long)a1 bytesPerRow:(unsigned long long)a2 bytesPerImage:(unsigned long long)a3;
- (id)description;
- (void)didModifyRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)removeAllDebugMarkers;
- (id)newTextureWithDescriptor:(id)a0 offset:(unsigned long long)a1 bytesPerRow:(unsigned long long)a2;
- (void)addDebugMarker:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)dealloc;
- (void)setParentGPUAddress:(unsigned long long)a0;
- (void)setParentGPUSize:(unsigned long long)a0;
- (unsigned long long)parentGPUAddress;
- (unsigned long long)parentGPUSize;
- (id)initWithBuffer:(id)a0 device:(id)a1 options:(unsigned long long)a2;
- (void)lockPurgeableState;
- (void)unlockPurgeableState;
- (BOOL)purgeableStateValidForRendering;
- (id)initWithBuffer:(id)a0 heap:(id)a1 device:(id)a2 options:(unsigned long long)a3;
- (id)initWithBuffer:(id)a0 device:(id)a1 bytes:(const void *)a2 options:(unsigned long long)a3;
- (id)copyDebugMarkers;

@end
