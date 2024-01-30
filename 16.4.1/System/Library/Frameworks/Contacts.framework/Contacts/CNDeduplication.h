@interface CNDeduplication : NSObject

+ (id)os_log;

- (void)addContactsForIds:(id)a0 toGroup:(id)a1 usingRequest:(id)a2 store:(id)a3;
- (id)contactsForGroup:(id)a0 store:(id)a1;
- (void)deduplicateAllContainers:(id)a0;
- (void)deduplicateContainer:(id)a0 store:(id)a1;
- (void)deduplicateKeeping:(id)a0 deleting:(id)a1 store:(id)a2;
- (id)identifierSetFromContacts:(id)a0;

@end
