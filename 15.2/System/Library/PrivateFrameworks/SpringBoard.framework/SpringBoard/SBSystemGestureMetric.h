@class PETGoalConversionEventTracker;

@interface SBSystemGestureMetric : SBAnalyticsStateMachineEventHandler {
    PETGoalConversionEventTracker *_goalTracker;
    unsigned long long _beganLocation;
}

- (void).cxx_destruct;
- (id)initForType:(unsigned long long)a0 parentMetric:(id)a1;

@end
