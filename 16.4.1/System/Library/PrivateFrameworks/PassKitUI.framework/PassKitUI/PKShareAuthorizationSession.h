@class LAContext;

@interface PKShareAuthorizationSession : NSObject {
    LAContext *_context;
}

- (void)dealloc;
- (id)init;
- (void)invalidate;
- (void).cxx_destruct;
- (void)authorizeDeviceOwnerWithAuthHandler:(id /* block */)a0 completion:(id /* block */)a1;

@end
