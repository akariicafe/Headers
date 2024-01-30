@class NSUUID, NSString, HMFSoftwareVersion;

@interface HMDAccessorySoftwareUpdateApplyEvent : HMDLogEvent <HMDCoreAnalyticsLogging>

@property (class, readonly) NSUUID *uuid;

@property (readonly) NSString *manufacturer;
@property (readonly) NSString *model;
@property (readonly) HMFSoftwareVersion *activeVersion;
@property (readonly) HMFSoftwareVersion *stagedVersion;
@property (readonly) unsigned long long advertisedDuration;
@property (readonly) unsigned long long totalAllowedDuration;
@property (readonly) long long status;

+ (id)eventWithManufacturer:(id)a0 model:(id)a1 activeVersion:(id)a2 stagedVersion:(id)a3 advertisedDuration:(unsigned long long)a4 totalAllowedDuration:(unsigned long long)a5 status:(long long)a6;

- (id)eventName;
- (void).cxx_destruct;
- (id)serializedEvent;
- (id)initWithManufacturer:(id)a0 model:(id)a1 activeVersion:(id)a2 stagedVersion:(id)a3 advertisedDuration:(unsigned long long)a4 totalAllowedDuration:(unsigned long long)a5 status:(long long)a6;

@end
