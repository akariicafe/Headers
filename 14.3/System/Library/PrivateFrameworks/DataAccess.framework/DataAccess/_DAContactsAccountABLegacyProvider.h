@interface _DAContactsAccountABLegacyProvider : DAContactsAccountProvider

@property (readonly, nonatomic) void *addressBook;

- (void)dealloc;
- (id)fetchedAccountWithExternalIdentifier:(id)a0;
- (id)accountByCreatingAccountWithExternalIdentifier:(id)a0;
- (id)accountForContainerWithIdentifier:(id)a0;
- (id)allAccounts;
- (id)initWithAddressBook:(void *)a0;

@end
