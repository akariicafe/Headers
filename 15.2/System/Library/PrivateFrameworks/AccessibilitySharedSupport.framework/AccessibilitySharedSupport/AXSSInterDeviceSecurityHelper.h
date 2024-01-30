@class NSArray;

@interface AXSSInterDeviceSecurityHelper : NSObject {
    struct __SecIdentity { } *_cachedAppleIDIdentity;
    NSArray *_cachedCertificateChain;
    NSArray *_cachedSecurityIdentity;
}

- (void).cxx_destruct;
- (id)_certificateChain;
- (id)init;
- (void)dealloc;
- (struct __SecIdentity { } *)_appleIDIdentity;
- (void)_appleIDsDidChange;
- (id)securityIdentity;
- (void)verifyCertificate:(id)a0 completion:(id /* block */)a1;

@end
