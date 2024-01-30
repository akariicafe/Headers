@class NSNumber, NSString, NSDictionary;

@interface HMDCurrentAppleMediaAccessoryConfigurationLogEvent : HMMLogEvent <HMMCoreAnalyticsLogging>

@property (class, readonly) BOOL submitEventWithHistogrammedAggregateHomeDataCommonDimensions;
@property (class, readonly) BOOL submitEventWithDurationInMilliseconds;

@property (readonly, copy) NSNumber *numPairedSensors;
@property (readonly, copy) NSNumber *sensorStatus;
@property (readonly, copy) NSNumber *numPairedSensorAutomations;
@property (readonly, copy) NSNumber *numMediaAutomations;
@property (readonly, nonatomic) NSString *coreAnalyticsEventName;
@property (readonly, nonatomic) NSDictionary *coreAnalyticsEventDictionary;
@property (readonly, nonatomic) NSString *accessoryIdentifier;
@property (readonly, nonatomic) BOOL logEventWithAppendedCommonDimensions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


- (void).cxx_destruct;
- (id)initWithNumPairedSensors:(id)a0 sensorStatus:(id)a1 numPairedSensorAutomations:(id)a2 numMediaAutomations:(id)a3;

@end
