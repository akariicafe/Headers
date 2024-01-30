@interface PLPersistentHistoryUtilities : NSObject

+ (id)fetchTransactionsSinceToken:(id)a0 withBatchSize:(unsigned long long)a1 context:(id)a2 error:(id *)a3;
+ (id)fetchTransactionsSinceToken:(id)a0 withContext:(id)a1 error:(id *)a2;
+ (id)fetchTransactionCountSinceToken:(id)a0 withContext:(id)a1 error:(id *)a2;
+ (id)fetchTransactionsSinceToken:(id)a0 withFetchLimit:(unsigned long long)a1 context:(id)a2 error:(id *)a3;
+ (id)_executePersistentHistoryChangeRequest:(id)a0 withContext:(id)a1;
+ (long long)fetchApproximateHistoryRecordCountInLibrary:(id)a0 error:(id *)a1;
+ (BOOL)deleteHistoryBeforeToken:(id)a0 withContext:(id)a1 error:(id *)a2;

@end
