@class NSString;

@interface ATXDigestEngagementMetric : _ATXCoreAnalyticsMetric

@property (retain, nonatomic) NSString *digestTimeCategory;
@property (retain, nonatomic) NSString *digestUUID;
@property (nonatomic) unsigned long long numDigestExpansions;
@property (nonatomic) unsigned long long numMessageGroups;
@property (nonatomic) unsigned long long numHighlightedGroups;
@property (nonatomic) unsigned long long numOtherGroups;
@property (nonatomic) unsigned long long numMessageNotifications;
@property (nonatomic) unsigned long long numHighlightedNotifications;
@property (nonatomic) unsigned long long numOtherNotifications;
@property (nonatomic) unsigned long long numEngagementsInUpcoming;
@property (nonatomic) unsigned long long numEngagementsInScheduled;
@property (nonatomic) unsigned long long numEngagementsAfterExpiration;
@property (nonatomic) unsigned long long numNotificationGroupExpansions;
@property (nonatomic) double firstUpcomingViewTimestamp;
@property (nonatomic) double firstScheduledViewTimestamp;
@property (nonatomic) double digestExpirationTimestamp;

- (id)metricName;
- (void).cxx_destruct;
- (id)coreAnalyticsDictionary;
- (void)populateMetricsFromDigest:(id)a0;

@end
