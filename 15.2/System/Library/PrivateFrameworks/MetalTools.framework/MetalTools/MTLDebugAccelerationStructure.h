@class MTLDebugBuffer;

@interface MTLDebugAccelerationStructure : MTLToolsAccelerationStructure <MTLDebugResourcePurgeable> {
    struct atomic<int> { struct __cxx_atomic_impl<int, std::__cxx_atomic_base_impl<int>> { _Atomic int __a_value; } __a_; } _purgeableStateToken;
    BOOL _purgeableStateHasBeenSet;
    MTLDebugBuffer *_debugBuffer;
}

- (unsigned long long)setPurgeableState:(unsigned long long)a0;
- (id)buffer;
- (void)dealloc;
- (id)initWithBaseObject:(id)a0 parent:(id)a1;
- (void)lockPurgeableState;
- (void)unlockPurgeableState;
- (BOOL)purgeableStateValidForRendering;

@end
