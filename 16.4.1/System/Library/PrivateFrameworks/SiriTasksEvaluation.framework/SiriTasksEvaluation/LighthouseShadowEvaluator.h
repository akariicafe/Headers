@class NSMutableArray, NSMutableDictionary;
@protocol _DKKnowledgeQuerying, _DKKnowledgeSaving, _DKKnowledgeDeleting;

@interface LighthouseShadowEvaluator : NSObject <ODCurarePersonalizationProtocol, ODCurareEvaluatorProtocol, ODCurareDataProviderProtocol>

@property (retain) id<_DKKnowledgeQuerying, _DKKnowledgeSaving, _DKKnowledgeDeleting> knowledgeStore;
@property (retain, nonatomic) NSMutableArray *evaluationResults;
@property (retain, nonatomic) NSMutableDictionary *jsonSELFResults;

- (id)init;
- (void).cxx_destruct;
- (id)getDateString:(id)a0;
- (id)evaluateWithModel:(id)a0;
- (id)personalizeModel:(id)a0;
- (id)evaluateAbandonedSiriTasks:(id)a0;
- (id)evaluateAppLaunchedTasks:(id)a0 startTime:(id)a1;
- (BOOL)evaluateTaskSuccess:(id)a0 finalInteraction:(id)a1;
- (id)evaluateWithPSEBasedModel:(id)a0;
- (id)fetchSiriIntentEvents:(id)a0;
- (BOOL)findInteraction:(id)a0;
- (id)generateCandidateModels:(id)a0 coreDuetStreamIdentifier:(id)a1;
- (id)getEvaluationResults;
- (long long)getIntentEventType:(id)a0;
- (id)getLastEvaluationTime:(id)a0;
- (id)getTaskConfigurationFromInteractionID:(id)a0;
- (BOOL)isPSEBasedCandidateModel:(id)a0;
- (BOOL)isSuccess:(id)a0 intentType:(id)a1 intentResultType:(id)a2;
- (BOOL)performSiriEvaluationTaskWithTaskName:(id)a0 coreDuetStreamIdentifier:(id)a1 bmStreamIdentifier:(id)a2 outError:(id *)a3;

@end
