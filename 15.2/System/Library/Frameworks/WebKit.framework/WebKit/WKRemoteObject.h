@interface WKRemoteObject : NSObject {
    struct RetainPtr<_WKRemoteObjectRegistry> { void *m_ptr; } _objectRegistry;
    struct RetainPtr<_WKRemoteObjectInterface> { void *m_ptr; } _interface;
}

- (id)_initWithObjectRegistry:(id)a0 interface:(id)a1;
- (id)methodSignatureForSelector:(SEL)a0;
- (void).cxx_destruct;
- (void)forwardInvocation:(id)a0;
- (BOOL)conformsToProtocol:(id)a0;
- (id).cxx_construct;

@end
