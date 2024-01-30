@class NSObject, PPRecordStorageHelper, PPSQLDatabase, PPDKStorage, PPSourceStorage;
@protocol OS_dispatch_queue;

@interface PPNamedEntityStorage : NSObject {
    PPSQLDatabase *_db;
    PPDKStorage *_dkStorage;
    id _deletionObserver;
    PPRecordStorageHelper *_storageHelper;
    PPSourceStorage *_sourceStorage;
    NSObject<OS_dispatch_queue> *_populateDatabaseQueue;
}

+ (id)_loadTrieFromLocalAsset:(id)a0;
+ (double)_scoreEntityWithInitialScore:(double)a0 decayRate:(double)a1 extractionDate:(id)a2 scoringDate:(id)a3;

- (BOOL)iterNamedEntityRecordsWithQuery:(id)a0 error:(id *)a1 block:(id /* block */)a2;
- (id)namedEntityFilterLastRunDateWithError:(id *)a0;
- (BOOL)pruneOrphanedNamedEntityFeedbackCountRecordsWithLimit:(unsigned long long)a0 rowOffset:(unsigned long long)a1 deletedCount:(unsigned long long *)a2 isComplete:(BOOL *)a3;
- (BOOL)iterNamedEntityRecordsAndIdsWithQuery:(id)a0 error:(id *)a1 block:(id /* block */)a2;
- (BOOL)deleteAllNamedEntitiesFromSourcesWithBundleId:(id)a0 groupIds:(id)a1 atLeastOneNamedEntityRemoved:(BOOL *)a2 deletedCount:(unsigned long long *)a3 error:(id *)a4;
- (id)init;
- (BOOL)deleteAllNamedEntitiesFromSourcesWithBundleId:(id)a0 atLeastOneNamedEntityRemoved:(BOOL *)a1 deletedCount:(unsigned long long *)a2 error:(id *)a3;
- (BOOL)deleteNamedEntitiesMatchingRowIds:(id)a0 atLeastOneNamedEntityRemoved:(BOOL *)a1 deletedCount:(unsigned long long *)a2 error:(id *)a3;
- (void).cxx_destruct;
- (BOOL)decayFeedbackCountsWithDecayRate:(double)a0 shouldContinueBlock:(id /* block */)a1;
- (void)importRemotelyGeneratedNamedEntityDKEventsWithLimit:(unsigned int)a0 isComplete:(BOOL *)a1 shouldContinueBlock:(id /* block */)a2;
- (void)dealloc;
- (void)disableSyncForBundleIds:(id)a0;
- (id)decayedFeedbackCountsForClusterIdentifier:(id)a0;
- (unsigned int)duetReadBatchSize;
- (void)fixupDKEventsMetadataWithShouldContinueBlock:(id /* block */)a0;
- (id)sourceStatsWithExcludedAlgorithms:(id)a0;
- (void)_asyncProcessNewDKEventDeletions;
- (void)_dkEventImportToDatabaseWithEvent:(id)a0 eventUUIDBlob:(id)a1 txnWitness:(id)a2 filter:(id)a3;
- (id)initWithDatabase:(id)a0;
- (void)_asyncPopulateDatabaseFromDKEventsIfNecessary;
- (unsigned int)duetWriteBatchSize;
- (id)clusterIdentifiersExistingBeforeDate:(id)a0;
- (id)_deletionQueue;
- (BOOL)_shouldSuppressRepeatedImpressions:(id)a0;
- (void)clearRemoteRecordsMissingFromDuetWithShouldContinueBlock:(id /* block */)a0;
- (void)_importDKEventsWithLimit:(unsigned int)a0 remoteEventsOnly:(BOOL)a1 isComplete:(BOOL *)a2;
- (BOOL)deleteAllNamedEntitiesOlderThanDate:(id)a0 atLeastOneNamedEntityRemoved:(BOOL *)a1 deletedCount:(unsigned long long *)a2 error:(id *)a3;
- (void)fixupDKEventsWithShouldContinueBlock:(id /* block */)a0;
- (void)_truncateRecordsByDroppingOldestMakingRoomForCount:(unsigned int)a0 txnWitness:(id)a1;
- (BOOL)donateNamedEntityFeedback:(id)a0;
- (double)duetWriteBatchInterval;
- (BOOL)clearWithError:(id *)a0 deletedCount:(unsigned long long *)a1;
- (id)tempTableForSourceIdsExcludedAlgorithms:(id)a0 txnWitness:(id)a1;
- (id)_createRecordWithStatement:(id)a0 txnWitness:(id)a1;
- (id)lastDonationTimeForSourcesBeforeDate:(id)a0;
- (void)exportRecordsToDKWithShouldContinueBlock:(id /* block */)a0;
- (BOOL)deleteAllNamedEntitiesFromSourcesWithBundleId:(id)a0 documentIds:(id)a1 atLeastOneNamedEntityRemoved:(BOOL *)a2 deletedCount:(unsigned long long *)a3 error:(id *)a4;
- (void)_importDKEventsWithShouldContinueBlock:(unsigned int)a0 remoteEventsOnly:(BOOL)a1 isComplete:(BOOL *)a2 shouldContinueBlock:(id /* block */)a3;
- (id)_updatePreexistingEntitiesMatchingEntities:(id)a0 source:(id)a1 algorithm:(unsigned long long)a2 txnWitness:(id)a3;
- (void)processNewDKEventDeletions;
- (BOOL)setNamedEntityFilterLastRecordDate:(id)a0 error:(id *)a1;
- (id)namedEntityFilterLastRecordDate;
- (void)_prepareDonationStatement:(id)a0 scoredNamedEntity:(id)a1 algorithm:(unsigned long long)a2 cloudSync:(BOOL)a3 decayRate:(double)a4 sentimentScore:(double)a5 occurrencesInSource:(unsigned short)a6 weightMultiplier:(double)a7 sourceRowId:(long long)a8;
- (BOOL)setNamedEntityFilterLastRunDate:(id)a0 error:(id *)a1;
- (BOOL)deleteAllNamedEntitiesFromSourcesWithBundleId:(id)a0 groupId:(id)a1 olderThanDate:(id)a2 atLeastOneNamedEntityRemoved:(BOOL *)a3 deletedCount:(unsigned long long *)a4 error:(id *)a5;
- (unsigned int)uniqueClusterIdentifierCount;
- (id)thirdPartyBundleIdsFromToday;
- (struct _PASDBIterAction_ { BOOL x0; })_populateEvents:(id)a0 statement:(id)a1 txnWitness:(id)a2;
- (id)initWithDatabase:(id)a0 maxRecords:(unsigned int)a1 dkStorage:(id)a2 loadEmptyDatabaseFromDK:(BOOL)a3;
- (id)_generateExportRowIdsWithBatchSize:(unsigned int)a0 isComplete:(BOOL *)a1;
- (BOOL)deleteAllNamedEntityFeedbackCountRecordsOlderThanDate:(id)a0;
- (struct _PASDBIterAction_ { BOOL x0; })_populateUpdates:(id)a0 statement:(id)a1 source:(id)a2 weightMultiplier:(double)a3 entityToScoredEntityMap:(id)a4;
- (BOOL)_donateNamedEntities:(id)a0 source:(id)a1 algorithm:(unsigned long long)a2 cloudSync:(BOOL)a3 decayRate:(double)a4 sentimentScore:(double)a5 txnWitness:(id)a6;
- (BOOL)donateNamedEntities:(id)a0 source:(id)a1 algorithm:(unsigned long long)a2 cloudSync:(BOOL)a3 decayRate:(double)a4 sentimentScore:(double)a5 error:(id *)a6;

@end
