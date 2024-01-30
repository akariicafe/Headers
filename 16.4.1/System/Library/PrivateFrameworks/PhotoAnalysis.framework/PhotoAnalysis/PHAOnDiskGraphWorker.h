@interface PHAOnDiskGraphWorker : PHAWorker <PLPhotoAnalysisGraphServiceOnDiskProtocol>

+ (short)workerType;
+ (BOOL)persistsState;
+ (long long)applicationDataFolderIdentifier;

- (void)requestOnDiskRelationshipInferencesForPersonLocalIdentifiers:(id)a0 context:(id)a1 reply:(id /* block */)a2;
- (BOOL)startAnalysisJob:(id)a0 error:(id *)a1;
- (void)cooldown;
- (id)nextAdditionalJobWithScenario:(unsigned long long)a0 requestReason:(unsigned long long)a1;
- (BOOL)stopAnalysisJob:(id)a0 error:(id *)a1;
- (void)warmupWithProgressBlock:(id /* block */)a0;
- (void)requestOnDiskSuggestedRecipientsForAssetLocalIdentifiers:(id)a0 momentLocalIdentifiers:(id)a1 options:(id)a2 context:(id)a3 reply:(id /* block */)a4;
- (void)requestOnDiskContactInferencesForPersonLocalIdentifiers:(id)a0 options:(id)a1 context:(id)a2 reply:(id /* block */)a3;
- (void)requestOnDiskSuggestedPersonsWithOptions:(id)a0 context:(id)a1 reply:(id /* block */)a2;
- (id)graphCurrentlyUnavailableError;
- (BOOL)hasAdditionalJobsForScenario:(unsigned long long)a0 requestReason:(unsigned long long)a1;
- (void)reset;
- (void)requestOnDiskSuggestedContributionsForAssetsMetadata:(id)a0 options:(id)a1 context:(id)a2 reply:(id /* block */)a3;

@end
