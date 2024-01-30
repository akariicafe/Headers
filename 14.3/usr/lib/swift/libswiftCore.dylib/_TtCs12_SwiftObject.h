@class NSString;

@interface _TtCs12_SwiftObject <NSObject> {
    Class isa;
    struct RefCounts<swift::RefCountBitsT<swift::RefCountIsInline> > { struct atomic<swift::RefCountBitsT<swift::RefCountIsInline> > { struct __cxx_atomic_impl<swift::RefCountBitsT<swift::RefCountIsInline>, std::__1::__cxx_atomic_base_impl<swift::RefCountBitsT<swift::RefCountIsInline> > > { _Atomic struct RefCountBitsT<swift::RefCountIsInline> __a_value; } __a_; } refCounts; } refCounts;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (void)initialize;
+ (Class)class;
+ (Class)superclass;
+ (id)alloc;
+ (BOOL)isSubclassOfClass:(Class)a0;
+ (BOOL)instancesRespondToSelector:(SEL)a0;
+ (id)autorelease;
+ (void)release;
+ (BOOL)isMemberOfClass:(Class)a0;
+ (BOOL)_isDeallocating;
+ (BOOL)_tryRetain;
+ (BOOL)respondsToSelector:(SEL)a0;
+ (unsigned long long)retainCount;
+ (void /* function */ *)methodForSelector:(SEL)a0;
+ (BOOL)conformsToProtocol:(id)a0;
+ (void /* function */ *)instanceMethodForSelector:(SEL)a0;
+ (id)description;
+ (BOOL)allowsWeakReference;
+ (id)retain;
+ (BOOL)retainWeakReference;
+ (id)debugDescription;

- (id)self;
- (struct _NSZone { } *)zone;
- (BOOL)isNSString__;
- (BOOL)isNSDate__;
- (BOOL)isNSSet__;
- (BOOL)isNSArray__;
- (BOOL)isNSNumber__;
- (BOOL)isNSData__;
- (BOOL)isNSObject__;
- (id)performSelector:(SEL)a0;
- (Class)class;
- (BOOL)isNSValue__;
- (BOOL)isNSTimeZone__;
- (id)_copyDescription;
- (id)performSelector:(SEL)a0 withObject:(id)a1;
- (id)performSelector:(SEL)a0 withObject:(id)a1 withObject:(id)a2;
- (void)doesNotRecognizeSelector:(SEL)a0;
- (BOOL)isNSOrderedSet__;
- (BOOL)isProxy;
- (unsigned long long)_cfTypeID;
- (BOOL)isKindOfClass:(Class)a0;
- (id)autorelease;
- (oneway void)release;
- (BOOL)isMemberOfClass:(Class)a0;
- (BOOL)_isDeallocating;
- (void)dealloc;
- (BOOL)isNSDictionary__;
- (BOOL)_tryRetain;
- (BOOL)respondsToSelector:(SEL)a0;
- (unsigned long long)retainCount;
- (void /* function */ *)methodForSelector:(SEL)a0;
- (BOOL)conformsToProtocol:(id)a0;
- (BOOL)allowsWeakReference;
- (id)retain;
- (BOOL)isEqual:(id)a0;
- (BOOL)retainWeakReference;
- (BOOL)isNSCFConstantString__;
- (void)_noteAssociatedObjects;
- (void)_setWeaklyReferenced;

@end
