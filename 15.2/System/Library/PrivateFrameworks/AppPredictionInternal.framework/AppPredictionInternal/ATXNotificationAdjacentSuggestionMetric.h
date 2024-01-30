@class NSString;

@interface ATXNotificationAdjacentSuggestionMetric : _ATXCoreAnalyticsMetric

@property (retain, nonatomic) NSString *bundleId;
@property (nonatomic) BOOL isAddToMode;
@property (retain, nonatomic) NSString *suggestionOutcome;
@property (retain, nonatomic) NSString *suggestionScope;
@property (retain, nonatomic) NSString *suggestionType;
@property (retain, nonatomic) NSString *targetMode;
@property (nonatomic) double timeToOutcome;
@property (nonatomic) double suggestionCompletionTimestamp;

- (id)metricName;
- (void).cxx_destruct;
- (id)coreAnalyticsDictionary;

@end
