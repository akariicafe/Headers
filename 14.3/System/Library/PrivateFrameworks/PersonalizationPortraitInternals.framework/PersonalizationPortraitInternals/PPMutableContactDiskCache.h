@interface PPMutableContactDiskCache : PPContactDiskCache

- (BOOL)updateNameRecordCacheWithHistoryRecords:(id)a0 error:(id *)a1;
- (BOOL)addNameRecords:(id)a0 error:(id *)a1;
- (BOOL)deleteNameRecordCache;
- (BOOL)_writeCache:(id)a0 path:(id)a1 error:(id *)a2;
- (id)_createNewCacheObjectWithCreatedAt:(long long)a0;
- (long long)lastCreatedAt;
- (void)setLastCreatedAt:(long long)a0;
- (BOOL)deleteCacheIfTooOld;
- (id)_recordSetBucketsForNameRecords:(id)a0;

@end
