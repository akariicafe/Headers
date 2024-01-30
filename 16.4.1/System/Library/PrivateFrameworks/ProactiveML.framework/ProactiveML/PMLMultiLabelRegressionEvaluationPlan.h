@class NSArray, NSString, PMLSessionDescriptor, PMLTrainingStore;
@protocol PMLMultiLabelClassifierModelProtocol, PMLMultiLabelEvaluationTrackerProtocol;

@interface PMLMultiLabelRegressionEvaluationPlan : NSObject <PMLPlanProtocol>

@property (readonly, nonatomic) PMLTrainingStore *store;
@property (readonly, nonatomic) PMLSessionDescriptor *sessionDescriptor;
@property (readonly, nonatomic) unsigned long long maxSessionsLimit;
@property (readonly, nonatomic) unsigned long long sessionsInBatch;
@property (readonly, nonatomic) id<PMLMultiLabelClassifierModelProtocol> multiLabelRegressionModel;
@property (readonly, nonatomic) NSArray *positiveLabels;
@property (readonly, nonatomic) NSArray *weightsArray;
@property (readonly, nonatomic) BOOL intercept;
@property (readonly, nonatomic) NSArray *evaluationPoints;
@property (readonly, nonatomic) id<PMLMultiLabelEvaluationTrackerProtocol> tracker;
@property (readonly, nonatomic) unsigned long long evaluationLevel;
@property (readonly, nonatomic) NSString *planId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)initWithPlist:(id)a0 chunks:(id)a1 context:(id)a2;
- (id)toPlistWithChunks:(id)a0;
- (id)runWithError:(id *)a0;
- (id)_precisionAtEvaluationPointsForSessions:(id)a0;
- (id)_rankedLabelsForSession:(id)a0;
- (id)initWithPlanId:(id)a0 store:(id)a1 sessionDescriptor:(id)a2 maxSessionsLimit:(unsigned long long)a3 sessionsInBatch:(unsigned long long)a4 labelAndWeights:(id)a5 modelClassName:(id)a6 intercept:(BOOL)a7 evaluationPoints:(id)a8 tracker:(id)a9 evaluationLevel:(unsigned long long)a10;

@end
