@class NSString, NSArray;

@interface FPDConfigurationStore : NSObject

@property (class, readonly, nonatomic) FPDConfigurationStore *defaultStore;

@property (readonly, nonatomic) NSString *trialTreatment;
@property (readonly, nonatomic) NSString *trialExperiment;
@property (readonly, nonatomic) BOOL trialClientLoadedSuccessfully;
@property (readonly, nonatomic) int trialTestFactor;
@property (readonly, nonatomic) int hardConcurrentOperationLimit;
@property (readonly, nonatomic) int softConcurrentOperationLimit;
@property (readonly, nonatomic) int hardConcurrentContentUpdateLimit;
@property (readonly, nonatomic) int softConcurrentContentUpdateLimit;
@property (readonly, nonatomic) int hardConcurrentProvideFileLimit;
@property (readonly, nonatomic) int softConcurrentProvideFileLimit;
@property (readonly, nonatomic) NSArray *userPackageExtensions;
@property (readonly, nonatomic) BOOL hasUpcallExecutionTimeLimits;
@property (readonly, nonatomic) double upcallExecutionTimeLimitBase;
@property (readonly, nonatomic) double upcallExecutionTimeLimitPerKiloByte;
@property (readonly, nonatomic) double upcallExcutionTimeLimitStaleProgress;
@property (readonly, nonatomic) double upcallExcutionTimeLimitProgressCancellationGracePeriod;
@property (readonly, nonatomic) int errorGenerationUpdateSeconds;
@property (readonly, nonatomic) int lowPrioritySignalProviderChangesIntervalSeconds;
@property (readonly, nonatomic) int vfsDirectoryListerLimit;
@property (readonly, nonatomic) int maxFSEventQueueSize;
@property (readonly, nonatomic) int fseventProcessBatchSize;
@property (readonly, nonatomic) double fseventsAggregationDelay;
@property (readonly, nonatomic) int maxLookupDepth;
@property (readonly, nonatomic) int sqlDatabaseFlushIntervalMilliseconds;
@property (readonly, nonatomic) int sqlDatabaseVacuumBatchSize;
@property (readonly, nonatomic) double sqlDatabaseBatchDelay;
@property (readonly, nonatomic) int sqlDatabaseBatchChangeCount;
@property (readonly, nonatomic) int sqlDatabaseOnNextDurableFlushTriggerThreshold;
@property (readonly, nonatomic) int sqlDatabaseStatementCacheMaxCount;
@property (readonly, nonatomic) int pendingSetMaxItemCount;
@property (readonly, nonatomic) double pendingSetRefreshInterval;
@property (readonly, nonatomic) int pendingSetRegatherThreshold;
@property (readonly, nonatomic) int perfTelemetrySubSamplingPercentage;
@property (readonly, nonatomic) BOOL hangingDownloadCancellationPromptEnabled;
@property (readonly, nonatomic) int maxFPCKDatabaseChecks;

+ (void)__test_only_reloadDefaultStore;

- (id)init;
- (void).cxx_destruct;

@end
