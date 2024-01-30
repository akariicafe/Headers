@class CNContactStore, _PSRuleRankingMLModel, _CDInteractionStore, _PSConfidenceModelForSharing, BMBehaviorRetriever, NSUserDefaults;
@protocol _DKKnowledgeQuerying;

@interface _PSRuleOverlapFeedback : NSObject

@property (readonly, nonatomic) BMBehaviorRetriever *behaviorRetriever;
@property (retain, nonatomic) _PSConfidenceModelForSharing *confidenceModelForSharing;
@property (retain, nonatomic) _CDInteractionStore *interactionStore;
@property (retain, nonatomic) id<_DKKnowledgeQuerying> knowledgeStore;
@property (retain, nonatomic) CNContactStore *contactStore;
@property (retain, nonatomic) NSUserDefaults *ruleOverlapFeedbackDefaults;
@property (retain) _PSRuleRankingMLModel *ruleRankingModel;

- (void).cxx_destruct;
- (id)init;
- (int)bucketedValue:(int)a0;
- (id)sharesheetFeedbackEventsSinceDate:(id)a0;
- (id)interactionStoreEventsSinceDate:(id)a0;
- (id)matchFeedbackEvent:(id)a0 WithInteractions:(id)a1;
- (void)loggingForKnowledgeStoreEvent:(id)a0 WithMatchingInteraction:(id)a1;
- (id)loggingTrainDataForContactFillerModel:(id)a0 withMatchingInteraction:(id)a1 interactionRecipients:(id)a2 ruleRankingModel:(id)a3 contactPropertyCache:(id)a4 interactionCache:(id)a5;
- (void)modelAccuracyLogging:(id)a0 WithMatchingInteraction:(id)a1;
- (id)getSessionID;
- (void)writeRecordObjcWithData:(id)a0;
- (id)contextItemsFromEvent:(id)a0;
- (void)scoreRanking:(long long)a0 forModelKey:(id)a1;
- (BOOL)wasInteractionAmongSuggestLess:(id)a0;
- (id)constantFeaturesFromContextItems:(id)a0;
- (id)constantPETFeaturesFromContextItems:(id)a0;
- (id)feedbackPayloadForRule:(id)a0 ForInteraction:(id)a1 ForContextItems:(id)a2 WithConstantFeatures:(id)a3;
- (BOOL)targetAppPredictedCorrectlyByRule:(id)a0 bundleId:(id)a1;
- (id)feedbackPETPayloadForRule:(id)a0 ForInteraction:(id)a1 ForContextItems:(id)a2 WithConstantFeatures:(id)a3;
- (void)reviewLastDayOfShares;

@end
