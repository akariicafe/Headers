@interface CKSQLiteCacheTableTrackingTable : CKSQLiteTable

+ (Class)entryClass;
+ (id)dbProperties;

- (id)updateEntryOldestExpireDate:(id)a0 oldestExpirationDate:(id)a1;

@end
