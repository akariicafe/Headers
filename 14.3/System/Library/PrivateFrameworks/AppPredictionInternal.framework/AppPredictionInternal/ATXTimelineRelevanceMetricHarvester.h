@class NSDate, NSUserDefaults, ATXInformationStore;

@interface ATXTimelineRelevanceMetricHarvester : NSObject {
    ATXInformationStore *_informationStore;
    NSUserDefaults *_defaults;
    NSDate *_loggingStartDate;
}

+ (int)PBWidgetFamilyFromCHSWidgetFamily:(long long)a0;
+ (int)PBTimelineEntrySuggestionMappingReasonFrom:(long long)a0;
+ (int)PBTimelineRelevanceAbuseControlOutcomeTypeFrom:(long long)a0;
+ (int)PBTimelineRelevanceEngagementFromATXStackRotationEngagementStatus:(unsigned long long)a0;
+ (int)PBTimelineRelevanceRotationEventTypeFromReason:(id)a0;
+ (int)PBClientModelFromString:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (BOOL)_shouldProcessEvent:(id)a0;
- (void)harvestWithActivity:(id)a0;
- (id)_timeBasedMergePublisher:(id)a0 withOtherPublishers:(id)a1;
- (id)timeOfLatestMetricsSubmission;
- (BOOL)addTimelineRelevanceScoresToTimelineRelevanceContainer:(id)a0 forWidget:(id)a1 withDistributionsLogged:(unsigned long long)a2 updatingDictionary:(id)a3 anonymizeTimestampsRelativeTo:(double)a4;
- (id)fetchStackConfigSummaryForWidgetBundleId:(id)a0 appBundleId:(id)a1 widgetKind:(id)a2 widgetSize:(long long)a3 withPBTimelineRelevanceContainer:(id)a4 anonymizeTimestampsRelativeTo:(double)a5;
- (void)addTimelineRelevanceSuggestionsToContainer:(id)a0 withTimelineEntries:(id)a1 anonymizeTimestampsRelativeTo:(double)a2;
- (void)_addRotationHistoryForWidgetBundleId:(id)a0 appBundleId:(id)a1 widgetKind:(id)a2 widgetSize:(long long)a3 withPBTimelineRelevanceContainer:(id)a4 anonymizeTimestampsRelativeTo:(double)a5;
- (void)addStackConfigSummaryToTimelineRelevanceContainer:(id)a0 withStackConfigSummary:(id)a1;
- (void)updateMetricsSubmissionDateTo:(id)a0;
- (void)_updateTimelineEntriesDictionaryWithEntries:(id)a0 withKey:(id)a1 withScoreEntry:(id)a2;
- (void)_addAbuseControlOutcomesForSuggestionId:(id)a0 withPBTimelineRelevanceSuggestion:(id)a1 anonymizeTimestampsRelativeTo:(double)a2;
- (BOOL)_shouldLogHomeScreenEvent:(id)a0 widgetBundleId:(id)a1 appBundleId:(id)a2 widgetKind:(id)a3 widgetFamily:(long long)a4;
- (void)addRotationsToContainer:(id)a0 withStackRotationSesssion:(id)a1 anonymizeTimestampsRelativeTo:(double)a2;
- (id)initWithInformationStore:(id)a0;

@end
