@class NSString;

@interface HDSampleAggregateCacheEntity : HDHealthEntity <HDHealthEntitySchema>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (const struct { id x0; id x1; unsigned char x2; } *)columnDefinitionsWithCount:(unsigned long long *)a0;
+ (id)databaseTable;
+ (id)foreignKeys;
+ (BOOL)deleteCacheForBucketIndexes:(id)a0 forQueryIdentifier:(id)a1 sourceEntity:(id)a2 generationNumber:(long long)a3 persistentAnchorDate:(id)a4 intervalComponents:(id)a5 profile:(id)a6 error:(id *)a7;
+ (long long)protectionClass;
+ (long long)cachesExistForQueryIdentifier:(id)a0 sourceEntity:(id)a1 profile:(id)a2 error:(id *)a3;
+ (BOOL)insertCachedData:(id)a0 forQueryIdentifier:(id)a1 sourceEntity:(id)a2 generationNumber:(long long)a3 persistentAnchorDate:(id)a4 intervalComponents:(id)a5 profile:(id)a6 error:(id *)a7;
+ (BOOL)enumerateCachedDataForQueryIdentifier:(id)a0 sourceEntity:(id)a1 profile:(id)a2 startIndex:(long long)a3 endIndex:(long long)a4 error:(id *)a5 enumerationHandler:(id /* block */)a6;
+ (id)uniquedColumns;
+ (id)pruneWithProfile:(id)a0 nowDate:(id)a1 limit:(unsigned long long)a2 error:(id *)a3;


@end
