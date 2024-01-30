@class NSObject, PPRecordStorageHelper, PPSQLDatabase, PPDKStorage, PPSourceStorage;
@protocol OS_dispatch_queue;

@interface PPTopicStorage : NSObject {
    PPSQLDatabase *_db;
    PPDKStorage *_dkStorage;
    id _deletionObserver;
    PPRecordStorageHelper *_storageHelper;
    PPSourceStorage *_sourceStorage;
    NSObject<OS_dispatch_queue> *_populateDatabaseQueue;
}

+ (double)_scoreTopicWithInitialScore:(double)a0 decayRate:(double)a1 extractionDate:(id)a2 scoringDate:(id)a3;
+ (id)_loadTrieFromLocalAsset:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (BOOL)decayFeedbackCountsWithDecayRate:(double)a0 shouldContinueBlock:(id /* block */)a1;
- (void)dealloc;
- (void)disableSyncForBundleIds:(id)a0;
- (BOOL)deleteAllTopicsFromSourcesWithBundleId:(id)a0 groupId:(id)a1 olderThanDate:(id)a2 algorithm:(unsigned long long)a3 atLeastOneTopicRemoved:(BOOL *)a4 deletedCount:(unsigned long long *)a5 error:(id *)a6;
- (BOOL)deleteAllTopicsFromSourcesWithBundleId:(id)a0 algorithm:(unsigned long long)a1 atLeastOneTopicRemoved:(BOOL *)a2 deletedCount:(unsigned long long *)a3 error:(id *)a4;
- (id)decayedFeedbackCountsForClusterIdentifier:(id)a0;
- (unsigned int)duetReadBatchSize;
- (void)importRemotelyGeneratedTopicDKEventsWithLimit:(unsigned int)a0 isComplete:(BOOL *)a1 shouldContinueBlock:(id /* block */)a2;
- (void)fixupDKEventsMetadataWithShouldContinueBlock:(id /* block */)a0;
- (id)sourceStatsWithExcludedAlgorithms:(id)a0;
- (void)_asyncProcessNewDKEventDeletions;
- (BOOL)deleteAllTopicsFromSourcesWithBundleId:(id)a0 groupIds:(id)a1 atLeastOneTopicRemoved:(BOOL *)a2 deletedCount:(unsigned long long *)a3 error:(id *)a4;
- (id)initWithDatabase:(id)a0;
- (void)_asyncPopulateDatabaseFromDKEventsIfNecessary;
- (unsigned int)duetWriteBatchSize;
- (id)clusterIdentifiersExistingBeforeDate:(id)a0;
- (id)_deletionQueue;
- (BOOL)_shouldSuppressRepeatedImpressions:(id)a0;
- (void)clearRemoteRecordsMissingFromDuetWithShouldContinueBlock:(id /* block */)a0;
- (BOOL)donateTopics:(id)a0 source:(id)a1 algorithm:(unsigned long long)a2 cloudSync:(BOOL)a3 decayRate:(double)a4 sentimentScore:(double)a5 exactMatchesInSourceText:(id)a6 error:(id *)a7;
- (void)_importDKEventsWithLimit:(unsigned int)a0 remoteEventsOnly:(BOOL)a1 isComplete:(BOOL *)a2;
- (BOOL)iterTopicRecordsWithQuery:(id)a0 error:(id *)a1 block:(id /* block */)a2;
- (void)_dkEventImportToDatabaseWithEvent:(id)a0 eventUUIDBlob:(id)a1 txnWitness:(id)a2;
- (BOOL)deleteAllTopicFeedbackCountRecordsOlderThanDate:(id)a0;
- (BOOL)deleteAllTopicsWithTopicId:(id)a0 atLeastOneTopicRemoved:(BOOL *)a1 deletedCount:(unsigned long long *)a2 error:(id *)a3;
- (BOOL)donateTopicFeedback:(id)a0;
- (BOOL)deleteAllTopicsFromSourcesWithBundleId:(id)a0 documentIds:(id)a1 atLeastOneTopicRemoved:(BOOL *)a2 deletedCount:(unsigned long long *)a3 error:(id *)a4;
- (void)fixupDKEventsWithShouldContinueBlock:(id /* block */)a0;
- (void)_truncateRecordsByDroppingOldestMakingRoomForCount:(unsigned int)a0 txnWitness:(id)a1;
- (BOOL)pruneOrphanedTopicFeedbackCountRecordsWithLimit:(long long)a0 rowOffset:(unsigned long long)a1 deletedCount:(unsigned long long *)a2 isComplete:(BOOL *)a3;
- (BOOL)deleteAllTopicsFromSourcesWithBundleId:(id)a0 groupId:(id)a1 olderThanDate:(id)a2 atLeastOneTopicRemoved:(BOOL *)a3 deletedCount:(unsigned long long *)a4 error:(id *)a5;
- (double)duetWriteBatchInterval;
- (BOOL)clearWithError:(id *)a0 deletedCount:(unsigned long long *)a1;
- (id)tempTableForSourceIdsExcludedAlgorithms:(id)a0 txnWitness:(id)a1;
- (id)_createRecordWithStatement:(id)a0 txnWitness:(id)a1;
- (id)lastDonationTimeForSourcesBeforeDate:(id)a0;
- (void)exportRecordsToDKWithShouldContinueBlock:(id /* block */)a0;
- (void)_importDKEventsWithShouldContinueBlock:(unsigned int)a0 remoteEventsOnly:(BOOL)a1 isComplete:(BOOL *)a2 shouldContinueBlock:(id /* block */)a3;
- (BOOL)deleteAllTopicsFromSourcesWithBundleId:(id)a0 groupIds:(id)a1 algorithm:(unsigned long long)a2 atLeastOneTopicRemoved:(BOOL *)a3 deletedCount:(unsigned long long *)a4 error:(id *)a5;
- (void)_prepareDonationStatement:(id)a0 scoredTopic:(id)a1 algorithm:(unsigned long long)a2 cloudSync:(BOOL)a3 decayRate:(double)a4 sentimentScore:(double)a5 occurrencesInSource:(unsigned short)a6 algorithmResultPosition:(unsigned short)a7 algorithmResultCount:(unsigned short)a8 exactMatchInSourceText:(BOOL)a9 weightMultiplier:(double)a10 sourceRowId:(long long)a11;
- (void)processNewDKEventDeletions;
- (BOOL)deleteAllTopicsFromSourcesWithBundleId:(id)a0 atLeastOneTopicRemoved:(BOOL *)a1 deletedCount:(unsigned long long *)a2 error:(id *)a3;
- (BOOL)deleteAllTopicsWithTopicId:(id)a0 algorithm:(unsigned long long)a1 atLeastOneTopicRemoved:(BOOL *)a2 deletedCount:(unsigned long long *)a3 error:(id *)a4;
- (BOOL)deleteAllTopicsOlderThanDate:(id)a0 atLeastOneTopicRemoved:(BOOL *)a1 deletedCount:(unsigned long long *)a2 error:(id *)a3;
- (unsigned int)uniqueClusterIdentifierCount;
- (BOOL)_donateTopics:(id)a0 source:(id)a1 algorithm:(unsigned long long)a2 cloudSync:(BOOL)a3 decayRate:(double)a4 sentimentScore:(double)a5 exactMatchesInSourceText:(id)a6 txnWitness:(id)a7;
- (id)thirdPartyBundleIdsFromToday;
- (struct _PASDBIterAction_ { BOOL x0; })_populateEvents:(id)a0 statement:(id)a1 txnWitness:(id)a2;
- (id)initWithDatabase:(id)a0 maxRecords:(unsigned int)a1 dkStorage:(id)a2 loadEmptyDatabaseFromDK:(BOOL)a3;
- (struct _PASDBIterAction_ { BOOL x0; })_populateUpdates:(id)a0 statement:(id)a1 source:(id)a2 weightMultiplier:(double)a3 topicToScoredTopic:(id)a4;
- (id)_generateExportRowIdsWithBatchSize:(unsigned int)a0 isComplete:(BOOL *)a1;
- (BOOL)deleteAllTopicsFromSourcesWithBundleId:(id)a0 documentIds:(id)a1 algorithm:(unsigned long long)a2 atLeastOneTopicRemoved:(BOOL *)a3 deletedCount:(unsigned long long *)a4 error:(id *)a5;
- (id)_updatePreexistingTopicsMatchingTopics:(id)a0 source:(id)a1 algorithm:(unsigned long long)a2 txnWitness:(id)a3;

@end
