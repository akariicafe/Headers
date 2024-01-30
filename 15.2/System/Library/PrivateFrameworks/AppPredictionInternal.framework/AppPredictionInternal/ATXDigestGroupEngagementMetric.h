@class NSString;

@interface ATXDigestGroupEngagementMetric : _ATXCoreAnalyticsMetric

@property (retain, nonatomic) NSString *digestUUID;
@property (retain, nonatomic) NSString *bundleId;
@property (retain, nonatomic) NSString *section;
@property (nonatomic) unsigned long long sectionPosition;
@property (nonatomic) unsigned long long sectionSize;
@property (nonatomic) unsigned long long numNotifications;
@property (nonatomic) BOOL hasImage;
@property (nonatomic) double groupScore;
@property (nonatomic) unsigned long long numEngagementsInUpcoming;
@property (nonatomic) unsigned long long numEngagementsInScheduled;
@property (nonatomic) unsigned long long numEngagementsAfterExpiration;
@property (nonatomic) unsigned long long numExpansions;

- (id)metricName;
- (void).cxx_destruct;
- (id)coreAnalyticsDictionary;
- (void)populateMetricsFromDigestGroup:(id)a0 digestUUID:(id)a1;

@end
