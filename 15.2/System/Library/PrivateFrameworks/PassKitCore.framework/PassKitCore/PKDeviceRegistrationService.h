@class PKXPCService;

@interface PKDeviceRegistrationService : NSObject {
    PKXPCService *_remoteService;
    BOOL _isRegistering;
}

+ (id)sharedInstance;

- (id)_remoteObjectProxyWithFailureHandler:(id /* block */)a0;
- (void)performDeviceRegistrationWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (id)_remoteObjectProxyWithSemaphore:(id)a0;
- (id)init;
- (id)_remoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (void)performDeviceRegistrationForReason:(id)a0 brokerURL:(id)a1 actionType:(long long)a2 completion:(id /* block */)a3;
- (void)dealloc;
- (id)_remoteObjectProxy;

@end
