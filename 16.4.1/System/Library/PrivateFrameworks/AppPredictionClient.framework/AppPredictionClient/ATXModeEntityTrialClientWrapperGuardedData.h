@class NSDictionary;

@interface ATXModeEntityTrialClientWrapperGuardedData : NSObject {
    NSDictionary *appModeEntityModelWeights;
    NSDictionary *appModeEntityDenyListModelWeights;
    NSDictionary *widgetModeEntityModelWeights;
    NSDictionary *contactModeEntityModelWeights;
    NSDictionary *contactModeEntityDenyListModelWeights;
    NSDictionary *notificationModeEntityModelWeights;
    NSDictionary *trainDenyListWithDenyListModels;
}

- (void).cxx_destruct;

@end
