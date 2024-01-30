@class NSString;

@interface ATXMissedNotificationRankingEngagementMetric : _ATXCoreAnalyticsMetric

@property (nonatomic) double createdTimestamp;
@property (nonatomic) double showTimestamp;
@property (nonatomic) double expireTimestamp;
@property (retain, nonatomic) NSString *mnbUUID;
@property (retain, nonatomic) NSString *previousModeSemanticType;
@property (retain, nonatomic) NSString *nextModeSemanticType;
@property (nonatomic) unsigned long long numMessageGroups;
@property (nonatomic) unsigned long long numOtherGroups;
@property (nonatomic) unsigned long long numMessageNotifications;
@property (nonatomic) unsigned long long numOtherNotifications;
@property (nonatomic) unsigned long long numMessageEngagements;
@property (nonatomic) unsigned long long numOtherEngagements;
@property (nonatomic) unsigned long long numEngagementsInUpcoming;
@property (nonatomic) unsigned long long numEngagementsAfterShow;
@property (nonatomic) unsigned long long numEngagementsAfterExpiration;
@property (nonatomic) unsigned long long numExpansions;

- (id)metricName;
- (id)coreAnalyticsDictionary;
- (void).cxx_destruct;
- (void)populateMetricsFromRanking:(id)a0;

@end
