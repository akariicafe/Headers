@class NSString;

@interface ATXModeEntityScoresDistributionMetric : _ATXCoreAnalyticsMetric

@property (retain, nonatomic) NSString *modeIdentifier;
@property (retain, nonatomic) NSString *modeSemanticType;
@property (retain, nonatomic) NSString *modeEntityTypeIdentifier;
@property (nonatomic) double score;

- (id)metricName;
- (void).cxx_destruct;
- (id)coreAnalyticsDictionary;

@end
