@class PKAppletSubcredential;

@interface PKSubcredentialProvisioningRegisteringCredentialOperation : PKSubcredentialProvisioningOperation {
    PKAppletSubcredential *_subcredential;
}

- (void).cxx_destruct;
- (void)performOperation;
- (id)initWithConfiguration:(id)a0 context:(id)a1 delegate:(id)a2;
- (BOOL)credentialShouldHaveAttestation;
- (BOOL)canBeRestarted;

@end
