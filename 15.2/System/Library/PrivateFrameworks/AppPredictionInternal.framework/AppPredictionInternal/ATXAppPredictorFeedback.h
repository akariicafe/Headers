@class NSString, _ATXFeedback, _ATXAggregateLogger, NSObject;
@protocol OS_dispatch_queue, ATXPETEventTracker2Protocol;

@interface ATXAppPredictorFeedback : NSObject <ATXProactiveSuggestionFeedbackListenerProtocol> {
    NSObject<OS_dispatch_queue> *_queue;
    _ATXFeedback *_feedbackInstance;
    _ATXAggregateLogger *_aggregateLogger;
    id<ATXPETEventTracker2Protocol> _petTracker;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_appDictionaryForFeedbackItem:(id)a0;
+ (void)logShownMMMetricsEntryForBundle:(id)a0 anchorType:(long long)a1 consumerSubType:(unsigned char)a2 score:(double)a3;
+ (void)_sessionObjectLoggingForFeedbackItems:(id)a0 engagedBundleId:(id)a1 shownBundleIdIndexes:(id)a2 consumerType:(unsigned long long)a3 consumerSubType:(unsigned char)a4 outcome:(unsigned long long)a5 context:(id)a6;
+ (id)_getLastAppsWithEngagedApp:(id)a0 limit:(int)a1;
+ (void)logEngagedMMMetricsEntryForBundle:(id)a0 anchorType:(long long)a1 consumerSubType:(unsigned char)a2 score:(double)a3;
+ (void)receiveFeedbackForConsumerType:(unsigned long long)a0 consumerSubType:(unsigned char)a1 feedbackItemsForResponse:(id)a2 engagementType:(unsigned long long)a3 engagedBundleId:(id)a4 bundleIdsShown:(id)a5 explicitlyRejectedBundleIds:(id)a6 abGroupIdentifier:(id)a7 context:(id)a8 feedbackInstance:(id)a9 aggregateLogger:(id)a10 petTracker:(id)a11;
+ (id)constructSessionLogDictionaryWithFeedbackItems:(id)a0 engagedBundleId:(id)a1 shownBundleIdIndexes:(id)a2 consumerType:(unsigned long long)a3 consumerSubType:(unsigned char)a4 outcome:(unsigned long long)a5 annotation:(id)a6 context:(id)a7;
+ (id)constructFeatureDictionaryWithFeedbackItems:(id)a0 engagedItem:(id)a1 shownItemIndexes:(id)a2 consumerType:(unsigned long long)a3 histogramBundleIdTable:(id)a4;
+ (unsigned long long)_outcomeForEngagementType:(unsigned long long)a0;
+ (double)_bucketize:(double)a0 bucketSize:(double)a1;
+ (void)checkFeedbackContainsUninstalledApps:(id)a0 consumerSubType:(unsigned char)a1 aggregateLogger:(id)a2;
+ (id)_getLastAppIntentsWithEngagedAction:(id)a0 limit:(int)a1;
+ (void)receiveFeedbackForConsumerType:(unsigned long long)a0 consumerSubType:(unsigned char)a1 feedbackItemsForResponse:(id)a2 engagementType:(unsigned long long)a3 engagedBundleId:(id)a4 bundleIdsShown:(id)a5 explicitlyRejectedBundleIds:(id)a6 abGroupIdentifier:(id)a7 context:(id)a8;
+ (long long)getEngagedItemIndexWithFeedbackItems:(id)a0 engagedItem:(id)a1;
+ (void)_tryLogInstalledAppClipSessionEngagementMetricWithConsumerSubType:(unsigned char)a0 engagedBundleId:(id)a1 bundleIdsShown:(id)a2 explicitlyRejectedBundleIds:(id)a3 abGroupIdentifier:(id)a4 tracker:(id)a5;

- (unsigned long long)_engagementTypeFromUIFeedbackResult:(id)a0 engagedSuggestion:(id)a1 engagedBundleId:(id)a2 shownBundleIds:(id)a3;
- (void)receiveUIFeedbackResult:(id)a0;
- (void)_syncForTests;
- (void).cxx_destruct;
- (id)initWithPredictionContextBuilder:(id)a0 feedbackInstance:(id)a1 aggregateLogger:(id)a2 petTracker:(id)a3;
- (id)init;
- (id)clientModelIds;
- (id)_engagedBundleIdFromEngagedSuggestion:(id)a0 feedbackSession:(id)a1;
- (unsigned long long)_engagementTypeFromEngagedSuggestion:(id)a0 engagedBundleId:(id)a1 shownBundleIds:(id)a2 didSearchDuringSession:(BOOL)a3;
- (id)_bundleIdsFromProactiveSuggestions:(id)a0;

@end
