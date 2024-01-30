@interface BCSBusinessItemPersistentStore : BCSPersistentStore

+ (const char *)debugQueueName;

- (id)databasePath;
- (long long)schemaVersion;
- (const char *)schema;
- (BOOL)deleteBusinessItem:(id)a0;
- (BOOL)deleteBusinessItemWithBizID:(id)a0;
- (BOOL)deleteBusinessItemWithPhoneNumber:(id)a0;
- (BOOL)insertOrReplaceBusinessItem:(id)a0 withTTL:(double)a1;
- (BOOL)updateTTL:(double)a0 forBusinessItem:(id)a1;
- (BOOL)updateLastRetrievedDateForBusinessItem:(id)a0;
- (id)fetchPersistentBusinessItemObjectWithBizID:(id)a0;
- (id)fetchPersistentBusinessItemObjectWithPhoneNumber:(id)a0;

@end
