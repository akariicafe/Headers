@class TRIDatabase;

@interface TRIExperimentDatabase : NSObject {
    TRIDatabase *_db;
}

- (id)initWithDatabase:(id)a0;
- (BOOL)_enumerateExperimentRecordsMatchingWhereClause:(id)a0 bind:(id /* block */)a1 block:(id /* block */)a2;
- (BOOL)hasRecordReferencingTreatmentId:(id)a0 withReferenceType:(unsigned int)a1;
- (BOOL)enumerateActiveExperimentRecordsWithVisibility:(unsigned int)a0 block:(id /* block */)a1;
- (struct _PASDBTransactionCompletion_ { BOOL x0; })readTransactionWithFailableBlock:(id /* block */)a0;
- (id)experimentRecordWithExperimentDeployment:(id)a0;
- (BOOL)enumerateNamespaceRecordsForExperimentDeployment:(id)a0 usingTransaction:(id)a1 block:(id /* block */)a2;
- (void).cxx_destruct;
- (BOOL)enumerateExperimentRecordsMatchingStatuses:(id)a0 block:(id /* block */)a1;
- (id)init;
- (id)activeExperimentRecordWithTreatmentId:(id)a0;
- (struct _PASDBTransactionCompletion_ { BOOL x0; })writeTransactionWithFailableBlock:(id /* block */)a0;
- (BOOL)setTreatmentId:(id)a0 forExperimentDeployment:(id)a1 usingTransaction:(id)a2;
- (struct { unsigned long long x0; })removeExperimentRecordWithExperimentDeployment:(id)a0;
- (struct { unsigned long long x0; })addExperimentWithExperimentDeployment:(id)a0 environment:(int)a1 type:(int)a2 status:(long long)a3 startDate:(id)a4 endDate:(id)a5 namespaces:(id)a6 artifact:(id)a7;
- (BOOL)namespacesAreAvailableForExperiment:(id)a0 startDate:(id)a1 endDate:(id)a2 namespaces:(id)a3;
- (BOOL)enumerateExperimentRecordsMatchingExperimentId:(id)a0 block:(id /* block */)a1;
- (id)treatmentURLsForExperimentDeployment:(id)a0 usingTransaction:(id)a1;
- (BOOL)enumerateExperimentRecordsWithBlock:(id /* block */)a0;
- (BOOL)setTreatmentURL:(id)a0 forExperimentDeployment:(id)a1 namespaceName:(id)a2;
- (BOOL)setStatus:(long long)a0 forExperimentDeployment:(id)a1 usingTransaction:(id)a2;

@end
