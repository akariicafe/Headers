@class NSString, PMLSessionDescriptor, PMLModelWeights, PMLTrainingStore;
@protocol PMLEvaluationTrackerProtocol;

@interface PMLLogRegEvaluationPlan : NSObject <PMLPlanProtocol> {
    unsigned long long _sessionsInBatch;
    BOOL _intercept;
    double _skew;
    BOOL _isMultiLabel;
    unsigned long long _positiveLabel;
    double _threshold;
    unsigned long long _evaluationLevel;
}

@property (readonly, nonatomic) PMLTrainingStore *store;
@property (readonly, nonatomic) id<PMLEvaluationTrackerProtocol> tracker;
@property (readonly, nonatomic) PMLSessionDescriptor *sessionDescriptor;
@property (readonly, nonatomic) unsigned long long maxSessionsLimit;
@property (readonly, nonatomic) PMLModelWeights *currentModelWeights;
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
- (id)initWithStore:(id)a0 tracker:(id)a1 planId:(id)a2 sessionDescriptor:(id)a3 maxSessionsLimit:(unsigned long long)a4 sessionsInBatch:(unsigned long long)a5 currentModelWeights:(id)a6 intercept:(BOOL)a7 skew:(double)a8 threshold:(double)a9 isMultiLabel:(BOOL)a10 positiveLabel:(unsigned long long)a11 evaluationLevel:(unsigned long long)a12;
- (void)loadSessionsWithBlock:(id /* block */)a0;
- (id)normalizeRegressor:(id)a0;

@end
