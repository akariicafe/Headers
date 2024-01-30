@class PETGoalConversionEventTracker;

@interface SBSystemGestureMetric : SBAnalyticsStateMachineEventHandler {
    PETGoalConversionEventTracker *_goalTracker;
    unsigned long long _beganLocation;
}

- (id)initForType:(unsigned long long)a0 parentMetric:(id)a1;
- (void).cxx_destruct;

@end
