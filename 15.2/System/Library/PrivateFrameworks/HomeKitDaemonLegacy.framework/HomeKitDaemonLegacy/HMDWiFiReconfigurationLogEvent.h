@class NSString, NSDictionary, HMDAccessory;

@interface HMDWiFiReconfigurationLogEvent : HMMLogEvent <HMMCoreAnalyticsLogging>

@property (class, readonly) BOOL submitEventWithDurationInMilliseconds;
@property (class, readonly) BOOL submitEventWithHistogrammedCommonConfigurationDimensions;

@property (readonly, nonatomic) NSString *eventName;
@property (readonly, nonatomic) NSDictionary *serializedEvent;
@property (readonly, nonatomic) NSString *accessoryIdentifier;
@property (retain, nonatomic) HMDAccessory *accessory;
@property (nonatomic, getter=isUsingFailSafeUpdate) BOOL usingFailSafeUpdate;
@property (nonatomic) long long credentialType;
@property (retain, nonatomic) HMDAccessory *routerAccessory;


- (void).cxx_destruct;
- (id)init;

@end
