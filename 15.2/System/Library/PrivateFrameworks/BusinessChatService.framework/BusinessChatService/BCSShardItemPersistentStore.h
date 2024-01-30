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
- (long long)schemaVersion;
- (long long)countOfExpiredShardsOfType:(long long)a0;
- (const char *)schema;
- (id)shardItemMatching:(id)a0;
- (void)updateShardItem:(id)a0 withShardIdentifier:(id)a1;
- (void)deleteShardItemMatching:(id)a0;
- (void)schemaVersionWillChangeForDatabase:(struct sqlite3 { } *)a0 fromSchemaVersion:(long long)a1 toSchemaVersion:(long long)a2;
- (void)deleteShardItemsOfType:(long long)a0;
- (id)init;
- (long long)countOfShardsOfType:(long long)a0;
- (void)deleteExpiredShardItemsOfType:(long long)a0;
- (id)initWithSchemaVersion:(long long)a0;

@end
