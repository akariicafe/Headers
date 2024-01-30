@class NSString, NSDictionary;

@interface HMDEventRouterSendRemoteEventLogEvent : HMMLogEvent <HMMCoreAnalyticsLogging>

@property (class, readonly) BOOL submitEventWithHistogrammedAggregateHomeDataCommonDimensions;
@property (class, readonly) BOOL submitEventWithDurationInMilliseconds;

@property (readonly, copy, nonatomic) NSString *topic;
@property (readonly, nonatomic) unsigned long long sourceDeviceType;
@property (readonly, nonatomic) unsigned long long destinationDeviceType;
@property (readonly, nonatomic) BOOL isCachedEvent;
@property (readonly, nonatomic) unsigned long long responseMessageType;
@property (readonly, nonatomic) NSString *coreAnalyticsEventName;
@property (readonly, nonatomic) NSDictionary *coreAnalyticsEventDictionary;
@property (readonly, nonatomic) NSString *accessoryIdentifier;
@property (readonly, nonatomic) BOOL logEventWithAppendedCommonDimensions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


- (void).cxx_destruct;
- (id)initWithTopic:(id)a0 sourceDeviceType:(unsigned long long)a1 destinationDeviceType:(unsigned long long)a2 isCachedEvent:(BOOL)a3 responseMessageType:(unsigned long long)a4;

@end
