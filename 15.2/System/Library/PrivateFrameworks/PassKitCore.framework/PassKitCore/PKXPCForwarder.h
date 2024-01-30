@interface PKXPCForwarder : NSObject <NSCopying> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    id _target;
    Class _targetClass;
}

- (void)clearTarget;
- (id)forwardingTargetForSelector:(SEL)a0;
- (id)_initWithTarget:(id)a0 targetClass:(Class)a1;
- (id)methodSignatureForSelector:(SEL)a0;
- (id)initWithTarget:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)forwardInvocation:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
