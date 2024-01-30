@class NSString;

@interface WKObject : NSProxy <WKObject> {
    BOOL _hasInitializedTarget;
    struct RetainPtr<NSObject> { void *m_ptr; } _target;
}

@property (readonly) struct Object { void /* function */ **x0; id x1; } *_apiObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isNSDictionary__;
- (BOOL)isNSCFConstantString__;
- (BOOL)isNSObject__;
- (BOOL)isNSDate__;
- (BOOL)isKindOfClass:(Class)a0;
- (BOOL)isNSString__;
- (id)forwardingTargetForSelector:(SEL)a0;
- (BOOL)isNSTimeZone__;
- (id)methodSignatureForSelector:(SEL)a0;
- (BOOL)isMemberOfClass:(Class)a0;
- (id)_web_createTarget;
- (BOOL)isNSValue__;
- (BOOL)isNSOrderedSet__;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (Class)classForCoder;
- (void)forwardInvocation:(id)a0;
- (BOOL)isNSArray__;
- (BOOL)conformsToProtocol:(id)a0;
- (BOOL)isNSNumber__;
- (BOOL)isNSData__;
- (void)dealloc;
- (BOOL)isNSSet__;
- (id).cxx_construct;
- (BOOL)respondsToSelector:(SEL)a0;
- (Class)classForKeyedArchiver;

@end
