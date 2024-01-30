@class NSString, PETDistributionEventTracker;

@interface SBIconDeleteMetric : SBAnalyticsStateMachineEventHandler {
    NSString *_location;
    unsigned long long _presentedOptions;
    PETDistributionEventTracker *_tracker;
}

- (id)init;
- (void).cxx_destruct;
- (id)_propertyValuesForTracker;

@end
