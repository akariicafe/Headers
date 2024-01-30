@interface __SwiftNativeNSSetBase : NSObject {
    struct RefCounts<swift::RefCountBitsT<swift::RefCountIsInline>> { struct atomic<swift::RefCountBitsT<swift::RefCountIsInline>> { struct __cxx_atomic_impl<swift::RefCountBitsT<swift::RefCountIsInline>, std::__cxx_atomic_base_impl<swift::RefCountBitsT<swift::RefCountIsInline>>> { _Atomic struct RefCountBitsT<swift::RefCountIsInline> __a_value; } __a_; } refCounts; } refCounts;
}

+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;

- (id)retain;
- (BOOL)allowsWeakReference;
- (oneway void)release;
- (id)initWithCoder:(id)a0;
- (BOOL)_tryRetain;
- (void)dealloc;
- (BOOL)_isDeallocating;
- (BOOL)retainWeakReference;
- (id)autorelease;
- (unsigned long long)retainCount;
- (void)_noteAssociatedObjects;
- (void)_setWeaklyReferenced;

@end
