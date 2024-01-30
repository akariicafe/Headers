@class RTRelabeler, NSString;

@interface RTRelabelerMetrics : RTMetric <RTMetricProtocol>

@property (retain, nonatomic) RTRelabeler *relabeler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct { char *x0; })event;
+ (id)supportedMetricKeys;
+ (id)booleanKeys;
+ (id)integerKeys;
+ (id)doubleKeys;
+ (id)bucketedKeys;
+ (id)unsignedIntegerKeys;

- (void).cxx_destruct;
- (BOOL)submitMetricsWithError:(id *)a0;
- (id)initWithRelabeler:(id)a0;
- (void)setErrorMetrics:(id)a0;
- (id)initWithLoggingEnabled:(BOOL)a0;
- (void)setDerivedMetrics;
- (void)setPreprocessedMetricsUsingInputCandidate:(id)a0 contextCandidates:(id)a1;
- (void)setFilteredInputMetricsUsingContextCandidates:(id)a0;
- (void)setNonRevGeoCandidates:(id)a0 revGeoCandidates:(id)a1;
- (void)setNumberOfUniqueMapItems:(id)a0;
- (void)setOutputMetricsUsingInputCandidate:(id)a0 priorVector:(id)a1 observationVector:(id)a2 posteriorVector:(id)a3 relabeledProbVector:(id)a4 relabeledInferredMapItem:(id)a5;
- (id)getUUIDForPotentialRelabelingItemUsingInputCandidate:(id)a0 relabeledProbVector:(id)a1;
- (double)logMax2ConfidenceRatioOfRelabeledProbVector:(id)a0;
- (id)maxUUIDOfProbVector:(id)a0;
- (double)calculateEntropyOfProbVector:(id)a0;

@end
