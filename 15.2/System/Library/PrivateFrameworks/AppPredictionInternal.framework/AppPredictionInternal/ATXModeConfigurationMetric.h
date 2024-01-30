@class NSString;

@interface ATXModeConfigurationMetric : _ATXCoreAnalyticsMetric

@property (retain, nonatomic) NSString *modeIdentifier;
@property (retain, nonatomic) NSString *modeSemanticType;
@property (nonatomic) BOOL hasSmartTrigger;
@property (nonatomic) BOOL hasAreaTrigger;
@property (nonatomic) BOOL hasTimeTrigger;
@property (nonatomic) BOOL hasAppTrigger;
@property (nonatomic) BOOL hasScreenActivityTrigger;
@property (nonatomic) BOOL hasWorkoutTrigger;
@property (nonatomic) BOOL hasSleepTrigger;
@property (nonatomic) BOOL hasDrivingTrigger;
@property (nonatomic) unsigned long long numAllowedApps;
@property (nonatomic) unsigned long long numAllowedContacts;
@property (nonatomic) BOOL isAutomaticallyGenerated;
@property (nonatomic) BOOL doesImpactAvailability;

- (id)metricName;
- (void).cxx_destruct;
- (id)coreAnalyticsDictionary;

@end
