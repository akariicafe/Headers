@class NSDictionary, NSString;

@interface HMDErrorAggregationLogEvent : HMMLogEvent <HMMCoreAnalyticsLogging>

@property (class, readonly) BOOL submitEventWithDurationInMilliseconds;
@property (class, readonly) BOOL submitEventWithHistogrammedCommonConfigurationDimensions;

@property (readonly, nonatomic) NSDictionary *coreAnalyticsSerializedEvent;
@property (readonly, nonatomic) NSString *eventName;
@property (readonly, nonatomic) NSDictionary *serializedEvent;
@property (readonly, nonatomic) NSString *accessoryIdentifier;

+ (id)createSummaryEventForRequestGroup:(id)a0 totalErrorCount:(id)a1 totalEventCount:(id)a2;
+ (id)createErrorEventForRequestGroup:(id)a0 errorString:(id)a1 errorCount:(id)a2;

- (void).cxx_destruct;
- (id)initWithEventGroupName:(id)a0 errorString:(id)a1 errorCount:(id)a2 eventCount:(id)a3;

@end
