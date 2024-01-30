@class ATXAppClipSingleSuggestionLogger, NSString, BPSPublisher, ATXHeroAppSingleSuggestionLogger, NSNumber;
@protocol ATXPETEventTracker2Protocol, BMBookmark;

@interface ATXBlendingBiomeStreamLogger : NSObject {
    NSString *_currentABGroup;
}

@property (retain, nonatomic) id<BMBookmark> bookmark;
@property (retain, nonatomic) NSNumber *version;
@property (retain, nonatomic) NSString *path;
@property (retain, nonatomic) BPSPublisher *clientModelPublisher;
@property (retain, nonatomic) BPSPublisher *blendingModelPublisher;
@property (retain, nonatomic) BPSPublisher *uiPublisher;
@property (retain, nonatomic) id<ATXPETEventTracker2Protocol> tracker;
@property (readonly, nonatomic) NSString *abGroup;
@property (retain, nonatomic) ATXHeroAppSingleSuggestionLogger *heroLogger;
@property (retain, nonatomic) ATXAppClipSingleSuggestionLogger *appClipLogger;

+ (BOOL)_fileExistsAtPath:(id)a0;
+ (BOOL)_fileSizeWithinLimits:(id)a0;
+ (id)_dataFromFileHandle:(id)a0;
+ (id)defaultBiomeStreamLogger;
+ (id)biomeStreamLoggerWithPath:(id)a0;
+ (id)biomeStreamLoggerWithPath:(id)a0 tracker:(id)a1;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)_clientModelPublisher;
- (void)logBlendingMetricsFromBiomeStream;
- (id)_uiPublisher;
- (id)initWithBookmark:(id)a0 version:(id)a1 path:(id)a2 tracker:(id)a3;
- (id)mergedSessionEventWithContextPublisher;
- (void)handleClientModelCacheUpdateEvent:(id)a0 loggerContext:(id)a1;
- (void)handleBlendingModelCacheUpdateEvent:(id)a0 loggerContext:(id)a1;
- (void)handleUIEvent:(id)a0 loggerContext:(id)a1;
- (void)persistContext;
- (id)_blendingModelPublisher;
- (id)_timeBasedMergePublisher:(id)a0 withOtherPublishers:(id)a1;
- (id)_loggerContextPublisherWithPublisher:(id)a0;
- (void)_logCacheAgeMetricEventWithCacheAge:(double)a0 clientModelId:(id)a1;
- (void)logBlendingLayerRefreshMetricWithBlendingModelCacheUpdateEvent:(id)a0 loggerContext:(id)a1;
- (void)logLayoutSelectedMetricWithBlendingModelCacheUpdateEvent:(id)a0;
- (void)logClientModelsIncludedInHomeScreenLayoutsMetricWithBlendingModelCacheUpdateEvent:(id)a0;
- (void)logTopOfStackPredictionMetricWithBlendingModelCacheUpdateEvent:(id)a0;
- (void)tryLogSingleSuggestionSessionMetricsWithLoggerContext:(id)a0;
- (void)logWidgetRotationEngagementMetricsIfPossibleWithLoggerContext:(id)a0;
- (void)logScreenUnlockSessionsIfPossibleWithLoggerContext:(id)a0;
- (void)logAnchorModelEngagementMetricsWithCompletedSession:(id)a0;
- (id)_anchorModelEngagementMetricFromAnchorPrediction:(id)a0 proactiveSuggestion:(id)a1 feedbackMetadata:(id)a2 engagementType:(int)a3 consumerSubType:(id)a4 completedSession:(id)a5;
- (void)_logUnaggregatedAnchorModelEngagementMetric:(id)a0;
- (void)_logLayoutSelectedWithSuggestionLayout:(id)a0 consumerSubType:(unsigned char)a1;
- (void)_logClientModelsIncludedInHomeScreenLayoutWithSuggestionLayout:(id)a0 consumerSubType:(unsigned char)a1;
- (unsigned int)_ensureWidgetsInStackBetweenZeroAndTen:(unsigned long long)a0;
- (BOOL)isEqualToATXBlendingBiomeStreamLogger:(id)a0;
- (void)updateCurrentABGroup:(id)a0;

@end
