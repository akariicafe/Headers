@class TRIRolloutDeployment, _PASLock;

@interface TRIRolloutTaskSupport : NSObject <TRIMetricsProviding> {
    _PASLock *_lock;
}

@property (readonly, nonatomic) TRIRolloutDeployment *rolloutDeployment;

- (void)mergeTelemetry:(id)a0;
- (id)trialSystemTelemetry;
- (id)metrics;
- (void).cxx_destruct;
- (void)addDimension:(id)a0;
- (void)addMetric:(id)a0;
- (id)tags;
- (id)initWithRolloutDeployment:(id)a0;
- (id)dimensions;

@end
