@class NSString, SiriCoreSQLiteDatabase;

@interface SiriCoreSyncDatabase : NSObject {
    NSString *_path;
    SiriCoreSQLiteDatabase *_db;
}

@property (nonatomic) BOOL inTransaction;
@property (nonatomic) BOOL debugMode;

+ (id)currentSyncDatabase;
+ (void)removeCurrentSyncDatabase;

- (BOOL)openWithError:(id *)a0;
- (id)initWithPath:(id)a0;
- (BOOL)prepare;
- (void).cxx_destruct;
- (BOOL)commitTransactionWithError:(id *)a0;
- (BOOL)closeWithError:(id *)a0;
- (BOOL)beginTransactionWithError:(id *)a0;
- (BOOL)_executeStatement:(id)a0 error:(id *)a1;
- (BOOL)rollbackTransactionWithError:(id *)a0;
- (BOOL)_insertSyncRec:(id)a0 intoTable:(id)a1 error:(id *)a2;
- (int)_countKey:(id)a0 fromTable:(id)a1 updatedAfter:(id)a2 error:(id *)a3;
- (BOOL)_enumerateKey:(id)a0 updatedAfter:(id)a1 fromTable:(id)a2 usingBlock:(id /* block */)a3 error:(id *)a4;
- (BOOL)succeedOrRollbackOnFail:(id)a0 error:(id *)a1 whileExecuting:(id /* block */)a2;
- (BOOL)donate:(id)a0 error:(id *)a1;
- (BOOL)remove:(id)a0 error:(id *)a1;
- (BOOL)removeAllItemsOfKey:(id)a0 error:(id *)a1;
- (BOOL)markAsSent:(id)a0 error:(id *)a1;
- (int)countRemovalsOfKey:(id)a0 updatedAfter:(id)a1 error:(id *)a2;
- (int)countItemsOfKey:(id)a0 updatedAfter:(id)a1 error:(id *)a2;
- (int)countSentItemsOfKey:(id)a0 updatedAfter:(id)a1 error:(id *)a2;
- (BOOL)enumerateItemsOfKey:(id)a0 updatedAfter:(id)a1 error:(id *)a2 usingBlock:(id /* block */)a3;
- (BOOL)enumerateRemovalsOfKey:(id)a0 updatedAfter:(id)a1 error:(id *)a2 usingBlock:(id /* block */)a3;
- (BOOL)enumerateSentItemsOfKey:(id)a0 updatedAfter:(id)a1 error:(id *)a2 usingBlock:(id /* block */)a3;

@end
