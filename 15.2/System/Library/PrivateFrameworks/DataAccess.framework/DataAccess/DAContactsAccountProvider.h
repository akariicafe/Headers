@interface DAContactsAccountProvider : NSObject

+ (id)providerWithContactStore:(id)a0;
+ (id)providerWithAddressBook:(void *)a0;

- (id)allAccounts;
- (id)fetchedAccountWithExternalIdentifier:(id)a0;
- (id)accountByCreatingAccountWithExternalIdentifier:(id)a0;
- (id)accountForContainerWithIdentifier:(id)a0;

@end
