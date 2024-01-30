@class NSDictionary, ATXModeEntityTrialClientWrapper;

@interface ATXNotificationModeEntityModelWeights : NSObject {
    NSDictionary *_notificationModeEntityModelWeights;
    ATXModeEntityTrialClientWrapper *_modeEntityTrialClientWrapper;
}

- (double)bias;
- (id)abGroup;
- (id)init;
- (void).cxx_destruct;
- (double)hiddenGlobalPopularityComponent;
- (double)appCategoryScoreComponent;
- (double)appClassConditionalProbabilityComponent;
- (double)appGlobalOccurrencesComponent;
- (double)appGlobalPopularityComponent;
- (double)appModePopularityComponent;
- (double)appPosteriorProbabilityComponent;
- (double)clearClassConditionalProbabilityComponent;
- (double)clearGlobalPopularityComponent;
- (double)clearModePopularityComponent;
- (double)clearPosteriorProbabilityComponent;
- (double)contactClassConditionalProbabilityComponent;
- (double)contactGlobalOccurrencesComponent;
- (double)contactGlobalPopularityComponent;
- (double)contactIsFavoriteComponent;
- (double)contactIsVIPComponent;
- (double)contactPosteriorProbabilityComponent;
- (double)dismissClassConditionalProbabilityComponent;
- (double)dismissGlobalPopularityComponent;
- (double)dismissModePopularityComponent;
- (double)dismissPosteriorProbabilityComponent;
- (double)engagementClassConditionalProbabilityComponent;
- (double)engagementGlobalPopularityComponent;
- (double)engagementModePopularityComponent;
- (double)engagementPosteriorProbabilityComponent;
- (double)hiddenClassConditionalProbabilityComponent;
- (double)hiddenModePopularityComponent;
- (double)hiddenPosteriorProbabilityComponent;
- (int)numOfDays;

@end
