@class NSString, NSNumber;

@interface ATXFocusModeSignalsMetric : _ATXCoreAnalyticsMetric

@property (retain, nonatomic) NSString *abGroup;
@property (nonatomic) unsigned long long focusMode;
@property (retain, nonatomic) NSString *appBundleId;
@property (retain, nonatomic) NSString *activeConfigurationType;
@property (nonatomic) BOOL wasAppSuggestedDuringModeSetup;
@property (nonatomic) BOOL wasAppSuggestionDuringModeSetupAccepted;
@property (retain, nonatomic) NSString *widgetBundleIdAndKind;
@property (retain, nonatomic) NSString *widgetSize;
@property (retain, nonatomic) NSString *intentHash;
@property (retain, nonatomic) NSNumber *classConditionalProbabilityOfModeGivenEntity;
@property (retain, nonatomic) NSNumber *entityModeEntityScore;
@property (retain, nonatomic) NSNumber *globalPopularityForEntity;
@property (retain, nonatomic) NSNumber *modePopularityForEntity;
@property (retain, nonatomic) NSNumber *ratioOfModePopularityToGlobalPopularityOfEntity;
@property (retain, nonatomic) NSNumber *posteriorProbabilityOfEntityGivenMode;
@property (retain, nonatomic) NSNumber *categoryScore;
@property (retain, nonatomic) NSNumber *globalOccurrencesOfEntity;
@property (retain, nonatomic) NSNumber *localOccurrencesOfEntityInMode;
@property (retain, nonatomic) NSNumber *uniqueOccurrencesOfEntityInMode;
@property (nonatomic) BOOL entityOccurredGloballyOverLastNDays;
@property (nonatomic) BOOL entityOccurredInModeOverLastNDays;
@property (retain, nonatomic) NSNumber *notificationsMuted;
@property (retain, nonatomic) NSNumber *notificationsClearedInMode;
@property (retain, nonatomic) NSNumber *notificationsClearedGlobally;
@property (retain, nonatomic) NSNumber *localClearanceRateForEntity;
@property (retain, nonatomic) NSNumber *globalClearanceRateForEntity;
@property (retain, nonatomic) NSNumber *ratioOfLocalToGlobalNotificationsClearedRateForEntity;
@property (retain, nonatomic) NSNumber *classConditionalOfNotificationsClearedForEntity;
@property (retain, nonatomic) NSNumber *notificationsReceivedGlobally;
@property (retain, nonatomic) NSNumber *notificationsReceivedInMode;
@property (retain, nonatomic) NSNumber *localPopularityOfNotificationsReceivedForEntity;
@property (retain, nonatomic) NSNumber *globalPopularityOfNotificationsReceivedForEntity;
@property (retain, nonatomic) NSNumber *ratioOfLocalToGlobalPopularityOfNotificationsReceivedForEntity;
@property (retain, nonatomic) NSNumber *classConditionalOfNotificationsReceivedForEntity;
@property (nonatomic) BOOL isAppCandidateSuggestion;
@property (nonatomic) BOOL isAppRecommendedSuggestion;
@property (retain, nonatomic) NSString *treatmentId;
@property (retain, nonatomic) NSString *experimentId;
@property (retain, nonatomic) NSNumber *deploymentId;
@property (retain, nonatomic) NSNumber *globalModeAffinityPrior;
@property (retain, nonatomic) NSNumber *globalInterruptingPrior;
@property (retain, nonatomic) NSNumber *modeAppInterruptionsCountByEntity;
@property (retain, nonatomic) NSNumber *modeAppInterruptionsClassConditionalProbabilityByEntity;
@property (retain, nonatomic) NSNumber *globalAppInterruptionsCountByEntity;
@property (retain, nonatomic) NSNumber *globalPopularityOfInterruptingEntity;
@property (retain, nonatomic) NSNumber *modePopularityOfInterruptingEntity;
@property (retain, nonatomic) NSNumber *ratioOfModePopularityToGlobalPopularityOfInterruptingEntity;

- (id)metricName;
- (id)coreAnalyticsDictionary;
- (void).cxx_destruct;

@end
