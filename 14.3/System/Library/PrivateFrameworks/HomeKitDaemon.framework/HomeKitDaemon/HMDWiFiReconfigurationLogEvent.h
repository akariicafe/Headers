@class NSUUID, HMDAccessory;

@interface HMDWiFiReconfigurationLogEvent : HMDLogEvent <HMDCoreAnalyticsLogging>

@property (class, readonly) NSUUID *uuid;

@property (retain, nonatomic) HMDAccessory *accessory;
@property (nonatomic, getter=isUsingFailSafeUpdate) BOOL usingFailSafeUpdate;
@property (nonatomic) long long credentialType;
@property (retain, nonatomic) HMDAccessory *routerAccessory;

- (id)eventName;
- (id)init;
- (void).cxx_destruct;
- (id)serializedEvent;

@end
