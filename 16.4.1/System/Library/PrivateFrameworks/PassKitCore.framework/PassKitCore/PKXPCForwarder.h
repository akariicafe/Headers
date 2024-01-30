@interface PKXPCForwarder : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    _Atomic BOOL _invalidated;
    id _target;
    Class _targetClass;
}

- (id)forwardingTargetForSelector:(SEL)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (id)init;
- (void).cxx_destruct;
- (void)forwardInvocation:(id)a0;

@end
