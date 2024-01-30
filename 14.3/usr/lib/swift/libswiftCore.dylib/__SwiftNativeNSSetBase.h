@interface __SwiftNativeNSSetBase : NSObject {
    struct RefCounts<swift::RefCountBitsT<swift::RefCountIsInline> > { struct atomic<swift::RefCountBitsT<swift::RefCountIsInline> > { struct __cxx_atomic_impl<swift::RefCountBitsT<swift::RefCountIsInline>, std::__1::__cxx_atomic_base_impl<swift::RefCountBitsT<swift::RefCountIsInline> > > { _Atomic struct RefCountBitsT<swift::RefCountIsInline> __a_value; } __a_; } refCounts; } refCounts;
}

+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;

- (id)autorelease;
- (oneway void)release;
- (BOOL)_isDeallocating;
- (void)dealloc;
- (BOOL)_tryRetain;
- (unsigned long long)retainCount;
- (id)initWithCoder:(id)a0;
- (BOOL)allowsWeakReference;
- (id)retain;
- (BOOL)retainWeakReference;
- (void)_noteAssociatedObjects;
- (void)_setWeaklyReferenced;

@end
