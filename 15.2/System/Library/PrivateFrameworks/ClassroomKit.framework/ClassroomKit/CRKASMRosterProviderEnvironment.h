@class CRKASMRosterProviderConfiguration, CRKASMCertificateVendor, CRKASMUserFactory;

@interface CRKASMRosterProviderEnvironment : NSObject

@property (readonly, nonatomic) CRKASMRosterProviderConfiguration *configuration;
@property (readonly, nonatomic) CRKASMCertificateVendor *certificateVendor;
@property (readonly, nonatomic) CRKASMUserFactory *userFactory;

- (id)initWithConfiguration:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithConfiguration:(id)a0 certificateVendor:(id)a1 userFactory:(id)a2;
- (id)identityVendorForUserIdentifier:(id)a0;

@end
