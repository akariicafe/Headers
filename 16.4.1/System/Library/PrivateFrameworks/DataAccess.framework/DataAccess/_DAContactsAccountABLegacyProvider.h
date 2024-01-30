@interface _DAContactsAccountABLegacyProvider : DAContactsAccountProvider

@property (readonly, nonatomic) void *addressBook;

- (void)dealloc;
- (id)initWithAddressBook:(void *)a0;
- (id)allAccounts;
- (id)accountByCreatingAccountWithExternalIdentifier:(id)a0;
- (id)accountForContainerWithIdentifier:(id)a0;
- (id)fetchedAccountWithExternalIdentifier:(id)a0;

@end
