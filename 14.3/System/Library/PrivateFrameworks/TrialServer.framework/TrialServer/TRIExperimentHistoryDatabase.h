@class TRIDatabase;

@interface TRIExperimentHistoryDatabase : NSObject {
    TRIDatabase *_db;
}

- (struct _PASDBTransactionCompletion_ { BOOL x0; })writeTransactionWithFailableBlock:(id /* block */)a0;
- (struct _PASDBTransactionCompletion_ { BOOL x0; })readTransactionWithFailableBlock:(id /* block */)a0;
- (BOOL)addRecord:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)initWithDatabase:(id)a0;
- (BOOL)expireRecordsOlderThanDate:(id)a0 deletedCount:(unsigned long long *)a1;
- (BOOL)enumerateRecordsNewerThanDate:(id)a0 matchingDeploymentEnvironments:(id)a1 block:(id /* block */)a2;
- (BOOL)_enumerateRecordsMatchingWhereClause:(id)a0 bind:(id /* block */)a1 block:(id /* block */)a2;

@end
