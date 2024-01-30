@interface HDHealthEntity : HDSQLiteEntity <HDHealthEntityEncoding>

+ (id)databaseName;
+ (id)entityEncoderForProfile:(id)a0 transaction:(id)a1 purpose:(long long)a2 encodingOptions:(id)a3 authorizationFilter:(id /* block */)a4;
+ (id)entityEncoderForProfile:(id)a0 database:(id)a1 purpose:(long long)a2 encodingOptions:(id)a3 authorizationFilter:(id /* block */)a4;
+ (id)propertyForSyncAnchor;
+ (id)protectedDatabaseName;
+ (long long)nextSyncAnchorWithStartAnchor:(long long)a0 predicate:(id)a1 session:(id)a2 healthDatabase:(id)a3 error:(id *)a4;
+ (BOOL)enumerateEntitiesForSyncWithProperties:(id)a0 predicate:(id)a1 session:(id)a2 syncAnchorRange:(struct HDSyncAnchorRange { long long x0; long long x1; })a3 limit:(unsigned long long)a4 lastSyncAnchor:(long long *)a5 healthDatabase:(id)a6 error:(id *)a7 block:(id /* block */)a8;
+ (id)propertyForSyncProvenance;
+ (BOOL)performPostJournalMergeCleanupWithTransaction:(id)a0 profile:(id)a1 error:(id *)a2;
+ (long long)protectionClass;
+ (long long)countOfObjectsWithPredicate:(id)a0 healthDatabase:(id)a1 error:(id *)a2;
+ (BOOL)performWriteTransactionWithHealthDatabase:(id)a0 error:(id *)a1 block:(id /* block */)a2;
+ (BOOL)performReadTransactionWithHealthDatabase:(id)a0 error:(id *)a1 block:(id /* block */)a2;
+ (id)defaultForeignKey;
+ (id)insertOrReplaceEntity:(BOOL)a0 healthDatabase:(id)a1 properties:(id)a2 error:(id *)a3 bindingHandler:(id /* block */)a4;
+ (id)propertyValueForAnyWithProperty:(id)a0 predicate:(id)a1 healthDatabase:(id)a2 error:(id *)a3;
+ (id)anyWithPredicate:(id)a0 healthDatabase:(id)a1 error:(id *)a2;
+ (BOOL)deleteEntitiesWithPredicate:(id)a0 healthDatabase:(id)a1 error:(id *)a2;
+ (BOOL)performWriteTransactionWithHealthDatabase:(id)a0 error:(id *)a1 block:(id /* block */)a2 inaccessibilityHandler:(id /* block */)a3;
+ (BOOL)performReadTransactionWithHealthDatabase:(id)a0 context:(id)a1 error:(id *)a2 block:(id /* block */)a3;
+ (BOOL)performWriteTransactionWithHealthDatabase:(id)a0 context:(id)a1 error:(id *)a2 block:(id /* block */)a3;
+ (BOOL)enumerateProperties:(id)a0 withPredicate:(id)a1 healthDatabase:(id)a2 error:(id *)a3 enumerationHandler:(id /* block */)a4;
+ (id)predicateForSyncWithPredicate:(id)a0 syncEntityClass:(Class)a1 session:(id)a2 syncAnchorRange:(struct HDSyncAnchorRange { long long x0; long long x1; })a3;
+ (id)maxRowIDForPredicate:(id)a0 healthDatabase:(id)a1 error:(id *)a2;
+ (id)columnNamesForTimeOffset;
+ (id)updateSQLForTimeOffsetWithBindingCount:(unsigned long long *)a0;
+ (BOOL)enumerateEntitiesForSyncWithProperties:(id)a0 predicate:(id)a1 syncEntityClass:(Class)a2 session:(id)a3 syncAnchorRange:(struct HDSyncAnchorRange { long long x0; long long x1; })a4 orderingTerms:(id)a5 limit:(unsigned long long)a6 lastSyncAnchor:(long long *)a7 healthDatabase:(id)a8 error:(id *)a9 block:(id /* block */)a10;
+ (id)_syncQueryWithDatabase:(id)a0 predicate:(id)a1 orderingTerms:(id)a2 limit:(unsigned long long)a3 anchorProperty:(id)a4;
+ (long long)nextSyncAnchorWithStartAnchor:(long long)a0 predicate:(id)a1 syncEntityClass:(Class)a2 session:(id)a3 orderingTerms:(id)a4 limit:(unsigned long long)a5 healthDatabase:(id)a6 error:(id *)a7;
+ (id)_syncQueryDescriptorWithPredicate:(id)a0 orderingTerms:(id)a1 limit:(unsigned long long)a2 anchorProperty:(id)a3;
+ (id)backwardsCompatibleEncoderForEntityClass:(Class)a0 profile:(id)a1 transaction:(id)a2 purpose:(long long)a3 encodingOptions:(id)a4 authorizationFilter:(id /* block */)a5;
+ (id)transactionContextForWriting:(BOOL)a0 baseContext:(id)a1;
+ (BOOL)_isNilDatabase:(id)a0 error:(id *)a1;
+ (BOOL)performWriteTransactionWithHealthDatabase:(id)a0 context:(id)a1 error:(id *)a2 block:(id /* block */)a3 inaccessibilityHandler:(id /* block */)a4;
+ (BOOL)updateProperties:(id)a0 predicate:(id)a1 healthDatabase:(id)a2 error:(id *)a3 bindingHandler:(id /* block */)a4;

- (BOOL)getValuesForProperties:(id)a0 healthDatabase:(id)a1 error:(id *)a2 handler:(id /* block */)a3;
- (id)valueForProperty:(id)a0 healthDatabase:(id)a1 error:(id *)a2;
- (BOOL)updateProperties:(id)a0 healthDatabase:(id)a1 error:(id *)a2 bindingHandler:(id /* block */)a3;
- (id)stringForProperty:(id)a0 healthDatabase:(id)a1 error:(id *)a2;
- (id)dateForProperty:(id)a0 transaction:(id)a1 error:(id *)a2;
- (BOOL)setDate:(id)a0 forProperty:(id)a1 transaction:(id)a2 error:(id *)a3;
- (id)stringForProperty:(id)a0 transaction:(id)a1 error:(id *)a2;
- (BOOL)setString:(id)a0 forProperty:(id)a1 transaction:(id)a2 error:(id *)a3;
- (id)numberForProperty:(id)a0 transaction:(id)a1 error:(id *)a2;
- (BOOL)setNumber:(id)a0 forProperty:(id)a1 transaction:(id)a2 error:(id *)a3;
- (id)foreignKeyEntity:(Class)a0 forProperty:(id)a1 transaction:(id)a2 error:(id *)a3;
- (BOOL)setForeignKeyEntity:(id)a0 forProperty:(id)a1 transaction:(id)a2 error:(id *)a3;

@end
