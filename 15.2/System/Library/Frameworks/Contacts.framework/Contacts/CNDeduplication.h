@interface CNDeduplication : NSObject

+ (id)os_log;

- (id)contactsForGroup:(id)a0 store:(id)a1;
- (void)deduplicateContainer:(id)a0 store:(id)a1;
- (id)identifierSetFromContacts:(id)a0;
- (void)deduplicateKeeping:(id)a0 deleting:(id)a1 store:(id)a2;
- (void)addContactsForIds:(id)a0 toGroup:(id)a1 usingRequest:(id)a2 store:(id)a3;
- (void)deduplicateAllContainers:(id)a0;

@end
