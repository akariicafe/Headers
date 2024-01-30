@interface PLAggdLogging : NSObject

+ (void)performMomentsStatisticsLogging:(id)a0;
+ (void)performCollectionsStaticsLogging:(id)a0;
+ (void)performYearsStaticsLogging:(id)a0;
+ (void)performSlideshowProjectStatisticsLogging:(id)a0;
+ (void)_addDistributionStatisticsOfValues:(id)a0 withPrefix:(id)a1 toDictionary:(id)a2 formatter:(id /* block */)a3;
+ (id)_analyticsDescriptionForMediaAge:(double)a0;
+ (id)_analyticsDescriptionForAssetCount:(long long)a0;
+ (void)performAnalysisStateLogging:(id)a0 library:(id)a1;
+ (void)_addPrefix:(id)a0 toKeysInDictionary:(id)a1 inPrefixedDictionary:(id)a2;
+ (id)_performMedianCalculation:(id)a0;
+ (BOOL)performHyperionLocalResourcesLoggingForContext:(id)a0 cloudPhotoLibraryEnabled:(BOOL)a1 prefixAggdDataForCK:(id)a2 dataForCA:(id)a3;
+ (double)_getDateMedian:(id)a0 fromStartDate:(id)a1 forCameraCapture:(BOOL)a2;
+ (void)performLibrarySummaryLogging:(id)a0;
+ (void)_addLibrarySummaryDataToCollectionIfPresent:(id)a0 fromCPLEventData:(id)a1 forKey:(id)a2;
+ (void)performPersistentHistorySummaryLogging:(id)a0;
+ (void)performCMMSummaryLogging:(id)a0 cloudPhotoLibraryEnabled:(BOOL)a1;
+ (void)performLibraryStatisticsLoggingForLibrary:(id)a0 completionHandler:(id /* block */)a1;

@end
