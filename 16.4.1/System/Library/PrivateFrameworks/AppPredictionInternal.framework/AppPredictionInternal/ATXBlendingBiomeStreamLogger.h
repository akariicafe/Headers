@class ATXAppClipSingleSuggestionLogger, ATXBMBookmark, NSString, BPSPublisher, ATXHeroAppSingleSuggestionLogger;
@protocol ATXPETEventTracker2Protocol, ATXAnchorModelDataStoreWrapperProtocol;

@interface ATXBlendingBiomeStreamLogger : NSObject {
    id<ATXAnchorModelDataStoreWrapperProtocol> _dataStoreWrapper;
    NSString *_currentABGroup;
}

@property (retain, nonatomic) ATXBMBookmark *bookmark;
@property (retain, nonatomic) BPSPublisher *clientModelPublisher;
@property (retain, nonatomic) BPSPublisher *blendingModelPublisher;
@property (retain, nonatomic) BPSPublisher *uiPublisher;
@property (retain, nonatomic) id<ATXPETEventTracker2Protocol> tracker;
@property (readonly, nonatomic) NSString *abGroup;
@property (retain, nonatomic) ATXHeroAppSingleSuggestionLogger *heroLogger;
@property (retain, nonatomic) ATXAppClipSingleSuggestionLogger *appClipLogger;

+ (id)biomeStreamLoggerWithPath:(id)a0 dataStoreWrapper:(id)a1;
+ (id)biomeStreamLoggerWithPath:(id)a0 tracker:(id)a1 dataStoreWrapper:(id)a2;
+ (id)defaultBiomeStreamLogger;

- (id)_timeBasedMergePublisher:(id)a0 withOtherPublishers:(id)a1;
- (void).cxx_destruct;
- (id)_blendingModelPublisher;
- (id)_clientModelPublisher;
- (id)_uiPublisher;
- (void)logTopOfStackPredictionMetricWithBlendingModelCacheUpdateEvent:(id)a0;
- (id)_anchorModelEngagementMetricFromAnchorPrediction:(id)a0 proactiveSuggestion:(id)a1 feedbackMetadata:(id)a2 engagementType:(int)a3 consumerSubType:(id)a4 completedSession:(id)a5;
- (unsigned int)_ensureWidgetsInStackBetweenZeroAndTen:(unsigned long long)a0;
- (void)_logCacheAgeMetricEventWithCacheAge:(double)a0 clientModelId:(id)a1;
- (void)_logClientModelsIncludedInHomeScreenLayoutWithSuggestionLayout:(id)a0 consumerSubType:(unsigned char)a1;
- (void)_logLayoutSelectedWithSpotlightSuggestionLayout:(id)a0 consumerSubType:(unsigned char)a1;
- (void)_logLayoutSelectedWithSuggestionLayout:(id)a0 consumerSubType:(unsigned char)a1;
- (void)_logUnaggregatedAnchorModelEngagementMetric:(id)a0;
- (id)_loggerContextPublisherWithPublisher:(id)a0;
- (void)handleBlendingModelCacheUpdateEvent:(id)a0 loggerContext:(id)a1;
- (void)handleClientModelCacheUpdateEvent:(id)a0 loggerContext:(id)a1;
- (void)handleUIEvent:(id)a0 loggerContext:(id)a1;
- (id)initWithBookmark:(id)a0 tracker:(id)a1 dataStoreWrapper:(id)a2;
- (void)logAnchorModelEngagementMetricsWithCompletedSession:(id)a0;
- (void)logBlendingLayerRefreshMetricWithBlendingModelCacheUpdateEvent:(id)a0 loggerContext:(id)a1;
- (void)logBlendingMetricsFromBiomeStream;
- (void)logClientModelsIncludedInHomeScreenLayoutsMetricWithBlendingModelCacheUpdateEvent:(id)a0;
- (void)logLayoutSelectedMetricWithBlendingModelCacheUpdateEvent:(id)a0;
- (void)logScreenUnlockSessionsIfPossibleWithLoggerContext:(id)a0;
- (void)logWidgetRotationEngagementMetricsIfPossibleWithLoggerContext:(id)a0;
- (id)mergedSessionEventWithContextPublisher;
- (void)persistContext;
- (void)tryLogSingleSuggestionSessionMetricsWithLoggerContext:(id)a0;
- (void)updateCurrentABGroup:(id)a0;

@end
