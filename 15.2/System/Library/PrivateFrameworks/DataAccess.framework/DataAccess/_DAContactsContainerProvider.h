@class CNContactStore;

@interface _DAContactsContainerProvider : DAContainerProvider

@property (readonly, nonatomic) CNContactStore *contactStore;

- (id)createNewContainerWithType:(int)a0 name:(id)a1 externalIdentifier:(id)a2 constraintsPath:(id)a3 syncData:(id)a4 contentReadonly:(BOOL)a5 propertiesReadonly:(BOOL)a6 forAccount:(id)a7;
- (id)containerWithExternalIdentifier:(id)a0 forAccountWithExternalIdentifier:(id)a1;
- (void)setDefaultContainer:(id)a0 withLocalDBHelper:(id)a1 onlyIfNotSet:(BOOL)a2;
- (BOOL)setLastSyncDateForContainer:(id)a0;
- (void).cxx_destruct;
- (id)initWithContactStore:(id)a0;
- (id)allContainers;
- (id)allContainersForAccountWithExternalIdentifier:(id)a0;

@end
