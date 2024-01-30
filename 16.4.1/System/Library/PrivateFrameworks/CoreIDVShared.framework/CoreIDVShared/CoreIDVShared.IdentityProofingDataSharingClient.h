@interface CoreIDVShared.IdentityProofingDataSharingClient : NSObject <CoreIDVShared.IdentityProofingDataSharing> {
    void /* unknown type, empty encoding */ serverConnection;
    void /* unknown type, empty encoding */ disconnectHandler;
    void /* unknown type, empty encoding */ remoteObjectProxy;
    void /* unknown type, empty encoding */ remoteObjectProxyError;
}

- (id)init;
- (void).cxx_destruct;
- (void)didChangeUserConsent:(long long)a0 completion:(id /* block */)a1;
- (void)fetchUserConsentWithCompletion:(id /* block */)a0;
- (void)checkUserConsentWithCompletion:(id /* block */)a0;

@end
