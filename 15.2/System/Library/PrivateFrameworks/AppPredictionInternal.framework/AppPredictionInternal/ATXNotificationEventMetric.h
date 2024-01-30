@class NSString;

@interface ATXNotificationEventMetric : _ATXCoreAnalyticsMetric

@property (retain, nonatomic) NSString *bundleId;
@property (retain, nonatomic) NSString *destinationReason;
@property (retain, nonatomic) NSString *finalDestination;
@property (retain, nonatomic) NSString *handleModeIdentifier;
@property (nonatomic) BOOL isMessage;
@property (nonatomic) long long urgency;
@property (retain, nonatomic) NSString *originalDestination;
@property (nonatomic) long long deliveryMethod;
@property (retain, nonatomic) NSString *receiveModeIdentifier;
@property (nonatomic) long long resolutionType;
@property (nonatomic) double timeToResolution;

- (id)metricName;
- (void).cxx_destruct;
- (id)coreAnalyticsDictionary;
- (id)initWithQueryResult:(id)a0 modeClient:(id)a1;

@end
