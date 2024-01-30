@class NSMutableArray;
@protocol _DKKnowledgeQuerying, _DKKnowledgeSaving, _DKKnowledgeDeleting;

@interface LighthouseShadowEvaluator : NSObject <ODCurarePersonalizationProtocol, ODCurareEvaluatorProtocol, ODCurareDataProviderProtocol>

@property (retain) id<_DKKnowledgeQuerying, _DKKnowledgeSaving, _DKKnowledgeDeleting> knowledgeStore;
@property (retain, nonatomic) NSMutableArray *evaluationResults;

- (void).cxx_destruct;
- (id)init;
- (void)stop;
- (id)evaluateWithModel:(id)a0;
- (id)personalizeModel:(id)a0;
- (id)getEvaluationResults;
- (BOOL)performSiriEvaluationTask:(id *)a0;
- (id)generateCandidateModels:(id)a0 coreDuetStreamIdentifier:(id)a1;
- (BOOL)isSuccess:(id)a0 intentType:(id)a1 intentResultType:(id)a2;
- (id)fetchSiriIntentEvents:(id)a0;
- (BOOL)findInteraction:(id)a0;
- (id)getTaskConfigurationFromInteractionID:(id)a0;
- (BOOL)evaluateTaskSuccess:(id)a0 finalInteraction:(id)a1;
- (long long)getIntentEventType:(id)a0;
- (id)evaluateAbandonedSiriTasks:(id)a0;
- (id)evaluateAppLaunchedTasks:(id)a0;
- (id)getFeatureDataFromInteraction:(id)a0 interactionID:(id)a1;

@end
