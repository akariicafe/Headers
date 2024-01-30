@class NSString;

@interface _TtCs12_SwiftObject <NSObject> {
    Class isa;
    struct RefCounts<swift::RefCountBitsT<swift::RefCountIsInline>> { struct atomic<swift::RefCountBitsT<swift::RefCountIsInline>> { struct __cxx_atomic_impl<swift::RefCountBitsT<swift::RefCountIsInline>, std::__cxx_atomic_base_impl<swift::RefCountBitsT<swift::RefCountIsInline>>> { _Atomic struct RefCountBitsT<swift::RefCountIsInline> __a_value; } __a_; } refCounts; } refCounts;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;
+ (BOOL)isSubclassOfClass:(Class)a0;
+ (BOOL)allowsWeakReference;
+ (unsigned long long)retainCount;
+ (BOOL)retainWeakReference;
+ (Class)superclass;
+ (BOOL)isMemberOfClass:(Class)a0;
+ (void /* function */ *)instanceMethodForSelector:(SEL)a0;
+ (id)alloc;
+ (BOOL)instancesRespondToSelector:(SEL)a0;
+ (id)retain;
+ (id)description;
+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)autorelease;
+ (BOOL)_isDeallocating;
+ (Class)class;
+ (BOOL)conformsToProtocol:(id)a0;
+ (void /* function */ *)methodForSelector:(SEL)a0;
+ (BOOL)_tryRetain;
+ (void)release;
+ (id)debugDescription;
+ (BOOL)respondsToSelector:(SEL)a0;

- (id)self;
- (id)performSelector:(SEL)a0;
- (id)_copyDescription;
- (void)doesNotRecognizeSelector:(SEL)a0;
- (id)performSelector:(SEL)a0 withObject:(id)a1;
- (id)performSelector:(SEL)a0 withObject:(id)a1 withObject:(id)a2;
- (BOOL)isNSDictionary__;
- (BOOL)isNSCFConstantString__;
- (BOOL)isNSObject__;
- (BOOL)isNSDate__;
- (BOOL)allowsWeakReference;
- (BOOL)isKindOfClass:(Class)a0;
- (BOOL)isNSString__;
- (BOOL)isNSTimeZone__;
- (unsigned long long)retainCount;
- (struct _NSZone { } *)zone;
- (BOOL)retainWeakReference;
- (BOOL)isMemberOfClass:(Class)a0;
- (BOOL)isNSValue__;
- (id)retain;
- (id)autorelease;
- (unsigned long long)_cfTypeID;
- (BOOL)isProxy;
- (BOOL)isNSOrderedSet__;
- (BOOL)_isDeallocating;
- (BOOL)isEqual:(id)a0;
- (BOOL)isNSArray__;
- (Class)class;
- (BOOL)conformsToProtocol:(id)a0;
- (BOOL)isNSNumber__;
- (BOOL)isNSData__;
- (void)dealloc;
- (void /* function */ *)methodForSelector:(SEL)a0;
- (void)_setWeaklyReferenced;
- (void)_noteAssociatedObjects;
- (BOOL)_tryRetain;
- (BOOL)isNSSet__;
- (oneway void)release;
- (BOOL)respondsToSelector:(SEL)a0;

@end
