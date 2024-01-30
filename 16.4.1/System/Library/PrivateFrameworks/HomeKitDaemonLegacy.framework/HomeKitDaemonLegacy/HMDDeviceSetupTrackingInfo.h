@class NSUUID, NSError;

@interface HMDDeviceSetupTrackingInfo : HMFObject <HMDDeviceSetupTrackingInfo>

@property (copy) NSUUID *accessoryUUID;
@property (readonly) unsigned long long startTime;
@property (readonly) unsigned long long endTime;
@property (readonly, copy) NSError *sessionError;
@property (readonly) long long role;
@property (readonly, copy) NSUUID *identifier;

- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 startTime:(unsigned long long)a1 endTime:(unsigned long long)a2 role:(long long)a3 accessoryUUID:(id)a4;

@end
