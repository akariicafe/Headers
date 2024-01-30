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
+ (id)alloc;
+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)retain;
+ (BOOL)conformsToProtocol:(id)a0;
+ (BOOL)allowsWeakReference;
+ (void)release;
+ (BOOL)_tryRetain;
+ (id)debugDescription;
+ (BOOL)respondsToSelector:(SEL)a0;
+ (Class)class;
+ (BOOL)instancesRespondToSelector:(SEL)a0;
+ (void /* function */ *)methodForSelector:(SEL)a0;
+ (BOOL)_isDeallocating;
+ (BOOL)retainWeakReference;
+ (id)description;
+ (id)autorelease;
+ (Class)superclass;
+ (BOOL)isMemberOfClass:(Class)a0;
+ (unsigned long long)retainCount;
+ (void /* function */ *)instanceMethodForSelector:(SEL)a0;
+ (BOOL)isSubclassOfClass:(Class)a0;

- (id)retain;
- (unsigned long long)_cfTypeID;
- (BOOL)conformsToProtocol:(id)a0;
- (BOOL)isNSCFConstantString__;
- (BOOL)allowsWeakReference;
- (oneway void)release;
- (BOOL)_tryRetain;
- (BOOL)isNSOrderedSet__;
- (BOOL)isNSNumber__;
- (struct _NSZone { } *)zone;
- (BOOL)isNSTimeZone__;
- (BOOL)isNSDictionary__;
- (BOOL)isNSArray__;
- (BOOL)isNSString__;
- (BOOL)isNSDate__;
- (BOOL)respondsToSelector:(SEL)a0;
- (void)dealloc;
- (Class)class;
- (BOOL)isEqual:(id)a0;
- (void /* function */ *)methodForSelector:(SEL)a0;
- (BOOL)_isDeallocating;
- (BOOL)isKindOfClass:(Class)a0;
- (BOOL)isNSSet__;
- (BOOL)retainWeakReference;
- (id)autorelease;
- (BOOL)isNSValue__;
- (BOOL)isProxy;
- (BOOL)isNSObject__;
- (BOOL)isNSData__;
- (BOOL)isMemberOfClass:(Class)a0;
- (unsigned long long)retainCount;
- (void)_noteAssociatedObjects;
- (void)_setWeaklyReferenced;
- (void)doesNotRecognizeSelector:(SEL)a0;
- (id)performSelector:(SEL)a0;
- (id)performSelector:(SEL)a0 withObject:(id)a1;
- (id)performSelector:(SEL)a0 withObject:(id)a1 withObject:(id)a2;
- (id)self;
- (id)_copyDescription;

@end
