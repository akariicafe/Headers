@class CKDRecordCacheTable;

@interface CKDRecordCache : CKSQLiteTableGroup {
    CKDRecordCacheTable *_rc;
}

+ (id)recordCacheForContainer:(id)a0;
+ (id)recordCacheInDatabase:(id)a0 withContainer:(id)a1;
+ (unsigned long long)ttlDays;
+ (id)recordCacheWithPath:(id)a0 forContainer:(id)a1;

- (id)forwardingTargetForSelector:(SEL)a0;
- (id)createTables;
- (void).cxx_destruct;

@end
