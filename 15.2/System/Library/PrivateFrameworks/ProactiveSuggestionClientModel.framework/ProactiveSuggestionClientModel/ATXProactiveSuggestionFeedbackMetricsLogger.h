@class PIFeatureFeedback;
@protocol ATXPETEventTracker2Protocol, ATXUniversalBlendingLayerHyperParametersProtocol;

@interface ATXProactiveSuggestionFeedbackMetricsLogger : NSObject

@property (readonly, nonatomic) id<ATXPETEventTracker2Protocol> petEventTracker;
@property (readonly, nonatomic) PIFeatureFeedback *piFeatureFeedbackRecorder;
@property (readonly, nonatomic) id<ATXUniversalBlendingLayerHyperParametersProtocol> hyperParameters;

- (void).cxx_destruct;
- (id)init;
- (id)initWithPETEventTracker:(id)a0 hyperParameters:(id)a1;
- (id)initWithHyperParameters:(id)a0;
- (void)handleNewFeedbackResult:(id)a0 previousSessionId:(id)a1;
- (void)logClientModelUICacheAgeMetricForFeedbackResult:(id)a0;
- (void)logClientModelClientCacheAgeMetricForFeedbackResult:(id)a0;
- (void)logClientModelEngagementMetricForFeedbackResult:(id)a0;
- (void)logSessionEngagementMetricForFeedbackResult:(id)a0;
- (void)logSessionToPFIForFeedbackResult:(id)a0;
- (void)logMetricsWithUIFeedbackQuery:(id)a0;
- (void)logMetricsWithTestResults:(id)a0;

@end
