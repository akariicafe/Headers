@interface DAContactsAccountProvider : NSObject

+ (id)providerWithContactStore:(id)a0;
+ (id)providerWithAddressBook:(void *)a0;

- (id)allAccounts;
- (id)accountForContainerWithIdentifier:(id)a0;
- (id)accountWithExternalIdentifier:(id)a0 createIfNecessary:(BOOL)a1;

@end
