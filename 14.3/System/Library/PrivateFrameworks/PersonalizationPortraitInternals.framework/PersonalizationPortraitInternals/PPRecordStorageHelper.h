@class NSString, PPSourceStorage, PPDKStorage, _DKEventStream;

@interface PPRecordStorageHelper : NSObject {
    NSString *_table;
    NSString *_feedbackTable;
    NSString *_clusterIdentifierColumn;
    unsigned int _maxRecords;
    PPDKStorage *_duetStorage;
    _DKEventStream *_duetStream;
    NSString *_lastDuetImportDateKey;
    NSString *_lastDuetDeletionDateKey;
    PPSourceStorage *_sourceStorage;
}

- (BOOL)fixupDKEventsWithDatabase:(id)a0 fixup49995922Table:(id)a1 batchSize:(unsigned int)a2 shouldContinueBlock:(id /* block */)a3 createRecordWithStatement:(id /* block */)a4 eventForRecord:(id /* block */)a5;
- (void)_filterAndRemoveMissingRemoteRecordsFromBatch:(id)a0 database:(id)a1 client:(unsigned char)a2 deletedCount:(unsigned long long *)a3;
- (BOOL)deleteAllRecordsSourcedFromBundleId:(id)a0 groupIds:(id)a1 algorithm:(unsigned int)a2 txnWitness:(id)a3 atLeastOneRecordClusterRemoved:(BOOL *)a4 deletedCount:(unsigned long long *)a5 error:(id *)a6;
- (id)init;
- (void)fixupDKEventsMetadataWithShouldContinueBlock:(id /* block */)a0 database:(id)a1 client:(unsigned char)a2;
- (void)_deleteDKEventsWithRowIdQuery:(id)a0 txnWitness:(id)a1;
- (id)initWithName:(id)a0 table:(id)a1 clusterIdentifierColumn:(id)a2 maxRecords:(unsigned int)a3 duetStorage:(id)a4 duetStream:(id)a5 sourceStorage:(id)a6;
- (void).cxx_destruct;
- (void)disableSyncForBundleIds:(id)a0 txnWitness:(id)a1;
- (id)thirdPartyBundleIdsFromTodayInDatabase:(id)a0 client:(unsigned char)a1;
- (id)createTempRowIdTableForRecordsOlderThanDate:(id)a0 txnWitness:(id)a1;
- (unsigned int)distinctClusterCountInDatabase:(id)a0 client:(unsigned char)a1;
- (id)clusterIdentifiersExistingInDatabaseBeforeDate:(id)a0 client:(unsigned char)a1 date:(id)a2;
- (void)truncateRecordsByDroppingOldestMakingRoomForCount:(unsigned int)a0 txnWitness:(id)a1;
- (void)deleteAllRemoteRecordsMissingInDuetFromDatabase:(id)a0 client:(unsigned char)a1 shouldContinueBlock:(id /* block */)a2;
- (BOOL)deleteAllRecordsSourcedFromBundleId:(id)a0 groupId:(id)a1 olderThanDate:(id)a2 algorithm:(unsigned int)a3 txnWitness:(id)a4 atLeastOneRecordClusterRemoved:(BOOL *)a5 deletedCount:(unsigned long long *)a6 error:(id *)a7;
- (void)importDuetEventsWithLimit:(unsigned int)a0 database:(id)a1 client:(unsigned char)a2 remoteEventsOnly:(BOOL)a3 isComplete:(BOOL *)a4 shouldContinueBlock:(id /* block */)a5 eventImportBlock:(id /* block */)a6;
- (id)createTempRowIdTableForRecordsSourcedFromBundleId:(id)a0 documentIds:(id)a1 txnWitness:(id)a2;
- (id)blobFromUUID:(id)a0;
- (id)_lastDeletionDateWithTransaction:(id)a0;
- (BOOL)_dkEventMetadataFixupHasCompletedWithDatabase:(id)a0 client:(unsigned char)a1;
- (BOOL)deleteAllRecordsWithClusterIdentifier:(id)a0 algorithm:(unsigned int)a1 txnWitness:(id)a2 atLeastOneRecordClusterRemoved:(BOOL *)a3 deletedCount:(unsigned long long *)a4 error:(id *)a5;
- (BOOL)deleteAllRecordsWithClusterIdentifier:(id)a0 txnWitness:(id)a1 atLeastOneRecordClusterRemoved:(BOOL *)a2 deletedCount:(unsigned long long *)a3 error:(id *)a4;
- (id)uuidForStatement:(id)a0 referencingBlobInColumn:(int)a1;
- (BOOL)deleteAllRecordsSourcedFromBundleId:(id)a0 groupIds:(id)a1 txnWitness:(id)a2 atLeastOneRecordClusterRemoved:(BOOL *)a3 deletedCount:(unsigned long long *)a4 error:(id *)a5;
- (BOOL)clearWithDatabase:(id)a0 client:(unsigned char)a1 deletedCount:(unsigned long long *)a2 error:(id *)a3 clearExternalTableReferences:(id /* block */)a4;
- (id /* block */)duetEventDeletionProcessingBlockWithDatabase:(id)a0 client:(unsigned char)a1;
- (BOOL)deleteAllRecordsSourcedFromBundleId:(id)a0 algorithm:(unsigned int)a1 txnWitness:(id)a2 atLeastOneRecordClusterRemoved:(BOOL *)a3 deletedCount:(unsigned long long *)a4 error:(id *)a5;
- (id)_importDuetEventBatch:(id)a0 lastDKImportDate:(id)a1 isComplete:(BOOL *)a2 eventImportBlock:(id /* block */)a3 txnWitness:(id)a4;
- (BOOL)deleteAllRecordsSourcedFromBundleId:(id)a0 txnWitness:(id)a1 atLeastOneRecordClusterRemoved:(BOOL *)a2 deletedCount:(unsigned long long *)a3 error:(id *)a4;
- (BOOL)deleteAllRecordsSourcedFromBundleId:(id)a0 documentIds:(id)a1 algorithm:(unsigned int)a2 txnWitness:(id)a3 atLeastOneRecordClusterRemoved:(BOOL *)a4 deletedCount:(unsigned long long *)a5 error:(id *)a6;
- (id)createTempRowIdTableForRecordsToDropMakingRoomForCount:(unsigned int)a0 txnWitness:(id)a1;
- (void)deleteRecordsWithRowIdsFromTableWithName:(id)a0 txnWitness:(id)a1 atLeastOneRecordClusterRemoved:(BOOL *)a2 deletedCount:(unsigned long long *)a3;
- (BOOL)_cleanUpMalformedMetadataDuetEvents:(id)a0 error:(id *)a1;
- (void)_processTombstoneEventBatch:(id)a0 database:(id)a1 client:(unsigned char)a2 lastTombstoneDate:(id *)a3;
- (BOOL)deleteAllRecordsSourcedFromBundleId:(id)a0 groupId:(id)a1 olderThanDate:(id)a2 txnWitness:(id)a3 atLeastOneRecordClusterRemoved:(BOOL *)a4 deletedCount:(unsigned long long *)a5 error:(id *)a6;
- (void)_deleteRecordsWithRowIdsFromQuery:(id)a0 txnWitness:(id)a1 atLeastOneRecordClusterRemoved:(BOOL *)a2 deletedCount:(unsigned long long *)a3 bind:(id /* block */)a4;
- (BOOL)pruneOrphanedFeedbackCountRecordsWithLimit:(unsigned long long)a0 rowOffset:(unsigned long long)a1 deletedCount:(unsigned long long *)a2 txnWitness:(id)a3 isComplete:(BOOL *)a4;
- (id)createTempRowIdTableForRecordsSourcedFromBundleId:(id)a0 groupId:(id)a1 olderThanDate:(id)a2 txnWitness:(id)a3;
- (BOOL)deleteAllRecordsSourcedFromBundleId:(id)a0 documentIds:(id)a1 txnWitness:(id)a2 atLeastOneRecordClusterRemoved:(BOOL *)a3 deletedCount:(unsigned long long *)a4 error:(id *)a5;
- (BOOL)decayFeedbackWithDatabase:(id)a0 client:(unsigned char)a1 decayRate:(double)a2;
- (id)createTempRowIdTableForRecordsSourcedFromBundleId:(id)a0 groupIds:(id)a1 txnWitness:(id)a2;
- (void)_addEventsSourcedOnLastImportDateToSet:(id)a0 lastDKImportDate:(id *)a1 txnWitness:(id)a2;
- (id)createTempRowIdTableForRecordsSourcedFromBundleId:(id)a0 txnWitness:(id)a1;
- (void)deleteRecordsForRowIds:(id)a0 txnWitness:(id)a1 atLeastOneClusterRemoved:(BOOL *)a2 deletedCount:(unsigned long long *)a3;
- (BOOL)deleteAllRecordsWithName:(id)a0 algorithm:(unsigned int)a1 bundleId:(id)a2 groupId:(id)a3 category:(unsigned int)a4 beforeDate:(id)a5 txnWitness:(id)a6 atLeastOneRecordClusterRemoved:(BOOL *)a7 deletedCount:(unsigned long long *)a8 error:(id *)a9;
- (BOOL)storeFeedback:(id)a0 database:(id)a1 client:(unsigned char)a2 lowercaseItemStrings:(BOOL)a3 limit:(unsigned int)a4;
- (id)lastDonationTimeForSourcesInDatabase:(id)a0 client:(unsigned char)a1 before:(id)a2;
- (struct _PASDBIterAction_ { BOOL x0; })_processRowForDeletionWithStatement:(id)a0 handle:(id)a1;
- (BOOL)deleteFeedbackCountRecordsOlderThanDate:(id)a0 txnWitness:(id)a1;
- (void)_cleanDatabaseOfCloudSyncedEventsWithUUIDs:(id)a0 txnWitness:(id)a1;
- (id)decayedFeedbackCountsForItemString:(id)a0 database:(id)a1 client:(unsigned char)a2;

@end
