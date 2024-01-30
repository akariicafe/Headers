@class PETScalarEventTracker, PETDistributionEventTracker;

@interface SBIconFlockingMetric : SBAnalyticsStateMachineEventHandler {
    PETDistributionEventTracker *_flockingDistributionTracker;
    PETScalarEventTracker *_flockingUsageTracker;
}

- (id)init;
- (void).cxx_destruct;

@end
