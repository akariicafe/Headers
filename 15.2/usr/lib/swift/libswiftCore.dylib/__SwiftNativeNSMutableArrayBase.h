@interface __SwiftNativeNSMutableArrayBase : NSObject {
    struct RefCounts<swift::RefCountBitsT<swift::RefCountIsInline>> { struct atomic<swift::RefCountBitsT<swift::RefCountIsInline>> { struct __cxx_atomic_impl<swift::RefCountBitsT<swift::RefCountIsInline>, std::__cxx_atomic_base_impl<swift::RefCountBitsT<swift::RefCountIsInline>>> { _Atomic struct RefCountBitsT<swift::RefCountIsInline> __a_value; } __a_; } refCounts; } refCounts;
}

+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;

- (BOOL)allowsWeakReference;
- (unsigned long long)retainCount;
- (BOOL)retainWeakReference;
- (id)retain;
- (id)autorelease;
- (BOOL)_isDeallocating;
- (id)initWithCoder:(id)a0;
- (void)dealloc;
- (void)_setWeaklyReferenced;
- (void)_noteAssociatedObjects;
- (BOOL)_tryRetain;
- (oneway void)release;

@end
