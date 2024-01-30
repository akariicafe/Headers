@class PPNamedEntityStore, NSString, PPTopicStore, PPSpotlightSessionState;

@interface PPUniversalSearchFeedbackListener : NSObject <SFFeedbackListener> {
    PPNamedEntityStore *_entityStore;
    PPTopicStore *_topicStore;
    PPSpotlightSessionState *_sessionState;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)reportFeedback:(id)a0 queryId:(long long)a1;
- (id)protectionClassForBundleId:(id)a0;
- (void)sendFeedbackWithEngagementStrings:(id)a0 rejectionStrings:(id)a1 store:(id)a2;
- (void)sendMetricsFeedback:(unsigned long long)a0 engagedCSSICount:(unsigned long long)a1;
- (id)init;
- (id)fetchFeedbackCSSIParsedResults:(id)a0 feedbackBundleId:(id)a1 queryId:(long long)a2;
- (void).cxx_destruct;

@end
