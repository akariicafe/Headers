@class PPSQLDatabase, PPContactStorage;

@interface PPSourceStorage : NSObject {
    PPSQLDatabase *_db;
    PPContactStorage *_contactStorage;
}

+ (double)matchAccuracyForSecondsFrom1970;

- (id)initWithDatabase:(id)a0;
- (id)createSourceWithStatement:(id)a0 txnWitness:(id)a1;
- (BOOL)iterSourcesWithQuery:(id)a0 error:(id *)a1 block:(id /* block */)a2;
- (void).cxx_destruct;
- (id)init;
- (long long)updateOrCreateRowForSource:(id)a0 addingRefCount:(long long)a1 txnWitness:(id)a2;
- (id)loadSourcesWithBundleId:(id)a0 groupId:(id)a1 documentId:(id)a2 txnWitness:(id)a3;
- (id)whereSourceIdInSubclauseWithSourceIds:(id)a0 tableNameAlias:(id)a1 binders:(id)a2;
- (long long)pruneSourcesWithNoReferencesWithTxnWitness:(id)a0;

@end
