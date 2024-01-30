@class TRIRolloutDeployment, _PASLock;

@interface TRIRolloutTaskSupport : NSObject <TRIMetricsProviding> {
    _PASLock *_lock;
}

@property (readonly, nonatomic) TRIRolloutDeployment *rolloutDeployment;

- (id)dimensions;
- (id)tags;
- (void)mergeTelemetry:(id)a0;
- (void)addDimension:(id)a0;
- (id)initWithRolloutDeployment:(id)a0;
- (id)metrics;
- (id)trialSystemTelemetry;
- (void)addMetric:(id)a0;
- (void).cxx_destruct;

@end
