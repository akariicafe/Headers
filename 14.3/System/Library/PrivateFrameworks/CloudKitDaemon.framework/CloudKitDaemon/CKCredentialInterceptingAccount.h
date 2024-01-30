@class CKDBackingFakeAccount;

@interface CKCredentialInterceptingAccount : ACAccount

@property (weak, nonatomic) CKDBackingFakeAccount *backingFakeAccount;

- (void).cxx_destruct;
- (BOOL)aa_updateTokensWithProvisioningResponse:(id)a0;

@end
