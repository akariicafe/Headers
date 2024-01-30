@class HDHealthStoreClient, NSString, HDProfile, NSObject, HDMCProfileExtension;
@protocol OS_dispatch_queue;

@interface HDMCPluginServer : HDStandardTaskServer <HDDiagnosticObject, HDMenstrualCyclesPluginServerInterface> {
    HDProfile *_profile;
    HDMCProfileExtension *_profileExtension;
    HDHealthStoreClient *_client;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)requiredEntitlements;
+ (id)taskIdentifier;

- (void)connectionInvalidated;
- (void).cxx_destruct;
- (id)remoteInterface;
- (id)diagnosticDescription;
- (id)exportedInterface;
- (id)initWithUUID:(id)a0 configuration:(id)a1 client:(id)a2 delegate:(id)a3;
- (void)remote_fetchScheduledNotificationsWithCompletion:(id /* block */)a0;
- (void)remote_saveDaySummaries:(id)a0 completion:(id /* block */)a1;
- (void)remote_saveMenstrualFlow:(long long)a0 dayIndex:(long long)a1 updateAdjacentDays:(BOOL)a2 completion:(id /* block */)a3;
- (void)remote_saveMenstrualFlowByDayIndex:(id)a0 completion:(id /* block */)a1;
- (void)remote_saveLastMenstrualPeriodWithDayIndexRange:(struct { long long x0; long long x1; })a0 completion:(id /* block */)a1;
- (void)remote_savePeriodNotYetStartedWithCompletion:(id /* block */)a0;
- (void)remote_savePeriodNotYetEndedWithCompletion:(id /* block */)a0;
- (void)remote_savePeriodStartedOnDayIndex:(long long)a0 completion:(id /* block */)a1;
- (void)remote_savePeriodStartedOnDayIndex:(long long)a0 endedOnDayIndex:(long long)a1 completion:(id /* block */)a2;
- (void)remote_savePeriodEndedOnDayIndex:(long long)a0 completion:(id /* block */)a1;
- (BOOL)_queue_reconcileSamplesToDeriveDaySummary:(id)a0 error:(id *)a1;
- (void)_triggerNanoSync;
- (BOOL)_queue_saveMenstrualFlowUpdatingAdjacentDays:(long long)a0 dayIndex:(long long)a1 calendarCache:(id)a2 error:(id *)a3;
- (BOOL)_queue_saveMenstrualFlowByDayIndex:(id)a0 calendarCache:(id)a1 error:(id *)a2;
- (BOOL)_queue_saveLastMenstrualPeriodWithDayIndexRange:(struct { long long x0; long long x1; })a0 calendarCache:(id)a1 error:(id *)a2;
- (id)_queue_mostRecentMenstrualFlowSampleWithError:(id *)a0 requiringBeforeDay:(long long)a1 calendarCache:(id)a2;
- (BOOL)_queue_insertSamplesWithClientSource:(id)a0 error:(id *)a1;
- (BOOL)_queue_saveMenstrualFlow:(long long)a0 forEachDayInRange:(struct { long long x0; long long x1; })a1 calendarCache:(id)a2 error:(id *)a3;
- (BOOL)_queue_savePeriodStartedOnDayIndex:(long long)a0 endedOnDayIndex:(long long)a1 calendarCache:(id)a2 error:(id *)a3;
- (BOOL)_queue_updateUnderlyingSamplesToReplaceDaySummary:(id)a0 withDaySummary:(id)a1 calendarCache:(id)a2 error:(id *)a3;
- (BOOL)_queue_updateStartOfCycleMetadataForModifiedDayIndex:(long long)a0 calendarCache:(id)a1 error:(id *)a2;
- (id)_samplesToInsertForUpdateFromDaySummary:(id)a0 toDaySummary:(id)a1 typesToDelete:(id *)a2 calendarCache:(id)a3;
- (BOOL)_queue_deleteSamplesOfType:(id)a0 onDayIndex:(long long)a1 calendarCache:(id)a2 error:(id *)a3;
- (void)_queue_updateLastLoggedInExperienceDate;

@end
