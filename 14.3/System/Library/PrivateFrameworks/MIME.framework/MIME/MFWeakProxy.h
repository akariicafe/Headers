@class MFWeakReferenceHolder;

@interface MFWeakProxy : NSProxy {
    Class _objectClass;
    MFWeakReferenceHolder *_weakRef;
    unsigned long long _hash;
}

+ (id)weakProxyForObject:(id)a0;

- (id)self;
- (Class)class;
- (void)doesNotRecognizeSelector:(SEL)a0;
- (Class)superclass;
- (BOOL)isProxy;
- (void)forwardInvocation:(id)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (id)forwardingTargetForSelector:(SEL)a0;
- (id)initWithObject:(id)a0;
- (void)dealloc;
- (BOOL)respondsToSelector:(SEL)a0;
- (unsigned long long)hash;
- (BOOL)conformsToProtocol:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)descriptionWithLocale:(id)a0;

@end
