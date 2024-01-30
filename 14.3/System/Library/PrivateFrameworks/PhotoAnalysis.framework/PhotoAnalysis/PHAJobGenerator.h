@class PHPhotoLibrary, PHAWorkerHealthMonitor, NSMutableDictionary;

@interface PHAJobGenerator : NSObject {
    BOOL _skippedSomeWorker;
}

@property (readonly, nonatomic) PHPhotoLibrary *library;
@property (readonly, nonatomic) PHAWorkerHealthMonitor *healthMonitor;
@property (readonly, nonatomic) NSMutableDictionary *workInfoReadersByMode;
@property (nonatomic) long long generatedJobCountGoal;
@property (readonly, nonatomic) NSMutableDictionary *countOfJobsGeneratedByWorkerType;
@property BOOL graphIncompatibleWorkersAreInhibited;

+ (long long)maxBatchSize;

- (BOOL)_shouldLoadBalanceSkipForWorkerType:(short)a0;
- (BOOL)_anyWorkerIsLoadBalanceSkipping;
- (void).cxx_destruct;
- (id)initWithHealthMonitor:(id)a0 library:(id)a1;
- (id)_produceAssetAnalysisOrAdditionalJobWithForWorkerType:(id)a0 workInfoReaderMode:(id)a1 scenario:(unsigned long long)a2 allowLoadBalanceSkip:(BOOL)a3 additionalStatesToExclude:(id)a4 askAboutAdditionalJobs:(BOOL)a5 canUseNetwork:(BOOL)a6 defaultsDisabledKey:(id)a7 failureReason:(id *)a8;
- (BOOL)_workerUnavailableForWorkerType:(short)a0 defaultsDisabledKey:(id)a1 unavailableReason:(id *)a2;
- (void)_jumpToGoalJobCountForWorkerType:(short)a0;
- (void)_incrementGeneratedJobCountForWorkerType:(short)a0;
- (id)_workerTypesEligibleForLoadBalanceSkipping;
- (id)generateJobWithCurrentConstraints:(id)a0 workersByType:(id)a1;
- (void)_increaseGoalLevelIfNeeeded;
- (id)_transformWorkInfoByUUIDToWorkInfoByLocalIdentifier:(id)a0;

@end
