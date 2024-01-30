@interface BCSLinkItemPersistentStore : BCSPersistentStore <BCSItemCaching, BCSLinkItemCacheClearing> {
    long long _schemaVersion;
}

+ (const char *)debugQueueName;

- (id)databasePath;
- (long long)schemaVersion;
- (id)itemMatching:(id)a0;
- (const char *)schema;
- (void)schemaVersionWillChangeForDatabase:(struct sqlite3 { } *)a0 fromSchemaVersion:(long long)a1 toSchemaVersion:(long long)a2;
- (void)deleteLinkItemsWithBundleID:(id)a0;
- (id)init;
- (void)deleteItemMatching:(id)a0;
- (void)deleteExpiredItemsOfType:(long long)a0;
- (void)updateItem:(id)a0 withItemIdentifier:(id)a1;
- (void)deleteItemsOfType:(long long)a0;

@end
