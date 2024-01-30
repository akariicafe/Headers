@class CNContactStore, CNContactFormatter, CNContactStoreFilter, CNContactViewCache, CNUIContactsEnvironment;

@interface CNContactListActionConfiguration : NSObject

@property (retain, nonatomic) CNContactStore *contactStore;
@property (retain, nonatomic) CNUIContactsEnvironment *environment;
@property (retain, nonatomic) CNContactViewCache *contactViewCache;
@property (retain, nonatomic) CNContactFormatter *contactFormatter;
@property (retain, nonatomic) CNContactStoreFilter *contactStoreFilter;

+ (id)log;

- (id)containerForContainerIdentifier:(id)a0;
- (void).cxx_destruct;

@end
