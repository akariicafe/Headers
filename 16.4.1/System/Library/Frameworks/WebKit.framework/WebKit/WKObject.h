@class NSString;

@interface WKObject : NSProxy <WKObject> {
    BOOL _hasInitializedTarget;
    struct RetainPtr<NSObject> { void *m_ptr; } _target;
}

@property (readonly) struct Object { void /* function */ **x0; void *x1; } *_apiObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (Class)classForKeyedArchiver;
- (BOOL)conformsToProtocol:(id)a0;
- (BOOL)isNSCFConstantString__;
- (id).cxx_construct;
- (id)forwardingTargetForSelector:(SEL)a0;
- (Class)classForCoder;
- (id)_web_createTarget;
- (BOOL)isNSOrderedSet__;
- (BOOL)isNSNumber__;
- (BOOL)isNSTimeZone__;
- (BOOL)isNSDictionary__;
- (BOOL)isNSArray__;
- (BOOL)isNSString__;
- (BOOL)isNSDate__;
- (BOOL)respondsToSelector:(SEL)a0;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (BOOL)isKindOfClass:(Class)a0;
- (BOOL)isNSSet__;
- (BOOL)isNSValue__;
- (BOOL)isNSObject__;
- (void).cxx_destruct;
- (BOOL)isNSData__;
- (BOOL)isMemberOfClass:(Class)a0;
- (void)forwardInvocation:(id)a0;

@end
