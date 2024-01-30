@interface PLPersistentHistoryUtilities : NSObject

+ (BOOL)deleteHistoryBeforeToken:(id)a0 withContext:(id)a1 error:(id *)a2;
+ (id)oldestTransactionWithContext:(id)a0;
+ (id)fetchTransactionsSinceMarker:(id)a0 withFetchRequest:(id)a1 batchSize:(unsigned long long)a2 context:(id)a3 error:(id *)a4;
+ (id)unarchiveTokenWithData:(id)a0;
+ (id)newestTransactionWithContext:(id)a0;
+ (BOOL)deleteHistoryBeforeDate:(id)a0 whenHistoryPercentageOfStoreIsGreaterThan:(unsigned long long)a1 withContext:(id)a2 error:(id *)a3;
+ (BOOL)deleteHistoryBeforeDate:(id)a0 withContext:(id)a1 error:(id *)a2;
+ (long long)fetchApproximateHistoryRecordCountInLibrary:(id)a0 error:(id *)a1;
+ (id)_executePersistentHistoryChangeRequest:(id)a0 withContext:(id)a1;
+ (id)archivedDataWithToken:(id)a0;
+ (id)fetchTransactionCountSinceToken:(id)a0 withContext:(id)a1 error:(id *)a2;

@end
