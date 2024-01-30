@class PKXPCService;

@interface PKTrustedDeviceEnrollmentInfoProvider : NSObject {
    PKXPCService *_remoteService;
}

- (id)init;
- (void).cxx_destruct;
- (id)_existingRemoteObjectProxy;
- (id)_remoteObjectProxyWithFailureHandler:(id /* block */)a0;
- (void)trustedDeviceEnrollmentInfoWithCompletion:(id /* block */)a0;
- (void)trustedDeviceEnrollmentSignatureForDevice:(unsigned long long)a0 accountDSID:(id)a1 sessionData:(id)a2 completion:(id /* block */)a3;
- (id)_remoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (id)_remoteObjectProxy;

@end
