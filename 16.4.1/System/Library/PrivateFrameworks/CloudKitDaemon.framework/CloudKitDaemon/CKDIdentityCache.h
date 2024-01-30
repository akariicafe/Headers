@interface CKDIdentityCache : CKSQLiteTableGroup

+ (unsigned long long)ttlDays;
+ (id)cacheWithDeviceContext:(id)a0;

- (id)cache;
- (id)createTables;
- (void)cacheUserIdentity:(id)a0 forLookupInfo:(id)a1 container:(id)a2;
- (id)cachedIdentityForLookupInfo:(id)a0 container:(id)a1;
- (void)removeCachedValueForLookupInfo:(id)a0 container:(id)a1;

@end
