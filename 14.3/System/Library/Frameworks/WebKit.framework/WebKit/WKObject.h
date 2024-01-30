@class NSString, NSObject;

@interface WKObject : NSProxy <WKObject> {
    BOOL _hasInitializedTarget;
    NSObject *_target;
}

@property (readonly) struct Object { void /* function */ **x0; id x1; } *_apiObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isNSString__;
- (BOOL)isNSDate__;
- (BOOL)isNSSet__;
- (BOOL)isNSArray__;
- (BOOL)isNSNumber__;
- (BOOL)isNSData__;
- (BOOL)isNSObject__;
- (BOOL)isNSValue__;
- (BOOL)isNSTimeZone__;
- (BOOL)isNSOrderedSet__;
- (void)forwardInvocation:(id)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (id)forwardingTargetForSelector:(SEL)a0;
- (BOOL)isKindOfClass:(Class)a0;
- (BOOL)isMemberOfClass:(Class)a0;
- (void)dealloc;
- (BOOL)isNSDictionary__;
- (Class)classForKeyedArchiver;
- (BOOL)respondsToSelector:(SEL)a0;
- (BOOL)conformsToProtocol:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)_web_createTarget;
- (BOOL)isNSCFConstantString__;
- (Class)classForCoder;

@end
