@class CRKASMRosterProviderConfiguration, CRKASMCertificateVendor;

@interface CRKASMUserFactory : NSObject

@property (readonly, nonatomic) CRKASMRosterProviderConfiguration *configuration;
@property (readonly, nonatomic) CRKASMCertificateVendor *certificateVendor;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)cachedUserForPerson:(id)a0;
- (id)makeUserForPerson:(id)a0;
- (id)cachedTrustedUserForPerson:(id)a0;
- (id)makeTrustedUserForPerson:(id)a0;
- (BOOL)isUser:(id)a0 suitableForPerson:(id)a1;
- (id)initWithConfiguration:(id)a0 certificateVendor:(id)a1;
- (id)userForPerson:(id)a0;
- (id)trustedUserForPerson:(id)a0;

@end
