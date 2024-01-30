@class CNContactStore, NSMutableDictionary;

@interface WBSContactStoreManager : NSObject {
    NSMutableDictionary *_temporaryContacts;
}

@property (class, readonly, nonatomic) WBSContactStoreManager *sharedContactStoreManager;

@property (readonly, nonatomic) CNContactStore *contactStore;

- (id)defaultContainerIdentifier;
- (void)requestAccessForEntityType:(long long)a0 completionHandler:(id /* block */)a1;
- (id)unifiedContactsMatchingPredicate:(id)a0 keysToFetch:(id)a1 error:(id *)a2;
- (id)init;
- (void).cxx_destruct;
- (BOOL)enumerateContactsWithFetchRequest:(id)a0 error:(id *)a1 usingBlock:(id /* block */)a2;
- (id)unifiedContactWithIdentifier:(id)a0 keysToFetch:(id)a1 error:(id *)a2;
- (id)_ios_meContactWithKeysToFetch:(id)a0 error:(id *)a1;
- (id)contactForHandle:(id)a0 error:(id *)a1;
- (id)temporaryContactForIdentity:(id)a0;

@end
