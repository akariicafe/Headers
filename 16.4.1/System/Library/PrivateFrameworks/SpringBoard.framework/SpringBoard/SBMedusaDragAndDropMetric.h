@class PETGoalConversionEventTracker;

@interface SBMedusaDragAndDropMetric : SBAnalyticsStateMachineEventHandler {
    unsigned long long _activateLocation;
    PETGoalConversionEventTracker *_medusaDropTracker;
}

- (id)init;
- (void).cxx_destruct;

@end
