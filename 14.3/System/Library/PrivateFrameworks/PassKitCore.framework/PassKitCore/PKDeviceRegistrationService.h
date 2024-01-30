@class PKXPCService;

@interface PKDeviceRegistrationService : NSObject {
    PKXPCService *_remoteService;
    BOOL _isRegistering;
}

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (id)_remoteObjectProxyWithFailureHandler:(id /* block */)a0;
- (void)dealloc;
- (void)performDeviceRegistrationForReason:(id)a0 actionType:(long long)a1 completion:(id /* block */)a2;
- (void)performDeviceRegistrationWithCompletion:(id /* block */)a0;
- (id)_remoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (id)_remoteObjectProxyWithSemaphore:(id)a0;
- (id)_remoteObjectProxy;

@end
