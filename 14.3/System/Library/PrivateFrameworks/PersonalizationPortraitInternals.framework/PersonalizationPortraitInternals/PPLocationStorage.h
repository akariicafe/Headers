@class PPRecordStorageHelper, PPSQLDatabase, PPDKStorage, PPSourceStorage;

@interface PPLocationStorage : NSObject {
    PPSQLDatabase *_db;
    PPDKStorage *_dkStorage;
    id _deletionObserver;
    PPRecordStorageHelper *_storageHelper;
    PPSourceStorage *_sourceStorage;
}

- (BOOL)deleteAllLocationsFromSourcesWithBundleId:(id)a0 atLeastOneLocationRemoved:(BOOL *)a1 deletedCount:(unsigned long long *)a2 error:(id *)a3;
- (id)init;
- (id)_areasOfInterestForLocationRecordId:(long long)a0 txnWitness:(id)a1;
- (void).cxx_destruct;
- (BOOL)iterLocationRecordsWithQuery:(id)a0 error:(id *)a1 block:(id /* block */)a2;
- (void)_insertAreasOfInterest:(id)a0 forLocationWithRowId:(long long)a1 txnWitness:(id)a2;
- (BOOL)decayFeedbackCountsWithDecayRate:(double)a0 shouldContinueBlock:(id /* block */)a1;
- (void)dealloc;
- (BOOL)_donateLocations:(id)a0 source:(id)a1 contextualNamedEntities:(id)a2 algorithm:(unsigned short)a3 cloudSync:(BOOL)a4 decayRate:(double)a5 txnWitness:(id)a6;
- (id)decayedFeedbackCountsForClusterIdentifier:(id)a0;
- (id)sourceStatsWithExcludedAlgorithms:(id)a0;
- (id)initWithDatabase:(id)a0;
- (BOOL)deleteAllLocationsOlderThanDate:(id)a0 atLeastOneLocationRemoved:(BOOL *)a1 deletedCount:(unsigned long long *)a2 error:(id *)a3;
- (BOOL)deleteAllLocationFeedbackCountRecordsOlderThanDate:(id)a0;
- (BOOL)donateLocationFeedback:(id)a0;
- (void)_insertContextualNamedEntities:(id)a0 forLocationWithRowId:(long long)a1 txnWitness:(id)a2;
- (BOOL)_shouldSuppressRepeatedImpressions:(id)a0;
- (BOOL)deleteAllLocationsFromSourcesWithBundleId:(id)a0 documentIds:(id)a1 atLeastOneLocationRemoved:(BOOL *)a2 deletedCount:(unsigned long long *)a3 error:(id *)a4;
- (void)_deleteLocationsWithRowIdTableWithName:(id)a0 txnWitness:(id)a1 atLeastOneLocationRemoved:(BOOL *)a2 deletedCount:(unsigned long long *)a3;
- (void)_truncateRecordsByDroppingOldestMakingRoomForCount:(unsigned int)a0 txnWitness:(id)a1;
- (BOOL)clearWithError:(id *)a0 deletedCount:(unsigned long long *)a1;
- (id)_placemarkFromRecordQueryRowWithStatement:(id)a0 columnMapping:(id)a1 txnWitness:(id)a2;
- (id)tempTableForSourceIdsExcludedAlgorithms:(id)a0 txnWitness:(id)a1;
- (BOOL)deleteAllLocationsFromSourcesWithBundleId:(id)a0 groupId:(id)a1 olderThanDate:(id)a2 atLeastOneLocationRemoved:(BOOL *)a3 deletedCount:(unsigned long long *)a4 error:(id *)a5;
- (id)lastDonationTimeForSourcesBeforeDate:(id)a0;
- (BOOL)pruneOrphanedLocationFeedbackCountRecordsWithLimit:(unsigned long long)a0 rowOffset:(unsigned long long)a1 deletedCount:(unsigned long long *)a2 isComplete:(BOOL *)a3;
- (id)thirdPartyBundleIdsFromToday;
- (id)initWithDatabase:(id)a0 maxRecords:(unsigned int)a1 dkStorage:(id)a2 loadEmptyDatabaseFromDK:(BOOL)a3;
- (BOOL)deleteAllLocationsFromSourcesWithBundleId:(id)a0 groupIds:(id)a1 atLeastOneLocationRemoved:(BOOL *)a2 deletedCount:(unsigned long long *)a3 error:(id *)a4;
- (id)_contextualNamedEntitiesForLocationRecordId:(long long)a0 txnWitness:(id)a1;
- (BOOL)donateLocations:(id)a0 source:(id)a1 contextualNamedEntities:(id)a2 algorithm:(unsigned short)a3 cloudSync:(BOOL)a4 decayRate:(double)a5 error:(id *)a6;

@end
