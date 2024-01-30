@class PPTrialWrapper, NSObject, PPRecordStorageHelper, PPSQLDatabase, PPDKStorage, PPSourceStorage;
@protocol OS_dispatch_queue;

@interface PPNamedEntityStorage : NSObject {
    PPSQLDatabase *_db;
    PPDKStorage *_dkStorage;
    id _deletionObserver;
    PPRecordStorageHelper *_storageHelper;
    PPSourceStorage *_sourceStorage;
    PPTrialWrapper *_trialWrapper;
    NSObject<OS_dispatch_queue> *_populateDatabaseQueue;
}

- (BOOL)iterNamedEntityRecordsWithQuery:(id)a0 error:(id *)a1 block:(id /* block */)a2;
- (id)initWithDatabase:(id)a0;
- (BOOL)clearWithError:(id *)a0 deletedCount:(unsigned long long *)a1;
- (id)decayedFeedbackCountsForClusterIdentifier:(id)a0;
- (BOOL)deleteAllNamedEntitiesFromSourcesWithBundleId:(id)a0 groupId:(id)a1 olderThanDate:(id)a2 atLeastOneNamedEntityRemoved:(BOOL *)a3 deletedCount:(unsigned long long *)a4 error:(id *)a5;
- (BOOL)deleteAllNamedEntitiesFromSourcesWithBundleId:(id)a0 atLeastOneNamedEntityRemoved:(BOOL *)a1 deletedCount:(unsigned long long *)a2 error:(id *)a3;
- (unsigned int)duetReadBatchSize;
- (BOOL)setNamedEntityFilterLastRunDate:(id)a0 error:(id *)a1;
- (void)clearRemoteRecordsMissingFromDuetWithShouldContinueBlock:(id /* block */)a0;
- (id)lastDonationTimeForSourcesBeforeDate:(id)a0;
- (void)fixupDKEventsMetadataWithShouldContinueBlock:(id /* block */)a0;
- (BOOL)deleteAllNamedEntitiesOlderThanDate:(id)a0 atLeastOneNamedEntityRemoved:(BOOL *)a1 deletedCount:(unsigned long long *)a2 error:(id *)a3;
- (id)clusterIdentifiersExistingBeforeDate:(id)a0;
- (void)importRemotelyGeneratedNamedEntityDKEventsWithLimit:(unsigned int)a0 isComplete:(BOOL *)a1 shouldContinueBlock:(id /* block */)a2;
- (BOOL)donateNamedEntityFeedback:(id)a0;
- (BOOL)donateNamedEntities:(id)a0 source:(id)a1 algorithm:(unsigned long long)a2 cloudSync:(BOOL)a3 decayRate:(double)a4 sentimentScore:(double)a5 error:(id *)a6;
- (unsigned int)duetWriteBatchSize;
- (BOOL)deleteNamedEntitiesMatchingRowIds:(id)a0 atLeastOneNamedEntityRemoved:(BOOL *)a1 deletedCount:(unsigned long long *)a2 error:(id *)a3;
- (id)namedEntityFilterLastRecordDate;
- (void)processNewDKEventDeletions;
- (void).cxx_destruct;
- (BOOL)pruneOrphanedNamedEntityFeedbackCountRecordsWithLimit:(unsigned long long)a0 rowOffset:(unsigned long long)a1 deletedCount:(unsigned long long *)a2 isComplete:(BOOL *)a3;
- (unsigned int)uniqueClusterIdentifierCount;
- (double)duetWriteBatchInterval;
- (id)init;
- (BOOL)deleteAllNamedEntityFeedbackCountRecordsOlderThanDate:(id)a0;
- (id)tempViewForSourceIdsExcludedAlgorithms:(id)a0 txnWitness:(id)a1;
- (BOOL)setNamedEntityFilterLastRecordDate:(id)a0 error:(id *)a1;
- (id)firstDonationSourceCountsWithShouldContinueBlock:(id /* block */)a0;
- (id)namedEntityFilterLastRunDateWithError:(id *)a0;
- (void)fixupDKEventsWithShouldContinueBlock:(id /* block */)a0;
- (id)initWithDatabase:(id)a0 maxRecords:(unsigned int)a1 dkStorage:(id)a2 loadEmptyDatabaseFromDK:(BOOL)a3 trialWrapper:(id)a4;
- (void)dealloc;
- (id)sourceStats:(unsigned long long)a0 withExcludedAlgorithms:(id)a1;
- (void)exportRecordsToDKWithShouldContinueBlock:(id /* block */)a0;
- (BOOL)iterNamedEntityRecordsAndIdsWithQuery:(id)a0 error:(id *)a1 block:(id /* block */)a2;
- (BOOL)deleteAllNamedEntitiesFromSourcesWithBundleId:(id)a0 groupIds:(id)a1 atLeastOneNamedEntityRemoved:(BOOL *)a2 deletedCount:(unsigned long long *)a3 error:(id *)a4;
- (BOOL)decayFeedbackCountsWithDecayRate:(double)a0 shouldContinueBlock:(id /* block */)a1;
- (void)disableSyncForBundleIds:(id)a0;
- (BOOL)deleteAllNamedEntitiesFromSourcesWithBundleId:(id)a0 documentIds:(id)a1 atLeastOneNamedEntityRemoved:(BOOL *)a2 deletedCount:(unsigned long long *)a3 error:(id *)a4;
- (id)thirdPartyBundleIdsFromToday;

@end
