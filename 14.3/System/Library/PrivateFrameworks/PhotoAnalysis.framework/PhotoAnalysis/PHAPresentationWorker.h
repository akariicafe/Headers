@class NSObject;
@protocol OS_os_log, OS_dispatch_queue;

@interface PHAPresentationWorker : PHAWorker {
    NSObject<OS_dispatch_queue> *_backgroundTaskQueue;
}

@property (readonly, nonatomic) NSObject<OS_os_log> *loggingConnection;

+ (id)_dateFormatter;
+ (id)_genderDescriptionFromGivenName:(id)a0;
+ (short)workerType;
+ (id)_domainErrorWithCode:(long long)a0;
+ (id)_meContact;
+ (BOOL)persistsState;
+ (id)_ageRangeDescriptionFromBirthday:(id)a0;
+ (void)_findMemoriesAndSetFeaturedStateIfNeededInPhotoLibrary:(id)a0;
+ (void)_findSuggestionsAndSetFeaturedStateIfNeededInPhotoLibrary:(id)a0;
+ (void)configureXPCConnection:(id)a0;
+ (void)_findAndSetFeaturedStateForMemoriesAndSuggestionsIfNeededInPhotoLibrary:(id)a0;
+ (id)_fetchDemographicsSummary;
+ (BOOL)reloadWidgetTimelineWithPhotoLibrary:(id)a0 error:(id *)a1;
+ (id)_fetchLibrarySummaryForPhotoLibrary:(id)a0;
+ (long long)applicationDataFolderIdentifier;

- (BOOL)stopAnalysisJob:(id)a0 error:(id *)a1;
- (void)cooldown;
- (id)initWithPhotoAnalysisManager:(id)a0 dataLoader:(id)a1;
- (BOOL)_hasAdditionalJobForMediaSampleReportingInScenario:(unsigned long long)a0;
- (BOOL)_didExceedTimeInterval:(double)a0 forBackgroundJobUserDefaultsKey:(id)a1;
- (void).cxx_destruct;
- (BOOL)_shouldAllowBackgroundActivityWithDescription:(id)a0;
- (void)reset;
- (id)cacheCPAnalyticsPropertiesJobWithScenario:(unsigned long long)a0 completionHandler:(id /* block */)a1;
- (void)warmupWithProgressBlock:(id /* block */)a0;
- (void)reloadWidgetTimelineWithContext:(id)a0 reply:(id /* block */)a1;
- (id)mediaSampleReportingJobWithScenario:(unsigned long long)a0 completionHandler:(id /* block */)a1;
- (id)nextAdditionalJobWithScenario:(unsigned long long)a0 requestReason:(unsigned long long)a1;
- (BOOL)_hasAdditionalJobForCachingCPAnalyticsPropertiesInScenario:(unsigned long long)a0;
- (BOOL)cacheCPAnalyticsPropertiesWithError:(id *)a0;
- (BOOL)recordFeatureUsageFromCounts:(id)a0 error:(id *)a1;
- (id)_buildPropertyCache;
- (id)_libraryScopedWorkerFeaturesUsageWithError:(id *)a0;
- (id)featuresUsageReportingJobWithScenario:(unsigned long long)a0 completionHandler:(id /* block */)a1;
- (BOOL)canRunWhenGraphIsLoaded;
- (void)cacheCPAnalyticsPropertiesWithContext:(id)a0 reply:(id /* block */)a1;
- (void)_reportMediaSampleWithOptions:(id)a0 context:(id)a1 progressHandler:(id /* block */)a2 completionHandler:(id /* block */)a3;
- (void)recordFeatureUsageFromCounts:(id)a0 context:(id)a1 reply:(id /* block */)a2;
- (id)_libraryScopedWorkerFeaturesUsageURL;
- (BOOL)startAnalysisJob:(id)a0 error:(id *)a1;
- (BOOL)_hasAdditionalJobForFeaturesUsageReportingInScenario:(unsigned long long)a0;
- (void)reportFeaturesUsageWithOptions:(id)a0 context:(id)a1 progressHandler:(id /* block */)a2 completionHandler:(id /* block */)a3;
- (void)cacheCPAnalyticsPropertiesWithOptions:(id)a0 context:(id)a1 progressHandler:(id /* block */)a2 completionHandler:(id /* block */)a3;
- (BOOL)hasAdditionalJobsForScenario:(unsigned long long)a0 requestReason:(unsigned long long)a1;

@end
