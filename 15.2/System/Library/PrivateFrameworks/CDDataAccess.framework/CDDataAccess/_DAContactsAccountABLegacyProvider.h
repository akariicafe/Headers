@interface _DAContactsAccountABLegacyProvider : DAContactsAccountProvider

@property (readonly, nonatomic) void *addressBook;

- (id)initWithAddressBook:(void *)a0;
- (void)dealloc;
- (id)allAccounts;
- (id)accountForContainerWithIdentifier:(id)a0;
- (id)accountWithExternalIdentifier:(id)a0 createIfNecessary:(BOOL)a1;

@end
