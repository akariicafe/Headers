@interface PPMutableContactDiskCache : PPContactDiskCache

- (BOOL)updateNameRecordCacheWithHistoryRecords:(id)a0 error:(id *)a1;
- (BOOL)deleteNameRecordCache;
- (id)_createNewCacheObjectWithCreatedAt:(long long)a0;
- (void)setLastCreatedAt:(long long)a0;
- (long long)lastCreatedAt;
- (BOOL)addNameRecords:(id)a0 error:(id *)a1;
- (BOOL)_writeCache:(id)a0 path:(id)a1 error:(id *)a2;
- (BOOL)deleteCacheIfTooOld;
- (id)_recordSetBucketsForNameRecords:(id)a0;

@end
