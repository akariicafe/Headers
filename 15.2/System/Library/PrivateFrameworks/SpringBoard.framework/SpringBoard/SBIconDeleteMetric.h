@class NSString, PETDistributionEventTracker;

@interface SBIconDeleteMetric : SBAnalyticsStateMachineEventHandler {
    NSString *_location;
    unsigned long long _presentedOptions;
    PETDistributionEventTracker *_tracker;
}

- (id)_propertyValuesForTracker;
- (void).cxx_destruct;
- (id)init;

@end
