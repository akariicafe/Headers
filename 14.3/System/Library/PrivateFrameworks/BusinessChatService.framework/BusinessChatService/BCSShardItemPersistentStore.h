@class NSString;

@interface BCSShardItemPersistentStore : BCSPersistentStore <BCSShardCacheQueryable> {
    long long _schemaVersion;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (const char *)debugQueueName;

- (id)databasePath;
- (const char *)schema;
- (id)init;
- (long long)schemaVersion;
- (id)_databasePath;
- (void)deleteShardItemsOfType:(long long)a0;
- (void)updateShardItem:(id)a0 withShardIdentifier:(id)a1;
- (long long)countOfShardsOfType:(long long)a0;
- (long long)countOfExpiredShardsOfType:(long long)a0;
- (id)initWithSchemaVersion:(long long)a0;
- (void)schemaVersionWillChangeForDatabase:(struct sqlite3 { } *)a0 fromSchemaVersion:(long long)a1 toSchemaVersion:(long long)a2;
- (void)deleteShardItemMatching:(id)a0;
- (BOOL)_updateShardItem:(id)a0 withShardIdentifier:(id)a1;
- (id)_executeFetchPersistentShardItemObjectSQLQuery:(const char *)a0;
- (id)_extractShardItemFromStatement:(struct sqlite3_stmt { } *)a0;
- (BOOL)_executeDeleteBusinessItemSQLQuery:(const char *)a0;
- (long long)_executeCountSQLQuery:(const char *)a0;
- (id)shardItemMatching:(id)a0;
- (void)deleteExpiredShardItemsOfType:(long long)a0;

@end
