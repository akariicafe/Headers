@class NSString, HMDAccessoryTransportReachabilityReport, NSDictionary, NSNumber;

@interface HMDAccessoryReachabilityChangedLogEvent : HMMLogEvent <HMMCoreAnalyticsLogging>

@property (class, readonly) BOOL submitEventWithDurationInMilliseconds;
@property (class, readonly) BOOL submitEventWithHistogrammedCommonConfigurationDimensions;

@property (readonly, nonatomic) BOOL accessoryBatteryPowered;
@property (readonly, nonatomic) BOOL accessoryBridged;
@property (readonly, copy, nonatomic) NSString *accessoryCategory;
@property (readonly, copy, nonatomic) NSString *accessoryFirmwareVersion;
@property (readonly, copy, nonatomic) NSString *accessoryManufacturer;
@property (readonly, copy, nonatomic) NSString *accessoryModel;
@property (readonly, copy, nonatomic) NSNumber *accessoryNumber;
@property (readonly, nonatomic) BOOL batteryLow;
@property (readonly, nonatomic) BOOL changed;
@property (readonly, nonatomic) long long duration;
@property (readonly, nonatomic) BOOL reachable;
@property (readonly, copy, nonatomic) HMDAccessoryTransportReachabilityReport *transportReport;
@property (readonly, nonatomic) NSString *eventName;
@property (readonly, nonatomic) NSDictionary *serializedEvent;
@property (readonly, nonatomic) NSString *accessoryIdentifier;

- (void).cxx_destruct;
- (id)init;
- (id)__initWithReachable:(BOOL)a0 changed:(BOOL)a1 duration:(double)a2 accessory:(id)a3 transportReport:(id)a4;

@end
