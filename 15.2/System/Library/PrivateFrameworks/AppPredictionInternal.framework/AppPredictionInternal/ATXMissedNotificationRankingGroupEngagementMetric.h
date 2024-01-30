@class NSString;

@interface ATXMissedNotificationRankingGroupEngagementMetric : _ATXCoreAnalyticsMetric

@property (retain, nonatomic) NSString *bundleId;
@property (nonatomic) double groupScore;
@property (retain, nonatomic) NSString *mnbUUID;
@property (nonatomic) unsigned long long numEngagementsInUpcoming;
@property (nonatomic) unsigned long long numEngagementsAfterShow;
@property (nonatomic) unsigned long long numEngagementsAfterExpiration;
@property (nonatomic) unsigned long long numExpansions;
@property (retain, nonatomic) NSString *section;
@property (nonatomic) unsigned long long sectionPosition;
@property (nonatomic) unsigned long long sectionSize;
@property (nonatomic) unsigned long long numNotifications;

- (id)metricName;
- (void).cxx_destruct;
- (id)coreAnalyticsDictionary;
- (void)populateMetricsFromDigestGroup:(id)a0 mnbUUID:(id)a1;

@end
