@class PETGoalConversionEventTracker;

@interface SBDockInteractionMetric : SBAnalyticsStateMachineEventHandler {
    PETGoalConversionEventTracker *_swipeInTracker;
    PETGoalConversionEventTracker *_dismissTracker;
    unsigned long long _locationAtSwipeIn;
}

- (void).cxx_destruct;
- (id)init;

@end
