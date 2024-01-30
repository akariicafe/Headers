@interface CKDBackingPlatformAccount : CKDBackingAccount

- (id)ckAccount;
- (void)updateAccountPropertiesAndSaveAccount:(id /* block */)a0;
- (id)initWithAppleAccount:(id)a0;
- (long long)accountType;

@end
