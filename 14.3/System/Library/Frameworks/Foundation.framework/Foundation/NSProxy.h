@class NSString;

@interface NSProxy <NSObject> {
    Class isa;
}

@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)self;
+ (struct _NSZone { } *)zone;
+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (void)initialize;
+ (id)performSelector:(SEL)a0;
+ (Class)class;
+ (id)_copyDescription;
+ (id)performSelector:(SEL)a0 withObject:(id)a1;
+ (id)performSelector:(SEL)a0 withObject:(id)a1 withObject:(id)a2;
+ (void)doesNotRecognizeSelector:(SEL)a0;
+ (Class)superclass;
+ (id)instanceMethodSignatureForSelector:(SEL)a0;
+ (BOOL)isProxy;
+ (void)forwardInvocation:(id)a0;
+ (id)alloc;
+ (BOOL)isSubclassOfClass:(Class)a0;
+ (id)init;
+ (BOOL)instancesRespondToSelector:(SEL)a0;
+ (id)methodSignatureForSelector:(SEL)a0;
+ (id)mutableCopy;
+ (id)forwardingTargetForSelector:(SEL)a0;
+ (BOOL)isKindOfClass:(Class)a0;
+ (id)autorelease;
+ (id)copyWithZone:(struct _NSZone { } *)a0;
+ (oneway void)release;
+ (BOOL)isMemberOfClass:(Class)a0;
+ (BOOL)_isDeallocating;
+ (void)dealloc;
+ (BOOL)_tryRetain;
+ (BOOL)respondsToSelector:(SEL)a0;
+ (unsigned long long)retainCount;
+ (id)copy;
+ (void /* function */ *)methodForSelector:(SEL)a0;
+ (unsigned long long)hash;
+ (BOOL)conformsToProtocol:(id)a0;
+ (void /* function */ *)instanceMethodForSelector:(SEL)a0;
+ (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
+ (id)description;
+ (BOOL)allowsWeakReference;
+ (id)retain;
+ (BOOL)isEqual:(id)a0;
+ (BOOL)isFault;
+ (BOOL)isAncestorOfObject:(id)a0;
+ (void)finalize;
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
- (void)forwardInvocation:(id)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (id)forwardingTargetForSelector:(SEL)a0;
- (BOOL)isKindOfClass:(Class)a0;
- (id)autorelease;
- (oneway void)release;
- (BOOL)isMemberOfClass:(Class)a0;
- (BOOL)_allowsDirectEncoding;
- (BOOL)_isDeallocating;
- (void)dealloc;
- (BOOL)isNSDictionary__;
- (BOOL)_tryRetain;
- (BOOL)respondsToSelector:(SEL)a0;
- (unsigned long long)retainCount;
- (BOOL)conformsToProtocol:(id)a0;
- (BOOL)allowsWeakReference;
- (id)retain;
- (BOOL)isEqual:(id)a0;
- (BOOL)isFault;
- (void)finalize;
- (BOOL)retainWeakReference;
- (BOOL)isNSCFConstantString__;

@end
