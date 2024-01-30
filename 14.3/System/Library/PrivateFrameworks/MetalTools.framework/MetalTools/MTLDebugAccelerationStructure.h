@class MTLDebugBuffer;

@interface MTLDebugAccelerationStructure : MTLToolsAccelerationStructure <MTLDebugResourcePurgeable> {
    struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int __a_value; } __a_; } _purgeableStateToken;
    BOOL _purgeableStateHasBeenSet;
    MTLDebugBuffer *_debugBuffer;
}

- (void)dealloc;
- (id)initWithBaseObject:(id)a0 parent:(id)a1;
- (unsigned long long)setPurgeableState:(unsigned long long)a0;
- (id)buffer;
- (void)lockPurgeableState;
- (void)unlockPurgeableState;
- (BOOL)purgeableStateValidForRendering;

@end
