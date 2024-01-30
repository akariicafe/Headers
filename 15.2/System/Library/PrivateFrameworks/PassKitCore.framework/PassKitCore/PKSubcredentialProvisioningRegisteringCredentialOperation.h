@class PKAppletSubcredential;

@interface PKSubcredentialProvisioningRegisteringCredentialOperation : PKSubcredentialProvisioningOperation {
    PKAppletSubcredential *_subcredential;
}

- (void)performOperation;
- (BOOL)credentialShouldHaveAttestation;
- (BOOL)canBeRestarted;
- (void).cxx_destruct;
- (id)initWithConfiguration:(id)a0 context:(id)a1 delegate:(id)a2;

@end
