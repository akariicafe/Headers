@class NSUUID, NSError, NSDate;

@interface HMDDeviceSetupTrackingInfo : HMFObject <HMDDeviceSetupTrackingInfo>

@property (copy) NSUUID *accessoryUUID;
@property (readonly, copy) NSDate *startTime;
@property (readonly, copy) NSDate *endTime;
@property (readonly, copy) NSError *sessionError;
@property (readonly) long long role;
@property (readonly, copy) NSUUID *identifier;

- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 startTime:(id)a1 endTime:(id)a2 role:(long long)a3 accessoryUUID:(id)a4;

@end
