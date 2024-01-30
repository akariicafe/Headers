@class NSString, NSDictionary;

@interface HMDAccessoryActivityTypeThermostatLogEvent : HMMHomeLogEvent <HMMCoreAnalyticsLogging>

@property (class, readonly) BOOL submitEventWithHistogrammedAggregateHomeDataCommonDimensions;
@property (class, readonly) BOOL submitEventWithDurationInMilliseconds;

@property (readonly, copy, nonatomic) NSString *characteristicValue;
@property (readonly, copy, nonatomic) NSString *accessoryUUIDString;
@property (readonly, copy, nonatomic) NSString *serviceUUIDString;
@property (readonly, copy, nonatomic) NSString *characteristicUUIDString;
@property (readonly, copy, nonatomic) NSString *timeStamp;
@property (readonly, copy, nonatomic) NSString *regionRange;
@property (readonly, copy, nonatomic) NSString *homePresence;
@property (readonly, copy, nonatomic) NSString *subscriptionEventTypeString;
@property (readonly, copy, nonatomic) NSString *triggerSource;
@property (readonly, copy, nonatomic) NSString *bundleId;
@property (readonly, copy, nonatomic) NSString *userUUID;
@property (readonly, nonatomic) NSString *coreAnalyticsEventName;
@property (readonly, nonatomic) NSDictionary *coreAnalyticsEventDictionary;
@property (readonly, nonatomic) NSString *accessoryIdentifier;
@property (readonly, nonatomic) BOOL logEventWithAppendedCommonDimensions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


- (void).cxx_destruct;
- (id)initWithCharacteristicValue:(id)a0 accessoryUUIDString:(id)a1 serviceUUIDString:(id)a2 characteristicUUIDString:(id)a3 timeStamp:(id)a4 regionRange:(id)a5 homeUUID:(id)a6 homePresence:(id)a7 subscriptionEventTypeString:(id)a8 triggerSource:(id)a9 bundleId:(id)a10 userUUID:(id)a11;

@end
