@class CNContactStore;

@interface _DAContactsAccountContactsProvider : DAContactsAccountProvider

@property (readonly, nonatomic) CNContactStore *contactStore;

- (void).cxx_destruct;
- (id)initWithContactStore:(id)a0;
- (id)allAccounts;
- (id)accountForContainerWithIdentifier:(id)a0;
- (id)accountWithExternalIdentifier:(id)a0 createIfNecessary:(BOOL)a1;

@end
