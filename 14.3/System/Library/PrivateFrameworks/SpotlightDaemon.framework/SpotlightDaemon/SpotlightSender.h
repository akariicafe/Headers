@interface SpotlightSender : NSObject

+ (void)setup;
+ (id)clientConnection:(long long)a0 jobType:(int)a1;
+ (BOOL)jobForDuet:(long long)a0;
+ (void)deleteSearchableItemsWithIdentifiers:(id)a0 bundleID:(id)a1 contentType:(id)a2 client:(long long)a3;
+ (BOOL)jobForTest:(long long)a0;
+ (void)deleteInteractionsWithGroupIdentifiers:(id)a0 bundleID:(id)a1 protectionClass:(id)a2 client:(long long)a3;
+ (void)deleteAllSearchableItemsWithBundleID:(id)a0 client:(long long)a1;
+ (void)deleteSearchableItemsWithEncodedIdentifiers:(id)a0 bundleID:(id)a1 client:(long long)a2;
+ (BOOL)jobForSuggestions:(long long)a0;
+ (void)deleteSearchableItemsWithDomainIdentifiers:(id)a0 bundleID:(id)a1 client:(long long)a2;
+ (void)deleteSearchableItemsSinceDate:(id)a0 bundleID:(id)a1 client:(long long)a2;
+ (void)addInteraction:(id)a0 intentClassName:(id)a1 bundleID:(id)a2 protectionClass:(id)a3 client:(long long)a4;
+ (BOOL)enabledForClient:(long long)a0;
+ (void)deleteAllUserActivities:(id)a0 client:(long long)a1;
+ (void)addUserActions:(id)a0 bundleID:(id)a1 protectionClass:(id)a2 client:(long long)a3;
+ (void)deleteUserActivitiesWithPersistentIdentifiers:(id)a0 bundleID:(id)a1 client:(long long)a2 retainedData:(id)a3;
+ (BOOL)jobForImages:(long long)a0;
+ (void)purgeSearchableItemsWithIdentifiers:(id)a0 bundleID:(id)a1 client:(long long)a2;
+ (void)donateRelevantActions:(id)a0 bundleID:(id)a1 client:(long long)a2;
+ (void)deleteInteractionsWithIdentifiers:(id)a0 bundleID:(id)a1 protectionClass:(id)a2 client:(long long)a3;
+ (void)deleteAllInteractionsWithBundleID:(id)a0 protectionClass:(id)a1 client:(long long)a2;
+ (void)dispatchWithOptions:(long long)a0 block:(id /* block */)a1;
+ (id)clientConnection:(long long)a0;
+ (void)addOrUpdateSearchableItems:(id)a0 itemsContent:(id)a1 bundleID:(id)a2 protectionClass:(id)a3 client:(long long)a4;

@end
