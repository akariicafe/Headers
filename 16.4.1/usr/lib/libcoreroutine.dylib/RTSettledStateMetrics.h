@class NSString;

@interface RTSettledStateMetrics : RTMetric <RTMetricProtocol>

@property (nonatomic) double distancetraveledAfterEnteringState;
@property (nonatomic) double duration;
@property (nonatomic) BOOL isSettledState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct { char *x0; })event;
+ (id)binsForDuration;
+ (id)binsForDistanceTraveled;
+ (unsigned long long)bucketForDistanceTraveled:(double)a0;
+ (unsigned long long)bucketForDurationLength:(double)a0;
+ (id)createSettledStateMetricsForNewSettledStateTransition:(id)a0 settledStateTransitionStore:(id)a1 locationStore:(id)a2;
+ (void)submitSettledStateMetricsForSettledStateTransition:(id)a0 settledStateTransitionStore:(id)a1 locationStore:(id)a2;
+ (id)supportedMetricKeys;

- (id)init;
- (id)initWithCurrentSettledStateTransition:(id)a0 nextSettledStateTransition:(id)a1 distanceTraveled:(unsigned long long)a2;

@end
