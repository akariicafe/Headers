@class AFOpportuneSpeakingModelFeedback, NSMutableDictionary;
@protocol _DKKnowledgeQuerying;

@interface AFOpportuneSpeakingModelFeedbackManager : NSObject {
    AFOpportuneSpeakingModelFeedback *_feedback;
    id<_DKKnowledgeQuerying> _knowledgeStore;
    NSMutableDictionary *_usageEventsBySpeakableId;
}

- (void)save;
- (id)init;
- (void).cxx_destruct;
- (void)loadIfNecessary;
- (id)lastNegativeFeedbackForContact:(id)a0;
- (void)fetchNotificationUsageForSpeakableId:(id)a0 withStartDate:(id)a1 withEndDate:(id)a2 withHandler:(id /* block */)a3;
- (BOOL)interactionDetectedForSpeakableId:(id)a0;
- (void)setLastNegativeFeedbackForContact:(id)a0;

@end
