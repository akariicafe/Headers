@class HMDUnassociatedAppleMediaAccessory, NSUUID, NSString, HMBCloudZoneID, HMDDevice;

@interface HMDAppleAccessoryPairingHomeState : HMFObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSUUID *homeUUID;
@property (retain, nonatomic) NSString *configurationAppID;
@property (retain, nonatomic) NSUUID *deviceIdentifier;
@property (retain, nonatomic) HMDDevice *device;
@property (readonly, nonatomic) HMBCloudZoneID *cloudZoneID;
@property (nonatomic) unsigned long long state;
@property (readonly, nonatomic) HMDUnassociatedAppleMediaAccessory *accessory;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithCloudZoneID:(id)a0 accessory:(id)a1;

@end
