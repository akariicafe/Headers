@class NSString, PMLSessionDescriptor, PMLModelWeights, PMLTrainingStore;
@protocol PMLLogRegTrackerProtocol, PMLNoiseStrategy;

@interface PMLLogRegTrainingPlan : NSObject <PMLPlanProtocol> {
    id<PMLNoiseStrategy> _noiseStrategy;
    unsigned long long _sessionsInBatch;
    double _skew;
    double _threshold;
}

@property (readonly, nonatomic) PMLTrainingStore *store;
@property (readonly, nonatomic) id<PMLLogRegTrackerProtocol> tracker;
@property (readonly, nonatomic) unsigned long long currentServerIteration;
@property (readonly, nonatomic) PMLSessionDescriptor *sessionDescriptor;
@property (readonly, nonatomic) unsigned long long maxSessionsLimit;
@property (readonly, nonatomic) PMLModelWeights *currentModelWeights;
@property (readonly, nonatomic) float localLearningRate;
@property (readonly, nonatomic) float stoppingThreshold;
@property (readonly, nonatomic) unsigned long long localMinimumIterations;
@property (readonly, nonatomic) unsigned long long localGradientIterations;
@property (readonly, nonatomic) BOOL useOnlyAppleInternalSessions;
@property (readonly, nonatomic) BOOL isMultiLabel;
@property (readonly, nonatomic) unsigned long long positiveLabel;
@property (readonly, nonatomic) BOOL intercept;
@property (readonly, nonatomic) unsigned long long evaluationLevel;
@property (readonly, nonatomic) BOOL reportScale;
@property (readonly, nonatomic) NSString *planId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)planWithStore:(id)a0 tracker:(id)a1 sessionDescriptor:(id)a2 arguments:(id)a3;

- (id)init;
- (void).cxx_destruct;
- (id)initWithPlist:(id)a0 chunks:(id)a1 context:(id)a2;
- (id)toPlistWithChunks:(id)a0;
- (id)runWithError:(id *)a0;
- (id)evaluationMetricsForPredictions:(id)a0 objectives:(id)a1 predicate:(id /* block */)a2 start:(id)a3;
- (id)initWithStore:(id)a0 tracker:(id)a1 noiseStrategy:(id)a2 planId:(id)a3 sessionDescriptor:(id)a4 maxSessionsLimit:(unsigned long long)a5 sessionsInBatch:(unsigned long long)a6 currentServerIteration:(unsigned long long)a7 currentModelWeights:(id)a8 localLearningRate:(float)a9 stoppingThreshold:(float)a10 localMinimumIterations:(unsigned long long)a11 localGradientIterations:(unsigned long long)a12 useOnlyAppleInternalSessions:(BOOL)a13 skew:(double)a14 threshold:(double)a15 isMultiLabel:(BOOL)a16 intercept:(BOOL)a17 positiveLabel:(unsigned long long)a18 evaluationLevel:(unsigned long long)a19 reportScale:(BOOL)a20;
- (void)loadSessionsWithBlock:(id /* block */)a0;
- (id)normalizeRegressor:(id)a0;

@end
