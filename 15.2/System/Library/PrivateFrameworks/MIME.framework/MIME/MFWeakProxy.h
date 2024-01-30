@class MFWeakReferenceHolder;

@interface MFWeakProxy : NSProxy {
    Class _objectClass;
    MFWeakReferenceHolder *_weakRef;
    unsigned long long _hash;
}

+ (id)weakProxyForObject:(id)a0;

- (id)self;
- (void)doesNotRecognizeSelector:(SEL)a0;
- (id)forwardingTargetForSelector:(SEL)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (Class)superclass;
- (id)description;
- (id)initWithObject:(id)a0;
- (BOOL)isProxy;
- (BOOL)isEqual:(id)a0;
- (id)descriptionWithLocale:(id)a0;
- (void)forwardInvocation:(id)a0;
- (Class)class;
- (BOOL)conformsToProtocol:(id)a0;
- (unsigned long long)hash;
- (void)dealloc;
- (BOOL)respondsToSelector:(SEL)a0;

@end
