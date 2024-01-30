@class NSString;

@interface RTVisitSettledStateMetrics : RTMetric <RTMetricProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct { char *x0; })event;
+ (id)binsForDuration;
+ (unsigned long long)boundedIntegerMetricForCountOfSettledStateTransitions:(unsigned long long)a0;
+ (unsigned long long)boundedIntegerMetricForPercentageOfTimeSettled:(unsigned long long)a0;
+ (unsigned long long)boundedIntegerMetricPercentageOfTimeSettledForTimeSettled:(double)a0 overDuration:(double)a1;
+ (unsigned long long)bucketForDuration:(double)a0;
+ (id)createVisitSettledStateMetricsForSettledStateTransitionStore:(id)a0 startDate:(id)a1 endDate:(id)a2 isVisit:(BOOL)a3;
+ (void)submitVisitSettledStateMetricsForStartDate:(id)a0 endDate:(id)a1 isVisit:(BOOL)a2 settledStateTransitionStore:(id)a3;
+ (id)supportedMetricKeys;

- (id)init;
- (id)initWithCountOfSettledStateTransitions:(unsigned long long)a0 duration:(double)a1 isVisit:(BOOL)a2 timeSettled:(double)a3;

@end
