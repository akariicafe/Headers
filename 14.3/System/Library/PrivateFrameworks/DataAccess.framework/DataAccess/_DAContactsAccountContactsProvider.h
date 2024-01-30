@class CNContactStore;

@interface _DAContactsAccountContactsProvider : DAContactsAccountProvider

@property (readonly, nonatomic) CNContactStore *contactStore;

- (void).cxx_destruct;
- (id)fetchedAccountWithExternalIdentifier:(id)a0;
- (id)accountByCreatingAccountWithExternalIdentifier:(id)a0;
- (id)accountForContainerWithIdentifier:(id)a0;
- (id)initWithContactStore:(id)a0;
- (id)allAccounts;

@end
