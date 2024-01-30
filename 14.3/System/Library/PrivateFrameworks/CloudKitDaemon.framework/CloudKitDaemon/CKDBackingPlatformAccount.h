@interface CKDBackingPlatformAccount : CKDBackingAccount

+ (id)primaryAccountInStore:(id)a0;
+ (id)accountWithIdentifier:(id)a0 inStore:(id)a1;

- (void)updateAccountPropertiesAndSaveAccountInStore:(id)a0 completionHandler:(id /* block */)a1;
- (id)ckAccount;
- (id)_initWithParentAccount:(id)a0 inStore:(id)a1;

@end
