@interface BCSLinkItemPersistentStore : BCSPersistentStore <BCSItemCaching, BCSLinkItemCacheClearing> {
    long long _schemaVersion;
}

+ (const char *)debugQueueName;

- (id)databasePath;
- (const char *)schema;
- (id)init;
- (long long)schemaVersion;
- (void)_deleteAllItems;
- (id)itemMatching:(id)a0;
- (void)deleteItemMatching:(id)a0;
- (void)updateItem:(id)a0 withItemIdentifier:(id)a1;
- (id)initWithSchemaVersion:(long long)a0;
- (id)_linkItemMatching:(id)a0;
- (void)_updateLinkItem:(id)a0 withItemIdentifier:(id)a1;
- (void)_deleteLinkItemMatching:(id)a0;
- (BOOL)_executeDeleteSQLQuery:(const char *)a0;
- (id)_executeFetchLinkItemSQLQuery:(const char *)a0;
- (id)_extractLinkItemFromStatement:(struct sqlite3_stmt { } *)a0;
- (BOOL)_insertLinkItem:(id)a0 withItemIdentifier:(id)a1;
- (void)deleteItemsOfType:(long long)a0;
- (void)deleteExpiredItemsOfType:(long long)a0;
- (void)deleteLinkItemsWithBundleID:(id)a0;
- (void)schemaVersionWillChangeForDatabase:(struct sqlite3 { } *)a0 fromSchemaVersion:(long long)a1 toSchemaVersion:(long long)a2;

@end
