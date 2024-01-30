@class PPSQLDatabase, PPContactStorage;

@interface PPSourceStorage : NSObject {
    PPSQLDatabase *_db;
    PPContactStorage *_contactStorage;
}

+ (double)matchAccuracyForSecondsFrom1970;

- (id)createSourceWithStatement:(id)a0 txnWitness:(id)a1;
- (id)init;
- (void).cxx_destruct;
- (long long)pruneSourcesWithNoReferencesWithTxnWitness:(id)a0;
- (id)initWithDatabase:(id)a0;
- (BOOL)iterSourcesWithQuery:(id)a0 error:(id *)a1 block:(id /* block */)a2;
- (id)loadSourcesWithBundleId:(id)a0 groupId:(id)a1 documentId:(id)a2 txnWitness:(id)a3;
- (long long)updateOrCreateRowForSource:(id)a0 addingRefCount:(long long)a1 txnWitness:(id)a2;
- (id)whereSourceIdInSubclauseWithSourceIds:(id)a0 tableNameAlias:(id)a1 binders:(id)a2;

@end
