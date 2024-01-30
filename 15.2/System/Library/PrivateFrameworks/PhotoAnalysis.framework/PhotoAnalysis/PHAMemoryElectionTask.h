@class NSString, PGFeature, CLLocation, NSDate;

@interface PHAMemoryElectionTask : NSObject <PHATask>

@property (retain, nonatomic) NSDate *universalDate;
@property (retain, nonatomic) CLLocation *location;
@property (nonatomic) BOOL userInitiated;
@property (nonatomic) BOOL createTransientMemories;
@property (nonatomic) BOOL forceNotification;
@property (nonatomic) unsigned long long requestedCategory;
@property (nonatomic) unsigned long long requestedTriggerType;
@property (retain, nonatomic) PGFeature *requestedFeature;
@property (retain, nonatomic) NSString *requestedUniqueMemoryIdentifier;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) double period;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_userFeedbackCalculatorWithPhotoLibrary:(id)a0;
+ (void)findMemoriesAndSetNeverFeatureStateIfNeededInPhotoLibrary:(id)a0 loggingConnection:(id)a1;
+ (void)findMemoriesAndSetFeaturedStateIfNeededInPhotoLibrary:(id)a0 loggingConnection:(id)a1;
+ (void)findSuggestionsAndSetFeaturedStateIfNeededInPhotoLibrary:(id)a0 loggingConnection:(id)a1;
+ (id)_filterMemoriesWithAcceptableUserFeedback:(id)a0 allMemoriesFetchResult:(id)a1 photoLibrary:(id)a2;
+ (id)_filterSuggestionsToFeatureBasedOnUserFeedbackForSuggestionsToFeature:(id)a0 sugestionsFetchResult:(id)a1 photoLibrary:(id)a2;
+ (BOOL)reloadWidgetTimelineWithPhotoLibrary:(id)a0 loggingConnection:(id)a1 error:(id *)a2;
+ (void)findAndSetFeaturedStateForMemoriesAndSuggestionsIfNeededInPhotoLibrary:(id)a0 loggingConnection:(id)a1;
+ (void)sendGeneratedMemoriesPipelineAnalyticsEventWithCountsOfMemories:(id)a0 loggingConnection:(id)a1 analytics:(id)a2;
+ (void)sendMemoryTriggersAnalyticsEventWithElectedMemoryType:(id)a0 triggerType:(id)a1 loggingConnection:(id)a2 analytics:(id)a3;
+ (void)sendElectedMemoriesPipelineAnalyticsEventWithCountsOfMemories:(id)a0 loggingConnection:(id)a1 analytics:(id)a2;
+ (void)sendTriggeredMemoriesPipelineAnalyticsEventWithCountsOfMemories:(id)a0 loggingConnection:(id)a1 analytics:(id)a2;
+ (void)sendNotifiedMemoriesPipelineAnalyticsEventWithMemoryType:(id)a0 loggingConnection:(id)a1 analytics:(id)a2;

- (BOOL)runWithGraphManager:(id)a0 progressReporter:(id)a1 error:(id *)a2;
- (void).cxx_destruct;
- (id)init;
- (BOOL)shouldRunWithGraphManager:(id)a0;
- (void)handleNotificationsForMemories:(id)a0 graphManager:(id)a1 userFeedbackCalculator:(id)a2 loggingConnection:(id)a3;
- (void)runWithGraphManager:(id)a0 progressReporter:(id)a1 reply:(id /* block */)a2;
- (id)_recentlySuggestedMoodsFromExistingMemoriesSortedByCreationDate:(id)a0;
- (id)_electorConfigurationForExistingMemories:(id)a0 graphManager:(id)a1 loggingConnection:(id)a2;
- (void)collectMetricsOnExistingMemories:(id)a0 loggingConnection:(id)a1 analytics:(id)a2;
- (void)collectMetricsOnMemoriesInGraphWithWorkingContext:(id)a0 loggingConnection:(id)a1 analytics:(id)a2;
- (void)collectMetricsOnElectedEnrichedMemories:(id)a0 loggingConnection:(id)a1 analytics:(id)a2;

@end
