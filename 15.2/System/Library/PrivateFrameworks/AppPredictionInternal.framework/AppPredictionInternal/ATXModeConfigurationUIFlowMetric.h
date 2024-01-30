@class NSString;

@interface ATXModeConfigurationUIFlowMetric : _ATXCoreAnalyticsMetric

@property (retain, nonatomic) NSString *modeSemanticType;
@property (retain, nonatomic) NSString *modeUUID;
@property (retain, nonatomic) NSString *modeConfigurationUI;
@property (nonatomic) unsigned long long numAppsAdded;
@property (nonatomic) unsigned long long numAppsRemoved;
@property (nonatomic) unsigned long long numAppsSuggested;
@property (nonatomic) unsigned long long numExistingAllowedApps;
@property (nonatomic) unsigned long long numSuggestedAppsAdded;
@property (nonatomic) unsigned long long numSuggestedAppsRemoved;
@property (nonatomic) unsigned long long numContactsAdded;
@property (nonatomic) unsigned long long numContactsRemoved;
@property (nonatomic) unsigned long long numContactsSuggested;
@property (nonatomic) unsigned long long numExistingAllowedContacts;
@property (nonatomic) unsigned long long numSuggestedContactsAdded;
@property (nonatomic) unsigned long long numSuggestedContactsRemoved;

- (id)metricName;
- (void).cxx_destruct;
- (id)coreAnalyticsDictionary;

@end
