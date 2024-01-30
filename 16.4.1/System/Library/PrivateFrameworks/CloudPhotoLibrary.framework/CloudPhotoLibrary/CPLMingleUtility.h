@interface CPLMingleUtility : NSObject

+ (BOOL)_shouldDeletePrivateRecordWithNaturalPrivateScopedIdentifier:(id)a0 correctPrivateScopedIdentifier:(id)a1 cloudCache:(id)a2 transientPullRepository:(id)a3;
+ (BOOL)mingleRemappedBatch:(id)a0 scope:(id)a1 forStore:(id)a2 onPutBatchInPullQueue:(id /* block */)a3 error:(id *)a4;
+ (BOOL)_applyMingledBatch:(id)a0 scope:(id)a1 forStore:(id)a2 onPutBatchInPullQueue:(id /* block */)a3 error:(id *)a4;
+ (BOOL)_remapScopedIdentifier:(id)a0 to:(id)a1 class:(Class)a2 inBatch:(id)a3 store:(id)a4 idMapping:(id)a5 cloudCache:(id)a6 remappedRecords:(id)a7 error:(id *)a8;
+ (BOOL)applyShareRemapFixUpTasks:(id)a0 scope:(id)a1 store:(id)a2 onPutBatchInPullQueue:(id /* block */)a3 error:(id *)a4;
+ (BOOL)mingleChangeBatch:(id)a0 scope:(id)a1 forStore:(id)a2 onPutBatchInPullQueue:(id /* block */)a3 error:(id *)a4;
+ (BOOL)mingleSharedRemappedBatch:(id)a0 scope:(id)a1 sharedScope:(id)a2 forStore:(id)a3 fixUpTasks:(id *)a4 onPutBatchInPullQueue:(id /* block */)a5 error:(id *)a6;

@end
