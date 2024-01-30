@class NSDictionary, NSString;

@interface HMDErrorAggregationLogEvent : HMMLogEvent <HMMCoreAnalyticsLogging>

@property (class, readonly) BOOL submitEventWithHistogrammedAggregateHomeDataCommonDimensions;
@property (class, readonly) BOOL submitEventWithDurationInMilliseconds;

@property (readonly, nonatomic) NSDictionary *coreAnalyticsSerializedEvent;
@property (readonly, nonatomic) NSString *coreAnalyticsEventName;
@property (readonly, nonatomic) NSDictionary *coreAnalyticsEventDictionary;
@property (readonly, nonatomic) NSString *accessoryIdentifier;
@property (readonly, nonatomic) BOOL logEventWithAppendedCommonDimensions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)createErrorEventForRequestGroup:(id)a0 errorString:(id)a1 errorCount:(id)a2;
+ (id)createSummaryEventForRequestGroup:(id)a0 totalErrorCount:(id)a1 totalEventCount:(id)a2;

- (void).cxx_destruct;
- (id)initWithEventGroupName:(id)a0 errorString:(id)a1 errorCount:(id)a2 eventCount:(id)a3;

@end
