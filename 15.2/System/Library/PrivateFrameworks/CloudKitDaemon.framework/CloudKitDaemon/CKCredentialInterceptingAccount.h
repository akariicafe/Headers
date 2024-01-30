@class CKDBackingFakeAccount;

@interface CKCredentialInterceptingAccount : ACAccount

@property (weak, nonatomic) CKDBackingFakeAccount *backingFakeAccount;

- (BOOL)aa_updateTokensWithProvisioningResponse:(id)a0;
- (void).cxx_destruct;

@end
