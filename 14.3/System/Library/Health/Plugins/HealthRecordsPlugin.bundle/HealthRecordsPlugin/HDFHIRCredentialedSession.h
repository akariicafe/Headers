@class NSString, HDFHIRCredentialVendor;

@interface HDFHIRCredentialedSession : HDFHIRSession <HDFHIRCredentialVendorDelegate>

@property (readonly, nonatomic) HDFHIRCredentialVendor *credentialVendor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)credentialVendor:(id)a0 refreshCredential:(id)a1 completion:(id /* block */)a2;
- (id)initWithSpecification:(id)a0 credentialVendor:(id)a1;

@end
