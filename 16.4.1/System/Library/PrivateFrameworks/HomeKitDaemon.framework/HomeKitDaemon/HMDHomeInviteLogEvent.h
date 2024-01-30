@class NSString, NSDictionary;

@interface HMDHomeInviteLogEvent : HMMLogEvent <HMMCoreAnalyticsLogging>

@property (class, readonly) BOOL submitEventWithHistogrammedAggregateHomeDataCommonDimensions;
@property (class, readonly) BOOL submitEventWithDurationInMilliseconds;

@property (readonly, nonatomic) BOOL received;
@property (readonly, nonatomic) BOOL filtered;
@property (readonly, nonatomic) BOOL suppressedNotification;
@property (readonly, nonatomic) BOOL accepted;
@property (readonly, nonatomic) BOOL declined;
@property (readonly, nonatomic) BOOL ignored;
@property (readonly, nonatomic) BOOL expired;
@property (readonly, nonatomic) BOOL isFMFDevice;
@property (readonly, nonatomic) NSString *coreAnalyticsEventName;
@property (readonly, nonatomic) NSDictionary *coreAnalyticsEventDictionary;
@property (readonly, nonatomic) NSString *accessoryIdentifier;
@property (readonly, nonatomic) BOOL logEventWithAppendedCommonDimensions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithHomeInviteLogEventState:(long long)a0 isFMFDevice:(BOOL)a1;

@end
