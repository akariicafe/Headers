@class HDPeriodicActivity, NSString, HKObserverSet, NSObject, HDDaemon;
@protocol OS_dispatch_queue, HDAnalyticsSubmissionCoordinatorDelegate;

@interface HDAnalyticsSubmissionCoordinator : NSObject <HDPeriodicActivityDelegate, HDProfileReadyObserver> {
    HDDaemon *_daemon;
    HDPeriodicActivity *_periodicActivity;
    NSObject<OS_dispatch_queue> *_queue;
    HKObserverSet<HDAnalyticsSubmissionCoordinatorDelegate> *_observers;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDaemon:(id)a0;
- (void)performPeriodicActivity:(id)a0 completion:(id /* block */)a1;
- (void)cloudCache_reportCacheSyncAnalyticsForPipeline:(id)a0 operationCount:(long long)a1;
- (BOOL)periodicActivityRequiresProtectedData:(id)a0;
- (void)periodicActivity:(id)a0 configureXPCActivityCriteria:(id)a1;
- (void)tinker_syncFailedWithError:(id)a0 configuration:(id)a1;
- (void)addObserver:(id)a0 queue:(id)a1;
- (void)database_reportHFDCorruptionWithFailureType:(long long)a0 code:(int)a1 description:(id)a2 profile:(id)a3 initialRebuildStage:(int)a4 newRebuildStage:(int)a5;
- (void)profileDidBecomeReady:(id)a0;
- (void)database_reportJournalEntryInsertedForJournal:(long long)a0 entryClass:(id)a1 entrySize:(id)a2;
- (void)database_reportSQLiteCorruptionWithExtendedErrorCode:(int)a0 type:(long long)a1 profile:(id)a2 description:(id)a3 sqlStatement:(id)a4 failedObliterationAttempt:(BOOL)a5;
- (void)nanoSync_reportSyncFailureWithReason:(id)a0 options:(unsigned long long)a1 duration:(double)a2 profileType:(long long)a3 error:(id)a4;
- (void)tinker_pairingDidFinishForConfiguration:(id)a0 duration:(double)a1;
- (void)cloudCache_reportWeeklyAnalyticsWithCacheValidation:(id)a0;
- (void)cloudSync_operationFinished:(id)a0;
- (void)healthService_reportServiceTypeRemoved:(id)a0 profileType:(long long)a1;
- (void)workout_reportGymKitWorkoutWithFitnessMachineType:(id)a0 manufacturer:(id)a1 timeToBeginExperience:(long long)a2 workoutEndError:(long long)a3;
- (void)removeObserver:(id)a0;
- (void)cloudCache_reportCacheDiscrepancyForOperation:(id)a0 reason:(id)a1 containerIdentifier:(id)a2 databaseScope:(id)a3 error:(id)a4;
- (void)sendEvent:(id)a0 block:(id /* block */)a1;
- (void)unitTest_fireDailyAnalyticsActivityWithCompletion:(id /* block */)a0;
- (void)summarySharing_reportSetupOperation:(id)a0 success:(BOOL)a1 error:(id)a2;
- (void)cloudCache_reportDailyCacheAnalyticsWithPushTargets:(long long)a0 pullTargets:(long long)a1 sharedDBSummarySharingZones:(long long)a2 privateDBSummarySharingZones:(long long)a3 unifiedZoneInSharedDB:(BOOL)a4 unifiedZoneInPrivateDB:(BOOL)a5;
- (void)workout_reportWorkoutCondenserEventWithReason:(long long)a0 batchSize:(long long)a1 hasWatchSource:(BOOL)a2 duration:(double)a3 success:(BOOL)a4 error:(id)a5 workoutsToCondense:(long long)a6 workoutsToRecondense:(long long)a7 condensedWorkouts:(long long)a8 processedWorkouts:(long long)a9 createdSeries:(long long)a10 deletedSamples:(long long)a11;
- (void)heartRate_reportDailyRestingHeartRate:(double)a0 sedentaryHeartRateCount:(int)a1 filteredSedentaryHeartRateCount:(int)a2 profileType:(long long)a3;
- (void)heartDaily_reportHeartDailyAnalytics:(id)a0;
- (void)cloudSync_reportPeriodicSyncStartForType:(long long)a0;
- (BOOL)isImprovedHealthAndActivityEnabled;
- (void)tinker_syncFinishedWithLatency:(id)a0 timeSinceLastSuccessfullPull:(id)a1 configuration:(id)a2;
- (void)cloudSync_reportPipelineStarted:(id)a0;
- (void)cloudSync_reportOwnershipChangeForProfile:(id)a0 reason:(id)a1;
- (void)cloudSync_reportPipelineFailed:(id)a0 error:(id)a1;
- (void)cloudSync_reportPipelineFinished:(id)a0;
- (void)healthService_reportServiceTypeAdded:(id)a0 profileType:(long long)a1;
- (void).cxx_destruct;
- (void)medicalID_reportHasBeenSetForProfileType:(long long)a0;
- (void)cloudSync_reportRestoreForProfile:(id)a0 startDate:(id)a1 endDate:(id)a2 duration:(double)a3 finishedJournalMerge:(BOOL)a4;
- (void)summarySharing_reportDailyAnalytics:(id)a0 activeWatchProductType:(id)a1 age:(long long)a2 sex:(id)a3;
- (void)authorization_reportAuthRequestsFromBundleIdentifier:(id)a0 isExtension:(BOOL)a1 isAppleWatch:(BOOL)a2 shouldPrompt:(BOOL)a3;
- (void)cloudSync_reportPeriodicSyncFailureWithError:(id)a0 duration:(double)a1 type:(long long)a2;
- (void)database_reportHFDRebuildWithDuration:(double)a0 didDecompressArchivedHFD:(BOOL)a1 didOpenArchivedHFD:(BOOL)a2 didOpenMovedAsideHFD:(BOOL)a3 additionalAnalytics:(id)a4;
- (void)cloudSync_operationFailed:(id)a0 error:(id)a1;
- (void)cloudSync_reportPeriodicSyncSuccessAfterDuration:(double)a0 type:(long long)a1;
- (void)database_reportUnprotectedDatabaseIdentifier:(id)a0 doesNotMatchProtectedDatabaseIdentifier:(id)a1;
- (void)nanoSync_reportSyncSuccessWithReason:(id)a0 options:(unsigned long long)a1 duration:(double)a2 profileType:(long long)a3;
- (void)healthService_reportCountForAllServices:(id)a0 profileType:(long long)a1;
- (void)tinker_pairingDidFailWithError:(id)a0 configuration:(id)a1 duration:(double)a2 stage:(long long)a3;
- (void)database_reportCachedQueryEvent:(id)a0 cacheHits:(long long)a1 cacheMisses:(long long)a2 estimatedTotalBuckets:(unsigned long long)a3;
- (void)healthService_reportServiceType:(id)a0 duration:(double)a1 profileType:(long long)a2;
- (void)medicalID_reportHasBeenDeletedForProfileType:(long long)a0;
- (void)authorization_reportAuthRequestPromptedForBundleIdentifer:(id)a0 profileType:(long long)a1;
- (void)nanoSync_reportResponseStatusCode:(int)a0 profileType:(long long)a1;
- (void)cloudCache_reportCacheFetchAndUpdateAnalyticsForPipeline:(id)a0 changedZonesCount:(long long)a1 deletedZonesCount:(long long)a2 changedRecordsCount:(long long)a3 deletedRecordsCount:(long long)a4;
- (void)cloudSync_reportDailyAnalyticForProfileType:(long long)a0 syncEnabled:(BOOL)a1 syncDisabledError:(id)a2 primaryContainer:(id)a3 restoreComplete:(BOOL)a4 timeSinceRestoreStart:(id)a5 journalSize:(id)a6 timeSinceLastSuccessfulPull:(id)a7 timeSinceLastSuccessfulPush:(id)a8 timeSinceLastPushForwardProgress:(id)a9 storeCount:(long long)a10 zoneCount:(long long)a11 hasUnifiedZone:(BOOL)a12 hasMasterZone:(BOOL)a13 hasMedicalID:(BOOL)a14 errorRequiringUserAction:(id)a15;
- (BOOL)isEventUsed:(id)a0;
- (void)medicalID_dailyReport:(id)a0 sosContactStatus:(BOOL)a1 profileType:(long long)a2;
- (void)cloudSync_operationStarted:(id)a0;
- (void)cloudSync_reportMissingManateeIdentityDuringFetchInContainer:(id)a0 zoneName:(id)a1 databaseScope:(long long)a2;
- (void)cloudSync_reportOwnershipChangeForMissingManateeIdentityDuringPush;
- (void)database_reportDatabaseMigrationStatus:(long long)a0 database:(id)a1 schemaVersion:(long long)a2 error:(id)a3 profileType:(long long)a4;
- (void)cloudSync_reportRebaseTriggeredByDeletionByUser:(BOOL)a0;

@end
