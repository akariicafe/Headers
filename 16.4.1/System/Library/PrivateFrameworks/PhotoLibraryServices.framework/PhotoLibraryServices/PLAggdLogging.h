@interface PLAggdLogging : NSObject

+ (void)_addDistributionStatisticsOfValues:(id)a0 withPrefix:(id)a1 toDictionary:(id)a2 formatter:(id /* block */)a3;
+ (void)_addFileSystemStatsToLibrarySummaryEvent:(id)a0 withLibraryPathManager:(id)a1;
+ (void)_addLibrarySummaryDataToCollectionIfPresent:(id)a0 fromCPLEventData:(id)a1 forKey:(id)a2;
+ (void)_addOrphanedSceneClassificationsCountToLibrarySummaryEvent:(id)a0 withContext:(id)a1;
+ (void)_addPersistentHistoryStatsToLibrarySummaryEvent:(id)a0 withLibraryPathManager:(id)a1;
+ (void)_addPrefix:(id)a0 toKeysInDictionary:(id)a1 inPrefixedDictionary:(id)a2;
+ (id)_analyticsDescriptionForAssetCount:(long long)a0;
+ (id)_analyticsDescriptionForMediaAge:(double)a0;
+ (void)_configureEnumeratorForLibrarySummaryLogging:(id)a0 cloudPhotoLibraryEnabled:(BOOL)a1 dataForCA:(id)a2;
+ (void)_configureEnumeratorForSyndicationLibrarySummaryLogging:(id)a0 dataForCA:(id)a1;
+ (id)_fetchPersistentHistoryStatsWithLibraryPathManager:(id)a0;
+ (void)configureEnumeratorForHyperionLocalResourcesLogging:(id)a0 cloudPhotoLibraryEnabled:(BOOL)a1 dataForCA:(id)a2 dataForCK:(id)a3;
+ (void)configureEnumeratorForLibrarySizeLogging:(id)a0 cloudPhotoLibraryEnabled:(BOOL)a1 dataForCA:(id)a2 dataForCK:(id)a3;
+ (void)configureEnumeratorForLibrarySummaryForLibraryEnumerator:(id)a0 withSyndicationLibraryEnumerator:(id)a1 cloudPhotoLibraryEnabled:(BOOL)a2 dataForCA:(id)a3;
+ (void)performCMMSummaryLogging:(id)a0 cloudPhotoLibraryEnabled:(BOOL)a1;
+ (void)performLibraryStatisticsLoggingForLibrary:(id)a0 completionHandler:(id /* block */)a1;
+ (void)performMomentsStatisticsLogging:(id)a0;
+ (void)performSlideshowProjectStatisticsLogging:(id)a0;

@end
