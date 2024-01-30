@class PKXPCService;

@interface PKTrustedDeviceEnrollmentInfoProvider : NSObject {
    PKXPCService *_remoteService;
}

- (id)_remoteObjectProxy;
- (id)_remoteObjectProxyWithFailureHandler:(id /* block */)a0;
- (id)_remoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (id)init;
- (id)_existingRemoteObjectProxy;
- (void).cxx_destruct;
- (void)trustedDeviceEnrollmentInfoWithCompletion:(id /* block */)a0;
- (void)trustedDeviceEnrollmentSignatureForDevice:(unsigned long long)a0 accountDSID:(id)a1 sessionData:(id)a2 completion:(id /* block */)a3;

@end
