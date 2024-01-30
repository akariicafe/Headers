@class MFWeakReferenceHolder;

@interface MFWeakProxy : NSProxy {
    Class _objectClass;
    MFWeakReferenceHolder *_weakRef;
    unsigned long long _hash;
}

+ (id)weakProxyForObject:(id)a0;

- (id)initWithObject:(id)a0;
- (BOOL)conformsToProtocol:(id)a0;
- (id)forwardingTargetForSelector:(SEL)a0;
- (BOOL)respondsToSelector:(SEL)a0;
- (void)dealloc;
- (Class)class;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)methodSignatureForSelector:(SEL)a0;
- (id)descriptionWithLocale:(id)a0;
- (id)description;
- (BOOL)isProxy;
- (Class)superclass;
- (void)forwardInvocation:(id)a0;
- (void)doesNotRecognizeSelector:(SEL)a0;
- (id)self;

@end
