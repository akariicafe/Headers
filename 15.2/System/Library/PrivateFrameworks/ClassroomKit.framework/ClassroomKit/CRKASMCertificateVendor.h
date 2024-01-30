@class CRKASMCredentialStore;

@interface CRKASMCertificateVendor : NSObject

@property (readonly, nonatomic) CRKASMCredentialStore *credentialStore;

- (id)manifest;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)certificatesForUserIdentifiers:(id)a0;
- (id)certificatesForUserIdentifier:(id)a0;
- (id)initWithCredentialStore:(id)a0;
- (void)forgetPersistentIDs:(id)a0;

@end
