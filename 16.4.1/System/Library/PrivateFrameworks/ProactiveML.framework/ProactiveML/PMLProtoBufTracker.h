@class AWDProactiveModelFittingModelInfo, NSString;
@protocol PMLTrackerAdapterProtocol;

@interface PMLProtoBufTracker : NSObject <PMLLogRegTrackerProtocol, PMLEvaluationTrackerProtocol, PMLMultiLabelEvaluationTrackerProtocol>

@property (readonly, nonatomic) id<PMLTrackerAdapterProtocol> adapter;
@property (readonly, nonatomic) AWDProactiveModelFittingModelInfo *modelInfo;
@property (readonly, nonatomic) unsigned long long quantizationNumberOfBuckets;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)awdTrackerForPlanId:(id)a0;
+ (id)messageForGradient:(id)a0 scaleFactor:(float)a1 minibatchStats:(id)a2 evaluationMetrics:(id)a3 serverIteration:(unsigned long long)a4 modelInfo:(id)a5 numberOfBuckets:(unsigned long long)a6;
+ (id)messageForWeights:(id)a0 scaleFactor:(float)a1 minibatchStats:(id)a2 evaluationMetrics:(id)a3 modelInfo:(id)a4 numberOfBuckets:(unsigned long long)a5;
+ (id)parsecTrackerForPlanId:(id)a0;
+ (id)trackerForPlanId:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)initWithPlist:(id)a0 chunks:(id)a1 context:(id)a2;
- (id)toPlistWithChunks:(id)a0;
- (id)initWithAdapter:(id)a0 modelInfo:(id)a1;
- (id)initWithAdapter:(id)a0 modelInfo:(id)a1 quantizationBuckets:(unsigned long long)a2;
- (id)trackEvaluationMetrics:(id)a0 minibatchStats:(id)a1;
- (id)trackGradient:(id)a0 scaleFactor:(float)a1 minibatchStats:(id)a2 evaluationMetrics:(id)a3 serverIteration:(unsigned long long)a4;
- (id)trackPrecisionAtK:(id)a0;
- (id)trackPrecisionAtK:(id)a0 minibatchStats:(id)a1;
- (id)trackWeights:(id)a0 scaleFactor:(float)a1 minibatchStats:(id)a2 evaluationMetrics:(id)a3;

@end
