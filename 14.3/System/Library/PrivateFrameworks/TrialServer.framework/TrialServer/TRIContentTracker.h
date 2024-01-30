@class TRIDatabase;

@interface TRIContentTracker : NSObject {
    TRIDatabase *_db;
}

+ (id)contentIdentifierForExperimentArtifactWithDeployment:(id)a0;
+ (BOOL)decodeContentIdentifier:(id)a0 experimentDeployment:(id *)a1 treatmentId:(id *)a2 container:(id *)a3;
+ (id)contentIdentifierForTreatmentArtifactWithTreatmentId:(id)a0 container:(id)a1;

- (struct _PASDBTransactionCompletion_ { BOOL x0; })writeTransactionWithFailableBlock:(id /* block */)a0;
- (struct _PASDBTransactionCompletion_ { BOOL x0; })readTransactionWithFailableBlock:(id /* block */)a0;
- (id)init;
- (void).cxx_destruct;
- (id)initWithDatabase:(id)a0;
- (BOOL)addRefWithContentIdentifier:(id)a0;
- (BOOL)dropRefWithContentIdentifier:(id)a0;
- (BOOL)enumerateTrackedItemsWithBlock:(id /* block */)a0;
- (BOOL)clearRefsWithContentIdentifier:(id)a0;
- (BOOL)_addOrDropRefWithContentIdentifier:(id)a0 changeType:(unsigned long long)a1;
- (BOOL)refCountForContentIdentifier:(id)a0 refCount:(long long *)a1;

@end
