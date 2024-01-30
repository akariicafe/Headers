@class NSString, NSDictionary, HMDCharacteristic, HMDHAPAccessory;

@interface HMDHAPAccessoryNotificationEvent : HMMLogEvent <HMMCoreAnalyticsLogging>

@property (class, readonly) BOOL submitEventWithDurationInMilliseconds;
@property (class, readonly) BOOL submitEventWithHistogrammedCommonConfigurationDimensions;

@property (retain, nonatomic) HMDHAPAccessory *accessory;
@property (retain, nonatomic) HMDCharacteristic *characteristic;
@property (readonly, nonatomic) NSString *eventName;
@property (readonly, nonatomic) NSDictionary *serializedEvent;
@property (readonly, nonatomic) NSString *accessoryIdentifier;


- (void).cxx_destruct;
- (id)initWithAccessory:(id)a0 characteristic:(id)a1;
- (BOOL)isThreadAccessory:(id)a0;

@end
