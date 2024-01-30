@interface PPMutableContactDiskCache : PPContactDiskCache

- (id)_createNewCacheObjectWithCreatedAt:(long long)a0;
- (BOOL)deleteNameRecordCache;
- (BOOL)_writeCache:(id)a0 path:(id)a1 error:(id *)a2;
- (id)_recordSetBucketsForNameRecords:(id)a0;
- (BOOL)updateNameRecordCacheWithHistoryRecords:(id)a0 error:(id *)a1;
- (BOOL)deleteCacheIfTooOld;
- (long long)lastCreatedAt;
- (BOOL)addNameRecords:(id)a0 error:(id *)a1;
- (void)setLastCreatedAt:(long long)a0;

@end
