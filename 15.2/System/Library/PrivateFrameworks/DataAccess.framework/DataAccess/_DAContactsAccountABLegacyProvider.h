@interface _DAContactsAccountABLegacyProvider : DAContactsAccountProvider

@property (readonly, nonatomic) void *addressBook;

- (id)initWithAddressBook:(void *)a0;
- (void)dealloc;
- (id)allAccounts;
- (id)fetchedAccountWithExternalIdentifier:(id)a0;
- (id)accountByCreatingAccountWithExternalIdentifier:(id)a0;
- (id)accountForContainerWithIdentifier:(id)a0;

@end
