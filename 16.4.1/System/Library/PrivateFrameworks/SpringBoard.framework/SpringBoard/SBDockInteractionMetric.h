@class PETGoalConversionEventTracker;

@interface SBDockInteractionMetric : SBAnalyticsStateMachineEventHandler {
    PETGoalConversionEventTracker *_swipeInTracker;
    PETGoalConversionEventTracker *_dismissTracker;
    unsigned long long _locationAtSwipeIn;
}

- (id)init;
- (void).cxx_destruct;

@end
