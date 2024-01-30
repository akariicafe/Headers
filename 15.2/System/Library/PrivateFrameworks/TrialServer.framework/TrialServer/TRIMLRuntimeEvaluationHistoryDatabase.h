@class TRIDatabase;

@interface TRIMLRuntimeEvaluationHistoryDatabase : NSObject {
    TRIDatabase *_db;
}

- (id)initWithDatabase:(id)a0;
- (BOOL)enumerateRecordsNewerThanDate:(id)a0 block:(id /* block */)a1;
- (struct _PASDBTransactionCompletion_ { BOOL x0; })readTransactionWithFailableBlock:(id /* block */)a0;
- (BOOL)_enumerateRecordsMatchingWhereClause:(id)a0 bind:(id /* block */)a1 block:(id /* block */)a2;
- (void).cxx_destruct;
- (id)init;
- (BOOL)expireRecordsOlderThanDate:(id)a0 deletedCount:(unsigned long long *)a1;
- (BOOL)addRecord:(id)a0 usingTransaction:(id)a1;
- (struct _PASDBTransactionCompletion_ { BOOL x0; })writeTransactionWithFailableBlock:(id /* block */)a0;

@end
